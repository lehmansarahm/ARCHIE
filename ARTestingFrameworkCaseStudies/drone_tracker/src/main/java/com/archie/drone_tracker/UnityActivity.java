package com.archie.drone_tracker;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Size;

import com.archie.drone_tracker.env.Logger;
import com.codemonkeylabs.fpslibrary.FrameDataCallback;
import com.codemonkeylabs.fpslibrary.TinyDancer;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.concurrent.TimeUnit;

public class UnityActivity extends Activity {

    private static final String     EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    private static final String     EXTRA_TESTING_LABEL = "testingLabel";
    private static final String     EXTRA_TRIAL_TIME = "trialTime";

    protected static final String   CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    protected static final Logger LOGGER = new Logger();
    protected static final Object   LOCK = new Object();

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    protected static boolean        TESTING = true;
    protected static String         TESTING_LABEL = "roses";

    // protected static long        TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    protected static long           TESTING_DELAY = 0; // TimeUnit.MINUTES.toMillis(5);

    protected static Context initContext;
    protected static List<String> frameStats;
    protected static List<String>   classificationStats;

    protected static long           executionStartTime = 0;
    private static long             preprocessStartTime, preprocessEndTime;
    private static long             classificationStartTime;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    protected void onStart() {
        super.onStart();
        frameStats = new ArrayList<>();
        frameStats.add("Time (sec),Previous Frame (ns),Current Frame (ns),Time Elapsed (ms),Dropped Frame Count");

        classificationStats = new ArrayList<>();
        classificationStats.add("Time (sec),Preproc Start Time (ns),Preproc End Time (ns),Preproc Time Elapsed (ms),"
                + "Class Start Time (ns),Class End Time (ns),Class Time Elapsed (ms),Result,Confidence");

        initContext = this.getApplicationContext();
        TinyDancer.create()
                .addFrameDataCallback(new FrameDataCallback() {
                    @Override
                    public void doFrame(long previousFrameNS, long currentFrameNS, int droppedFrames) {
                        // Calculate time elapsed between frames (in nanoseconds)
                        long timeElapsedNS = currentFrameNS - previousFrameNS;
                        double timeElapsedMS = (timeElapsedNS / 1000000.0d);

                        // calculate time spent in overall program execution (seconds)
                        long executionTimeElapsed = calculateExecutionTime();

                        // output the frame stats
                        String newFrameStats = (executionTimeElapsed + ","
                                + previousFrameNS + "," + currentFrameNS + ","
                                + timeElapsedMS + "," + droppedFrames);
                        // LOGGER.i("Logging frame stats: " + newFrameStats);
                        frameStats.add(newFrameStats);
                    }
                }).show(initContext);

        initializeTestInstance(getIntent());
        LOGGER.i("Base application with TinyDancer created!");
    }

    protected void onDestroy() {
        try {
            TinyDancer.hide(initContext);

            Date currentTime = Calendar.getInstance().getTime();
            DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
            File outputFileDir = initContext.getApplicationContext().getExternalFilesDir(null);

            String settingsFileName = (df.format(currentTime) + "_execSettings.csv");
            File settingsFile = new File(outputFileDir, settingsFileName);
            writeExecutionSettingsToFile(settingsFile);

            String frameFileName = (df.format(currentTime) + "_frames.csv");
            File frameFile = new File(outputFileDir, frameFileName);
            writeResultsToFile(frameFile, frameStats);

            String classFileName = (df.format(currentTime) + "_classification.csv");
            File classFile = new File(outputFileDir, classFileName);
            writeResultsToFile(classFile, classificationStats);

            LOGGER.i("ClassifierApplication with TinyDancer destroyed.");
        } catch (Exception ex) {
            LOGGER.e("Exception encountered while attempting to shut down ClassifierApplication."
                    + "\n" + ex.getMessage());
        } finally {
            super.onDestroy();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    /*public void onPreprocessStart() {
        LOGGER.i("Test app has started pre-processing!");
        preprocessStartTime = SystemClock.elapsedRealtimeNanos();
    }

    public void onPreprocessComplete() {
        LOGGER.i("Test app has finished pre-processing!");
        preprocessEndTime = SystemClock.elapsedRealtimeNanos();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public void onClassificationStart() {
        LOGGER.i("Test app has started classification!");
        classificationStartTime = SystemClock.elapsedRealtimeNanos();
    }

    public void onClassificationComplete(String result, float confidence) {
        LOGGER.i("Test app has finished classification!");

        // calculate time spent in pre-processing (millis)
        double preprocessElapsedTime = ((preprocessEndTime - preprocessStartTime) / 1000000.0d);

        // calculate time spent in classification (millis)
        long classificationEndTime = SystemClock.elapsedRealtimeNanos();
        double classificationElapsedTime = ((classificationEndTime - classificationStartTime) / 1000000.0d);

        // calculate time spent in overall program execution (seconds)
        long executionTimeElapsed = calculateExecutionTime();

        // add stats to collection
        String newClassStats = (executionTimeElapsed + ","
                + preprocessStartTime + "," + preprocessEndTime + "," + preprocessElapsedTime + ","
                + classificationStartTime + "," + classificationEndTime + "," + classificationElapsedTime + ","
                + result + "," + confidence);
        LOGGER.i("Logging classification stats: " + newClassStats);
        classificationStats.add(newClassStats);
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    protected static Size DESIRED_PREVIEW_SIZE = new Size(640, 480);

    public void setDesiredPreviewSize(Size size) {
        synchronized (LOCK) {
            UnityActivity.DESIRED_PREVIEW_SIZE = size;
        }
    }

    public Size getDesiredPreviewSize() {
        synchronized (LOCK) {
            return UnityActivity.DESIRED_PREVIEW_SIZE;
        }
    }*/

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void initializeTestInstance(Intent intent) {
        if (intent.hasExtra(EXTRA_TIMED_TEST)) {
            String rawIsTesting = intent.getStringExtra(EXTRA_TIMED_TEST);
            try {
                Boolean isTesting = Boolean.parseBoolean(rawIsTesting);
                LOGGER.i("RECEIVED NOTICE TO QUIT AFTER TEST TIME LIMIT EXPIRES: " + isTesting);
                setTesting(isTesting);
            } catch (Exception ex) {
                LOGGER.e(ex, "Something went wrong while trying to parse raw testing string: " + rawIsTesting);
            }
        }
        else LOGGER.i("NO TIMED_TEST RUNTIME PARAM RECEIVED.");

        if (intent.hasExtra(EXTRA_TESTING_LABEL)) {
            String testingLabel = intent.getStringExtra(EXTRA_TESTING_LABEL);
            LOGGER.i("RECEIVED NOTICE TO USE TESTING LABEL: " + testingLabel);
            setTestingLabel(testingLabel);
        }
        else LOGGER.i("NO TESTING_LABEL RUNTIME PARAM RECEIVED.");

        if (intent.hasExtra(EXTRA_TRIAL_TIME)) {
            String rawTrialTime = intent.getStringExtra(EXTRA_TRIAL_TIME);
            try {
                int trialTime = Integer.parseInt(rawTrialTime);
                setTestTime(trialTime);
                LOGGER.i("RECEIVED NOTICE TO USE TRIAL TIME (IN MINUTES): " + trialTime);
                LOGGER.i("TEST APP WILL AUTO-FINISH AFTER DELAY (IN MILLIS): " + getTestingDelay());
            } catch (Exception ex) {
                LOGGER.e(ex, "Something went wrong while trying to parse raw trial time string: " + rawTrialTime);
            }
        }
        else LOGGER.i("NO TRIAL_TIME RUNTIME PARAM RECEIVED.");

        LOGGER.i("SETTING TRIAL TIME FOR: " + getTestingDelay() + " MILLIS");
        if (isTesting() && getTestingDelay() != 0) {
            final Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                @Override
                public void run() {
                    LOGGER.e("TESTING TIME LIMIT REACHED.");
                    UnityActivity.this.finishAffinity();
                }}, getTestingDelay());
        }
    }

    private void setTesting(boolean testing) {
        synchronized (LOCK) {
            UnityActivity.TESTING = testing;
        }
    }

    private boolean isTesting() {
        synchronized (LOCK) {
            return UnityActivity.TESTING;
        }
    }

    private void setTestingLabel(String testingLabel) {
        synchronized (LOCK) {
            UnityActivity.TESTING_LABEL = testingLabel;
        }
    }

    private void setTestTime(int testTime) {
        synchronized (LOCK) {
            UnityActivity.TESTING_DELAY = TimeUnit.MINUTES.toMillis(testTime);
        }
    }

    private long getTestingDelay() {
        synchronized (LOCK) {
            return UnityActivity.TESTING_DELAY;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    protected long calculateExecutionTime() {
        long currentSystemTime = System.currentTimeMillis();
        if (executionStartTime == 0) executionStartTime = currentSystemTime;
        return (TimeUnit.MILLISECONDS.toSeconds(currentSystemTime - executionStartTime));
    }

    protected void writeExecutionSettingsToFile(File outputFile) {
        List<String> settings = new ArrayList<>();
        settings.add("Execution Start Time (ms)," + executionStartTime);
        settings.add("Testing?," + TESTING);
        if (TESTING) {
            settings.add("Testing Delay (ms)," + TESTING_DELAY);
            settings.add("Testing Label," + TESTING_LABEL);
        }
        //settings.add("Desired Preview Height," + DESIRED_PREVIEW_SIZE.getHeight());
        //settings.add("Desired Preview Width," + DESIRED_PREVIEW_SIZE.getWidth());
        writeResultsToFile(outputFile, settings);
    }

    protected void writeResultsToFile(File outputFile, List<String> fileContent) {
        try {
            LOGGER.i("Writing resource stats to file: " + outputFile.getPath());
            if (!outputFile.exists()) outputFile.createNewFile();

            FileOutputStream stream = new FileOutputStream(outputFile);
            OutputStreamWriter writer = new OutputStreamWriter(stream);
            for (String line : fileContent) { writer.append(line + "\n"); }

            writer.close();
            stream.flush();
            stream.close();
        } catch(FileNotFoundException ex) {
            LOGGER.e("Unable to access output file.  Cannot write results to file.", ex);
        } catch (IOException ex) {
            LOGGER.e("Unable to write to output file, or close output stream.", ex);
        }
    }

}