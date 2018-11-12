package com.archie.opencv_blobDetector_mod;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.res.AssetManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.Size;

import com.archie.opencv_blobDetector_mod.env.Logger;
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

import edu.temple.gtc_core.GtcController;

public class ColorBlobApplication extends Application {

    private static boolean TESTING = true;
    private static String TESTING_LABEL = "roses";

    // private static long TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    private static long TESTING_DELAY = TimeUnit.MINUTES.toMillis(5);

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    // private static final Size DESIRED_PREVIEW_SIZE = new Size(176, 144);        // xx-small
    // private static final Size DESIRED_PREVIEW_SIZE = new Size(352, 288);        // x-small
    private static final Size DESIRED_PREVIEW_SIZE = new Size(640, 480);        // small
    // private static final Size DESIRED_PREVIEW_SIZE = new Size(1280, 960);       // medium
    // private static final Size DESIRED_PREVIEW_SIZE = new Size(2048, 1536);       // large    // ** FINE TUNE HERE **
    // private static final Size DESIRED_PREVIEW_SIZE = new Size(3200, 2400);      // x-large
    // private static final Size DESIRED_PREVIEW_SIZE = new Size(4032, 3024);      // xx-large

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final Logger LOGGER = new Logger();
    private static final Object LOCK = new Object();

    private static Context initContext;
    private static List<String> frameStats;
    private static List<String> classificationStats;

    private static long preprocessStartTime, preprocessEndTime;
    private static long classificationStartTime;

    private static long executionStartTime = 0;

    private static HandlerThread handlerThread;
    private static Handler handler;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onCreate() {
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
                        LOGGER.i("Logging frame stats: " + newFrameStats);
                        frameStats.add(newFrameStats);
                    }
                }).show(initContext);

        LOGGER.i("ClassifierApplication with TinyDancer created!");
        super.onCreate();
    }

    public void onPause(Activity currentActivity) {
        LOGGER.i("Pausing profiles.");
        getGtcController().pauseProfiles();

        if (!currentActivity.isFinishing()) {
            LOGGER.d("Requesting finish");
            currentActivity.finish();
        }

        handlerThread.quitSafely();
        try {
            handlerThread.join();
            handlerThread = null;
            handler = null;
        } catch (final InterruptedException e) {
            LOGGER.e(e, "Exception!");
        }

    }

    public void onResume() {
        LOGGER.i("Resuming profiles.");
        getGtcController().resumeProfiles();

        handlerThread = new HandlerThread("inference");
        handlerThread.start();
        handler = new Handler(handlerThread.getLooper());
    }

    public boolean onDestroy() {
        try {
            getGtcController().stopServices();
            TinyDancer.hide(initContext);

            Date currentTime = Calendar.getInstance().getTime();
            DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
            File outputFileDir = initContext.getApplicationContext().getExternalFilesDir(null);

            String frameFileName = (df.format(currentTime) + "_frames.csv");
            File frameFile = new File(outputFileDir, frameFileName);
            writeResultsToFile(frameFile, frameStats);

            String classFileName = (df.format(currentTime) + "_classification.csv");
            File classFile = new File(outputFileDir, classFileName);
            writeResultsToFile(classFile, classificationStats);

            String settingsFileName = (df.format(currentTime) + "_execSettings.csv");
            File settingsFile = new File(outputFileDir, settingsFileName);
            writeExecutionSettingsToFile(settingsFile);

            LOGGER.i("ClassifierApplication with TinyDancer destroyed.");
            return true;
        } catch (Exception ex) {
            LOGGER.e("Exception encountered while attempting to shut down ClassifierApplication."
                    + "\n" + ex.getMessage());
            return false;
        }
    }


    public static void runInBackground(final Runnable r) {
        LOGGER.i("Attempting to run task in background.");
        synchronized (LOCK) {
            if (handler != null) {
                LOGGER.i("Acquired lock on background thread handler!  Running task.");
                handler.post(r);
            }
        }
    }

    public AssetManager getAssetManager() {
        synchronized (LOCK) {
            return ColorBlobApplication.this.getAssets();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static GtcController gtcController;

    public void setGtcController(GtcController gtcController) {
        synchronized (LOCK) {
            ColorBlobApplication.gtcController = gtcController;
        }
    }

    public GtcController getGtcController() {
        synchronized (LOCK) {
            return ColorBlobApplication.gtcController;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    /*private static Classifier classifier;

    public void setClassifier(Classifier classifier) {
        synchronized (LOCK) {
            ColorBlobApplication.classifier = classifier;
        }
    }

    public Classifier getClassifier() {
        synchronized (LOCK) {
            return ColorBlobApplication.classifier;
        }
    }*/

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Runnable imageConverter;

    public void setImageConverter(Runnable runnable) {
        synchronized (LOCK) {
            ColorBlobApplication.imageConverter = runnable;
        }
    }

    public Runnable getImageConverter() {
        synchronized (LOCK) {
            return ColorBlobApplication.imageConverter;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int[] rgbBytes = null;

    public void setRgbBytes(int[] bytes) {
        synchronized (LOCK) {
            ColorBlobApplication.rgbBytes = bytes;
        }
    }

    public int[] getRgbBytes() {
        synchronized (LOCK) {
            return ColorBlobApplication.rgbBytes;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static byte[] lastPreviewFrame;

    public void setLastPreviewFrame(byte[] frame) {
        synchronized (LOCK) {
            ColorBlobApplication.lastPreviewFrame = frame;
        }
    }

    public byte[] getLastPreviewFrame() {
        synchronized (LOCK) {
            return ColorBlobApplication.lastPreviewFrame;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Runnable postInferenceCallback;

    public void setPostInferenceCallback(Runnable runnable) {
        synchronized (LOCK) {
            ColorBlobApplication.postInferenceCallback = runnable;
        }
    }

    public Runnable getPostInferenceCallback() {
        synchronized (LOCK) {
            return ColorBlobApplication.postInferenceCallback;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public boolean isTesting() {
        synchronized (LOCK) {
            return ColorBlobApplication.TESTING;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean debug = false;

    public void toggleDebug() {
        synchronized (LOCK) {
            ColorBlobApplication.debug = !ColorBlobApplication.debug;
        }
    }

    public boolean isDebug() {
        synchronized (LOCK) {
            return ColorBlobApplication.debug;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean computing = false;

    public void setComputing(boolean computing) {
        synchronized (LOCK) {
            ColorBlobApplication.computing = computing;
        }
    }

    public boolean isComputing() {
        synchronized (LOCK) {
            return ColorBlobApplication.computing;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public Size getDesiredPreviewSize() {
        synchronized (LOCK) {
            return ColorBlobApplication.DESIRED_PREVIEW_SIZE;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Size previewSize;

    public void setPreviewSize(Size size) {
        synchronized (LOCK) {
            ColorBlobApplication.previewSize = size;
        }
    }

    public int getPreviewHeight() {
        synchronized (LOCK) {
            return ColorBlobApplication.previewSize.getHeight();
        }
    }

    public int getPreviewWidth() {
        synchronized (LOCK) {
            return ColorBlobApplication.previewSize.getWidth();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int rotation;

    public void setRotation(int rotation) {
        synchronized (LOCK) {
            ColorBlobApplication.rotation = rotation;
        }
    }

    public int getRotation() {
        synchronized (LOCK) {
            return ColorBlobApplication.rotation;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int cameraOrientation;

    public void setCameraOrientation(int orientation) {
        synchronized (LOCK) {
            ColorBlobApplication.cameraOrientation = orientation;
        }
    }

    public int getCameraOrientation() {
        synchronized (LOCK) {
            return ColorBlobApplication.cameraOrientation;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public void setTesting(boolean testing) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING = testing;
        }
    }

    public void setTestingLabel(String testingLabel) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING_LABEL = testingLabel;
        }
    }

    public void setTestTime(int testTime) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING_DELAY = TimeUnit.MINUTES.toMillis(testTime);
        }
    }

    public long getTestingDelay() {
        synchronized (LOCK) {
            return ColorBlobApplication.TESTING_DELAY;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private long calculateExecutionTime() {
        long currentSystemTime = System.currentTimeMillis();
        if (executionStartTime == 0) executionStartTime = currentSystemTime;
        return (TimeUnit.MILLISECONDS.toSeconds(currentSystemTime - executionStartTime));
    }

    private void writeExecutionSettingsToFile(File outputFile) {
        List<String> settings = new ArrayList<>();
        settings.add("Execution Start Time (ms)," + executionStartTime);
        settings.add("Testing?," + TESTING);
        if (TESTING) {
            settings.add("Testing Delay (ms)," + TESTING_DELAY);
            settings.add("Testing Label," + TESTING_LABEL);
        }
        settings.add("Desired Preview Height," + DESIRED_PREVIEW_SIZE.getHeight());
        settings.add("Desired Preview Width," + DESIRED_PREVIEW_SIZE.getWidth());
        writeResultsToFile(outputFile, settings);
    }

    private void writeResultsToFile(File outputFile, List<String> fileContent) {
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