package com.archie.tf_speech_mod;

import android.app.Activity;
import android.app.Application;

import com.archie.tf_speech_mod.env.Logger;
import com.codemonkeylabs.fpslibrary.FrameDataCallback;
import com.codemonkeylabs.fpslibrary.TinyDancer;
import com.codemonkeylabs.fpslibrary.TinyDancerBuilder;

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

public class SpeechApplication extends Application {

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    // public static final long TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    public static final long TESTING_DELAY = TimeUnit.MINUTES.toMillis(5);
    public static final boolean TESTING = true;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final Logger LOGGER = new Logger();
    private static final Object LOCK = new Object();

    private static TinyDancerBuilder tdb;

    private static List<String> frameStats;
    private static List<String> classificationStats;
    private static long executionStartTime = 0;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static FrameDataCallback fdc = new FrameDataCallback() {
        @Override
        public void doFrame(long previousFrameNS, long currentFrameNS, int droppedFrames) {
            // Calculate time elapsed between frames (in nanoseconds)
            long timeElapsedNS = currentFrameNS - previousFrameNS;
            double timeElapsedMS = (timeElapsedNS / 1000000.0d);

            // calculate time spent in overall program execution (seconds)
            long currentSystemTime = System.currentTimeMillis();
            if (executionStartTime == 0) executionStartTime = currentSystemTime;
            long totalTimeElapsed =
                    TimeUnit.MILLISECONDS.toSeconds(currentSystemTime - executionStartTime);

            // output the frame stats
            String newFrameStats = (totalTimeElapsed + ","
                    + previousFrameNS + "," + currentFrameNS + ","
                    + timeElapsedMS + "," + droppedFrames);
            LOGGER.i("Logging frame stats: " + newFrameStats);
            frameStats.add(newFrameStats);
        }};

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onCreate() {
        frameStats = new ArrayList<>();
        frameStats.add("Previous Frame (ns),Current Frame (ns),Time Elapsed (ms),Dropped Frame Count");

        classificationStats = new ArrayList<>();
        classificationStats.add("Start Time (ns),End Time (ns),Time Elapsed (ms),Result");

        tdb = TinyDancer.create();
        tdb.addFrameDataCallback(fdc);
        tdb.show(this);

        LOGGER.i("SpeechApplication with TinyDancer created!");
        super.onCreate();
    }

    public void onPause(Activity currentActivity) {
        LOGGER.i("Pausing profiles.");
        getGtcController().pauseProfiles();

        if (!currentActivity.isFinishing()) {
            LOGGER.d("Requesting finish");
            currentActivity.finish();
        }
    }

    public void onResume() {
        LOGGER.i("Resuming profiles.");
        getGtcController().resumeProfiles();
    }

    public boolean onDestroy() {
        try {
            getGtcController().stopServices();
            TinyDancer.hide(this);

            Date currentTime = Calendar.getInstance().getTime();
            DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
            File outputFileDir = getApplicationContext().getExternalFilesDir(null);

            String frameFileName = (df.format(currentTime) + "_frames.txt");
            File frameFile = new File(outputFileDir, frameFileName);
            writeResultsToFile(frameFile, frameStats);

            String classFileName = (df.format(currentTime) + "_classification.txt");
            File classFile = new File(outputFileDir, classFileName);
            writeResultsToFile(classFile, classificationStats);

            LOGGER.i("SpeechApplication with TinyDancer destroyed.");
            return true;
        } catch (Exception ex) {
            LOGGER.e("Exception encountered while attempting to shut down SpeechApplication."
                    + "\n" + ex.getMessage());
            return false;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static GtcController gtcController;

    public void setGtcController(GtcController gtcController) {
        synchronized (LOCK) {
            SpeechApplication.gtcController = gtcController;
        }
    }

    public GtcController getGtcController() {
        synchronized (LOCK) {
            return SpeechApplication.gtcController;
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