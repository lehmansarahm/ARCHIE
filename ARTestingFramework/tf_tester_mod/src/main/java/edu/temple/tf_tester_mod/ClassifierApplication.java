package edu.temple.tf_tester_mod;

import android.app.Activity;
import android.app.Application;
import android.app.Fragment;
import android.content.res.AssetManager;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.Log;
import android.util.Size;

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

import edu.temple.gtc_core.GtcController;
import edu.temple.tf_tester_mod.env.Logger;

public class ClassifierApplication extends Application {

    private static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final Logger LOGGER = new Logger();
    private static final Object LOCK = new Object();

    private static HandlerThread handlerThread;
    private static Handler handler;

    private static List<String> frameStats;
    private static List<String> classificationStats;

    @Override
    public void onCreate() {
        frameStats = new ArrayList<>();
        frameStats.add("Previous Frame (ns),Current Frame (ns),Time Elapsed (ms),Dropped Frame Count");

        classificationStats = new ArrayList<>();
        classificationStats.add("Start Time (ns),End Time (ns),Time Elapsed (ms),Result");

        TinyDancer.create()
                .addFrameDataCallback(new FrameDataCallback() {
                    @Override
                    public void doFrame(long previousFrameNS, long currentFrameNS, int droppedFrames) {
                        long timeElapsedNS = currentFrameNS - previousFrameNS;
                        double timeElapsedMS = (timeElapsedNS / 1000000.0d);
                        String newFrameStats = (previousFrameNS + "," + currentFrameNS + ","
                                + timeElapsedMS + "," + droppedFrames);
                        LOGGER.i("Logging frame stats: " + newFrameStats);
                        frameStats.add(newFrameStats);
                    }
                })
                .show(getApplicationContext());

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

    public void onDestroy() {
        getGtcController().stopServices();

        Date currentTime = Calendar.getInstance().getTime();
        DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
        File outputFileDir = getApplicationContext().getExternalFilesDir(null);

        String frameFileName = (df.format(currentTime) + "_frames.txt");
        File frameFile = new File(outputFileDir, frameFileName);
        writeResultsToFile(frameFile, frameStats);

        String classFileName = (df.format(currentTime) + "_classification.txt");
        File classFile = new File(outputFileDir, classFileName);
        writeResultsToFile(classFile, classificationStats);

        LOGGER.i("ClassifierApplication with TinyDancer destroyed.");
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

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static AssetManager assetManager;

    public static void setAssetManager(AssetManager assetManager) {
        synchronized (LOCK) {
            ClassifierApplication.assetManager = assetManager;
        }
    }

    public static AssetManager getAssetManager() {
        synchronized (LOCK) {
            return ClassifierApplication.assetManager;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static GtcController gtcController;

    public static void setGtcController(GtcController gtcController) {
        synchronized (LOCK) {
            ClassifierApplication.gtcController = gtcController;
        }
    }

    public static GtcController getGtcController() {
        synchronized (LOCK) {
            return ClassifierApplication.gtcController;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Classifier classifier;

    public static void setClassifier(Classifier classifier) {
        synchronized (LOCK) {
            ClassifierApplication.classifier = classifier;
        }
    }

    public static Classifier getClassifier() {
        synchronized (LOCK) {
            return ClassifierApplication.classifier;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Fragment cameraFragment;

    public static void setCameraFragment(Fragment fragment) {
        synchronized (LOCK) {
            ClassifierApplication.cameraFragment = fragment;
        }
    }

    public static Fragment getCameraFragment() {
        synchronized (LOCK) {
            return ClassifierApplication.cameraFragment;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean debug = false;

    public static void toggleDebug() {
        synchronized (LOCK) {
            ClassifierApplication.debug = !ClassifierApplication.debug;
        }
    }

    public static boolean isDebug() {
        synchronized (LOCK) {
            return ClassifierApplication.debug;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean computing = false;

    public static void setComputing(boolean computing) {
        synchronized (LOCK) {
            ClassifierApplication.computing = computing;
        }
    }

    public static boolean isComputing() {
        synchronized (LOCK) {
            return ClassifierApplication.computing;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Size previewSize;

    public static void setPreviewSize(Size size) {
        synchronized (LOCK) {
            ClassifierApplication.previewSize = size;
        }
    }

    public static int getPreviewHeight() {
        synchronized (LOCK) {
            return ClassifierApplication.previewSize.getHeight();
        }
    }

    public static int getPreviewWidth() {
        synchronized (LOCK) {
            return ClassifierApplication.previewSize.getWidth();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int cameraOrientation;

    public static void setCameraOrientation(int orientation) {
        synchronized (LOCK) {
            ClassifierApplication.cameraOrientation = orientation;
        }
    }

    public static int getCameraOrientation() {
        synchronized (LOCK) {
            return ClassifierApplication.cameraOrientation;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

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