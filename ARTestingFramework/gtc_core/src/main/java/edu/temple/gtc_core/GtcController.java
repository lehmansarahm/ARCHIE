package edu.temple.gtc_core;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Log;

import java.util.Map;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.async.AsyncAnnoCollector;
import edu.temple.gtc_core.async.AsyncUxCollector;
import edu.temple.gtc_core.buffers.CameraFrameBuffer;
import edu.temple.gtc_core.buffers.ClassificationResultBuffer;
import edu.temple.gtc_core.buffers.UxDataBuffer;
import edu.temple.gtc_core.classify.IClassifier;
import edu.temple.gtc_core.service_conns.CommunicatorConnection;
import edu.temple.gtc_core.service_conns.FrameLoggerConnection;
import edu.temple.gtc_core.service_conns.ResourceLoggerConnection;
import edu.temple.gtc_core.service_listeners.ITesterCommListener;
import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;

/**
    Public facing interface point for tester apps to register themselves, deploy triggers, etc.
    Controls data collection, resource management, and inter-device communication.
        ** NEEDS TO BE ABLE TO WORK WITH THIRD PARTY FRAMEWORKS LIKE UNITY, VUFORIA **
 */
public class GtcController implements ITesterCommListener {

    // --------------------------------------------------------------------------------
    //      Class constants
    // --------------------------------------------------------------------------------
    private static final long WAIT_INTERVAL = TimeUnit.SECONDS.toMillis(1);         // 1 sec in millis
    private static final long TIMER_DELAY_INTERVAL = TimeUnit.MINUTES.toMillis(1);  // 1 min in millis
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in primary class constructor
    // --------------------------------------------------------------------------------
    private static String EXTRA_MESSAGE_PATH;
    private static String EXTRA_MESSAGE_PAYLOAD;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      General purpose status flags
    // --------------------------------------------------------------------------------
    private static boolean mIsStarted = false;
    private static boolean mAreAsyncTasksRunning = false;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Tester app properties ... provided as params in primary class constructor
    // --------------------------------------------------------------------------------
    private static Activity mTestAppActivity;
    private static Context mTestAppContext;
    private static int mTestAppPid;
    private static String mTestAppName;

    private static ConfigFileReader mConfigFileReader;
    private static ProfileController mProfileController;
    private static ClassifierController mClassController;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Service connections ... DO NOT launch services directly!!
    // --------------------------------------------------------------------------------
    private static ResourceLoggerConnection mResLogConnection = new ResourceLoggerConnection();
    private static FrameLoggerConnection mFrameLogConnection = new FrameLoggerConnection();
    private static CommunicatorConnection mCommConnection = new CommunicatorConnection();
    private static Intent mCommIntent = CommunicatorConnection.getDefaultIntent();
    // --------------------------------------------------------------------------------

    private static CameraFrameBuffer cameraFrameBuffer;
    private static ClassificationResultBuffer classResultBuffer;
    private static UxDataBuffer uxDataBuffer;

    private static AsyncAnnoCollector asyncAnnoCollector;
    private static AsyncUxCollector asyncUxCollector;

    private static long phaseStartTime, phaseEndTime;
    private static long preprocessTime, classificationTime, responseTime;
    private static String classificationResult = "";


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PUBLIC-FACING METHODS FOR USE BY TESTER APPS
    //          ... * NOT * TO BE CALLED BY GTC ANNOTATOR OR ITS AFFILIATES
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    public GtcController(Activity currentActivity, int pid, String procName, String configFilename) {
        Log.d(Constants.TAG, "\n\nGTC Controller initialized with PID: " + pid);
        mTestAppActivity = currentActivity;
        mTestAppContext = currentActivity.getApplicationContext();
        mTestAppPid = pid;
        mTestAppName = procName;

        mConfigFileReader = ConfigFileReader.create(mTestAppContext, configFilename);
        mClassController = new ClassifierController(mConfigFileReader.getClassifiers());
        mProfileController = new ProfileController(currentActivity,
                mConfigFileReader.getConfigurationProfiles(),
                mConfigFileReader.getInteractionProfiles(),
                mConfigFileReader.getHardwareProfiles());

        EXTRA_MESSAGE_PATH = ResourcePropUtil.INTENT_EXTRA_GTC_MESSAGE_PATH(mTestAppContext);
        EXTRA_MESSAGE_PAYLOAD = ResourcePropUtil.INTENT_EXTRA_GTC_MESSAGE_PAYLOAD(mTestAppContext);

        mCommConnection.initialize(mTestAppContext, mCommIntent);
        mResLogConnection.initialize(mTestAppContext);
        mFrameLogConnection.initialize(mTestAppContext);

        cameraFrameBuffer = new CameraFrameBuffer();
        cameraFrameBuffer.initializeBuffer(mTestAppContext);

        classResultBuffer = new ClassificationResultBuffer();
        classResultBuffer.initializeBuffer(mTestAppContext);

        uxDataBuffer = new UxDataBuffer();
        uxDataBuffer.initializeBuffer(mTestAppContext);

        asyncAnnoCollector = new AsyncAnnoCollector(EXTRA_MESSAGE_PATH, EXTRA_MESSAGE_PAYLOAD, mCommConnection);
        asyncAnnoCollector.initializeCollector();

        asyncUxCollector = new AsyncUxCollector(EXTRA_MESSAGE_PATH, EXTRA_MESSAGE_PAYLOAD, mCommConnection);
        asyncUxCollector.initializeCollector();
    }

    public void startServices() {
        if (!mIsStarted) {
            Log.d(Constants.TAG, "Starting GTC data collection services!");
            mCommConnection.bind(); // service should already be started
            mResLogConnection.startService(mTestAppPid, mTestAppName);
            mFrameLogConnection.startService(mTestAppPid, mTestAppName);

            // wait for a bit, then attempt to register self as new tester app mTestAppCallbackListener
            Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                public void run() {
                    if (mCommConnection.isServiceBound()) {
                        Log.d(Constants.TAG, "Communicator Service has been bound.  Registering mTestAppCallbackListener.");
                        mCommConnection.registerListener(GtcController.this, mTestAppPid);
                    } else
                        Log.e(Constants.TAG, "Cannot register mTestAppCallbackListener if Communicator Service is not bound!");
                }
            }, WAIT_INTERVAL);

            // wait for another bit (to give Comm Service time to settle), then attempt to start
            // the async data collection
            handler.postDelayed(new Runnable() {
                public void run() {
                    scheduleAsyncDataCollection();
                }
            }, WAIT_INTERVAL * 2);

            // alright we're good to go ... set the status flag
            mIsStarted = true;
        } else Log.e(Constants.TAG, "GTC Controller already started.");
    }

    public void stopServices() {
        if (mIsStarted) {
            Log.d(Constants.TAG, "Stopping async data collectors.");
            asyncAnnoCollector.stopCollection();
            asyncUxCollector.stopCollection();

            Log.d(Constants.TAG, "Stopping GTC data collection services.");
            mCommConnection.unbind();
            mResLogConnection.stopService();
            mFrameLogConnection.stopService();

            Log.d(Constants.TAG, "Writing UX results to file.");
            uxDataBuffer.dumpBuffer();

            Log.d(Constants.TAG, "Writing classification stats to file.");
            classResultBuffer.dumpBuffer();

            Log.d(Constants.TAG, "Cleaning up final state variables.");
            mConfigFileReader.cleanup();
            mProfileController.cleanup();
            mClassController.cleanup();
            mAreAsyncTasksRunning = false;
            mIsStarted = false;
        } else Log.e(Constants.TAG, "GTC Controller already stopped.");
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    /**
     * Called when the subscribing app wants to pause (BUT NOT STOP) system execution
     */
    public void pauseProfiles() {
        mProfileController.pause();
    }

    /**
     * Called when the subscribing app wants to resume (BUT NOT RE-INIT) system execution
     */
    public void resumeProfiles() {
        mProfileController.resume();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    /**
     * Called by the current configuration profile when all sensors are ready and the rest of
     * the program flow pipeline can continue ...
     */
    public void onSensorsReady() {
        mClassController.getCurrentClassifier().onSensorsReady(mTestAppActivity);
        mProfileController.getCurrentInteractionProfile().onSensorsReady();
    }

    /**
     * Called by the current configuration profile when one of the sensors returns data that
     * should be processed by the classifier on duty
     *
     * @param sensorOutput
     */
    public void onDataAvailable(Map<String, Object> sensorOutput) {
        if (sensorOutput == null) {
            Log.e(Constants.TAG, "Cannot classify with no data!");
            return;
        }

        IClassifier currentClassifier = mClassController.getCurrentClassifier();
        if (currentClassifier == null) {
            Log.e(Constants.TAG, "Can't pass data to null classifier!");
            return;
        }

        // call the corresponding classifier (pre-processing first)
        phaseStartTime = SystemClock.elapsedRealtime();
        currentClassifier.preprocess(sensorOutput);

    }

    /**
     * Called by the classifier on duty to signal that it is done preprocessing
     *
     * @param preprocessOutput
     */
    public void onClassifierPreprocessComplete(Map<String, Object> preprocessOutput) {
        phaseEndTime = SystemClock.elapsedRealtime();
        preprocessTime = (phaseEndTime - phaseStartTime);

        if (preprocessOutput == null) {
            Log.e(Constants.TAG, "No output from preprocessing phase.  Cannot continue.");
            return;
        }

        // buffer any input data that the classifier may be using
        if (preprocessOutput.containsKey(Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT)) {
            Bitmap preprocessImage = (Bitmap) preprocessOutput.get(Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT);
            cameraFrameBuffer.insert(preprocessImage, "PLACEHOLDER");
        }

        IClassifier currentClassifier = mClassController.getCurrentClassifier();
        if (currentClassifier == null) {
            Log.e(Constants.TAG, "Can't pass data to null classifier!");
            return;
        }

        phaseStartTime = SystemClock.elapsedRealtime();
        currentClassifier.classify(preprocessOutput);
    }

    /**
     * Called by the classifier on duty to signal that it is done classifying
     *
     * @param classificationOutput
     */
    public void onClassifierClassificationComplete(Map<String, Object> classificationOutput) {
        phaseEndTime = SystemClock.elapsedRealtime();
        classificationTime = (phaseEndTime - phaseStartTime);

        if (classificationOutput == null) {
            Log.e(Constants.TAG, "No output from classification phase.  Cannot continue.");
            return;
        }

        // retrieve the classification result
        if (classificationOutput.containsKey(Constants.BUNDLE_KEY_CLASSIFICATION_TOP_RESULT)) {
            classificationResult = classificationOutput.get(Constants.BUNDLE_KEY_CLASSIFICATION_TOP_RESULT).toString();
            classResultBuffer.insert(classificationResult, preprocessTime, classificationTime);
        }

        IClassifier currentClassifier = mClassController.getCurrentClassifier();
        if (currentClassifier == null) {
            Log.e(Constants.TAG, "Can't pass data to null classifier!");
            return;
        }

        phaseStartTime = SystemClock.elapsedRealtime();
        currentClassifier.evaluate(classificationOutput);
    }

    /**
     * Called by the classifier on duty to signal that it is done post-processing
     *
     * @param responseOutput
     */
    public void onClassifierEvaluationComplete(Map<String, Object> responseOutput) {
        phaseEndTime = SystemClock.elapsedRealtime();
        responseTime = (phaseEndTime - phaseStartTime);

        // finally, process the response
        if (responseOutput == null) {
            Log.e(Constants.TAG, "No output from response phase.  Cannot continue.");
            return;
        }

        if (responseOutput.containsKey(Constants.BUNDLE_KEY_RESPONSE_EVENT)) {
            mProfileController.getCurrentInteractionProfile().onClassifierResultAvailable(responseOutput);
            String responseEventLabel = responseOutput.get(Constants.BUNDLE_KEY_RESPONSE_EVENT).toString();
            Log.e(Constants.TAG, "RECEIVED PIPELINE RESULT OF: " + responseEventLabel
                    + " \t\t FOR CLASSIFICATION: " + classificationResult
                    + " \t\t IN " + responseTime + " MS");

            if (responseEventLabel.equals(Constants.CLASSIFIER_RESPONSE_POSITIVE_MATCH) &&
                    responseOutput.containsKey(Constants.BUNDLE_KEY_RESPONSE_TIME) && !classificationResult.isEmpty()) {
                int responseEventTime = (int)responseOutput.get(Constants.BUNDLE_KEY_RESPONSE_TIME);
                logEventMatch(classificationResult, responseEventTime);
            }
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      INTERNAL EVENT HANDLER, TO BE CALLED * ONLY * BY THE GTC ANNOTATOR
    //          ... * NOT * FOR USE BY TESTER APPS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onGtcMessageReceived(Bundle data) {
        String messagePath = data.getString(EXTRA_MESSAGE_PATH);
        if (messagePath == null || messagePath.isEmpty()) {
            Log.e(Constants.TAG, "Received GTC message but no message path was provided.");
            return;
        }

        String outputDirName;
        String messagePayload = data.getString(EXTRA_MESSAGE_PAYLOAD);
        Log.i(Constants.TAG, "Received message from GTC Annotator with path: "
            + messagePath + "\t\t and payload: " + messagePayload);

        switch (messagePath) {

            case Constants.MESSAGE_PATH_ANNOTATION_ACQUIRED:
                if (messagePayload == null || messagePayload.isEmpty()) {
                    Log.e(Constants.TAG, "Received GTC annotation with message path provided, but no payload.");
                    return;
                }

                Log.i(Constants.TAG, "Received annotation result from GTC: " + messagePayload
                        + "\t\tDumping backup buffer to storage.");

                // create an output folder with name: "<date>_<time>_<tester app result>_<GTC annotation result>"
                outputDirName = (cameraFrameBuffer.getBackupBufferLabel() + "_" + messagePayload);
                cameraFrameBuffer.dumpBuffer(outputDirName);
                break;

            case Constants.MESSAGE_PATH_ASYNC_ANNOTATION_ACQUIRED:
                // Should only send a response back from watch to phone if activity WAS completed asynchronously
                Log.i(Constants.TAG, "Received async event from GTC. \t\tDumping backup buffer to storage.");

                // move primary buffer contents to backup buffer
                outputDirName = "ASYNC";
                cameraFrameBuffer.backup(outputDirName);

                // write backup buffer contents to output folder: "<date>_<time>_ASYNC"
                cameraFrameBuffer.dumpBuffer(outputDirName);
                break;

            case Constants.MESSAGE_PATH_UX_ACQUIRED:
                if (messagePayload == null || messagePayload.isEmpty()) {
                    Log.e(Constants.TAG, "Received GTC UX result with message path provided, but no payload.");
                    return;
                }

                Log.e(Constants.TAG, "Received UX result from GTC: " + messagePayload);
                uxDataBuffer.insert(messagePayload);
                break;

            default:
                Log.e(Constants.TAG, "Unable to match GTC message path: " + messagePath);
                break;

        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void scheduleAsyncDataCollection() {
        if (!mAreAsyncTasksRunning) {
            final long asyncAnnoIntervalMillis = mConfigFileReader.getAsyncAnnoIntervalMillis();
            final long asyncUxIntervalMillis = mConfigFileReader.getAsyncUxIntervalMillis();
            final String defaultAnnoLabel = mConfigFileReader.getDefaultAsyncLabel();

            Log.i(Constants.TAG, "Scheduling async data collection with desired result: " + defaultAnnoLabel
                    + "\t\t ... annotation interval (millis): " + asyncAnnoIntervalMillis
                    + "\t\t ... UX interval (millis): " + asyncUxIntervalMillis);

            asyncAnnoCollector.scheduleCollection(defaultAnnoLabel, asyncAnnoIntervalMillis);
            asyncUxCollector.scheduleCollection(defaultAnnoLabel, asyncAnnoIntervalMillis, asyncUxIntervalMillis);

            // signal that async tasks are running
            mAreAsyncTasksRunning = true;
        } else Log.e(Constants.TAG, "Async data collection tasks already scheduled.");
    }

    private void logEventMatch(String label, int eventIntervalMinutes) {
        // Send message to GTC Annotator ... handle response in "onGtcMessageReceived"
        // ... LABEL PROVIDED TO THIS METHOD REPRESENTS THE LABEL FOR THE WHOLE SET!!

        if (mCommConnection.isServiceBound()) {
            // we have a positive event match from the tester app and a valid connection to the GTC
            // ... make a backup of the primary buffer so that other apps don't mess up this data set
            cameraFrameBuffer.backup(label);

            // forward the annotation request to the watch
            Bundle newData = new Bundle();
            newData.putString(EXTRA_MESSAGE_PATH, Constants.MESSAGE_PATH_ANNOTATION_REQUESTED);
            newData.putString(EXTRA_MESSAGE_PAYLOAD, label + "," + eventIntervalMinutes);
            mCommConnection.sendMessageToGtc(newData);
        } else Log.e(Constants.TAG, "Cannot send message if Communicator Service is not bound!");
    }

}