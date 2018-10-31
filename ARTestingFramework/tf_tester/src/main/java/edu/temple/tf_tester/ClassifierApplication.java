package edu.temple.tf_tester;

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

import edu.temple.tf_tester.env.Logger;

public class ClassifierApplication extends Application {

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    // public static final long TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    public static final long TESTING_DELAY = TimeUnit.MINUTES.toMillis(5);
    public static final boolean TESTING = true;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final Logger LOGGER = new Logger();

    private static Context initContext;
    private static List<String> frameStats;
    private static List<String> classificationStats;

    private static long classificationStartTime;
    private static long executionStartTime = 0;

    @Override
    public void onCreate() {
        frameStats = new ArrayList<>();
        frameStats.add("Time (sec),Previous Frame (ns),Current Frame (ns),Time Elapsed (ms),Dropped Frame Count");

        classificationStats = new ArrayList<>();
        classificationStats.add("Time (sec),Start Time (ns),End Time (ns),Time Elapsed (ms),Result");

        initContext = this.getApplicationContext();
        TinyDancer.create()
                .addFrameDataCallback(new FrameDataCallback() {
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
                    }
                }).show(initContext);

        LOGGER.i("ClassifierApplication with TinyDancer created!");
        super.onCreate();
    }

    public void onClassificationStart() {
        classificationStartTime = SystemClock.elapsedRealtimeNanos();
    }

    public void onClassificationComplete(String result) {
        long classificationEndTime = SystemClock.elapsedRealtimeNanos();
        double classificationElapsedTime = ((classificationEndTime - classificationStartTime) / 1000000.0d);
        String newClassStats = (classificationStartTime + "," + classificationEndTime
                + "," + classificationElapsedTime + "," + result);
        LOGGER.i("Logging classification stats: " + newClassStats);
        classificationStats.add(newClassStats);
    }

    public boolean onDestroy() {
        try {
            TinyDancer.hide(initContext);
            Date currentTime = Calendar.getInstance().getTime();
            DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
            File outputFileDir = initContext.getApplicationContext().getExternalFilesDir(null);

            String frameFileName = (df.format(currentTime) + "_frames.txt");
            File frameFile = new File(outputFileDir, frameFileName);
            writeResultsToFile(frameFile, frameStats);

            String classFileName = (df.format(currentTime) + "_classification.txt");
            File classFile = new File(outputFileDir, classFileName);
            writeResultsToFile(classFile, classificationStats);

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