package com.archie.opencv_blobDetector;

import android.app.Application;
import android.content.Context;
import android.os.SystemClock;

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

import com.archie.opencv_blobDetector.env.Logger;

public class ColorBlobApplication extends Application {

    private static boolean TESTING = true;
    private static String TESTING_LABEL = "roses";

    // private static long TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    private static long TESTING_DELAY = TimeUnit.MINUTES.toMillis(5);

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

    public boolean onDestroy() {
        try {
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

            TinyDancer.hide(initContext);
            LOGGER.i("ClassifierApplication with TinyDancer destroyed.");
            return true;
        } catch (Exception ex) {
            LOGGER.e("Exception encountered while attempting to shut down ClassifierApplication."
                    + "\n" + ex.getMessage());
            return false;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public void onPreprocessStart() {
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

    public void setTesting(boolean testing) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING = testing;
        }
    }

    public boolean isTesting() {
        synchronized (LOCK) {
            return ColorBlobApplication.TESTING;
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