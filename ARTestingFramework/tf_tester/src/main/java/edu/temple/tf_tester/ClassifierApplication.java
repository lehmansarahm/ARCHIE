package edu.temple.tf_tester;

import android.app.Application;
import android.os.SystemClock;
import android.util.Log;

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

public class ClassifierApplication extends Application {

    private static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final String TAG = "ClassifierApplication";

    private static List<String> frameStats;
    private static List<String> classificationStats;
    private static long classificationStartTime;

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
                    Log.i(TAG, "Logging frame stats: " + newFrameStats);
                    frameStats.add(newFrameStats);
                }
            })
            .show(getApplicationContext());

        Log.i(TAG, "ClassifierApplication with TinyDancer created!");
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
        Log.i(TAG, "Logging classification stats: " + newClassStats);
        classificationStats.add(newClassStats);
    }

    public void onDestroy() {
        Date currentTime = Calendar.getInstance().getTime();
        DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
        File outputFileDir = getApplicationContext().getExternalFilesDir(null);

        String frameFileName = (df.format(currentTime) + "_frames.txt");
        File frameFile = new File(outputFileDir, frameFileName);
        writeResultsToFile(frameFile, frameStats);

        String classFileName = (df.format(currentTime) + "_classification.txt");
        File classFile = new File(outputFileDir, classFileName);
        writeResultsToFile(classFile, classificationStats);

        Log.i(TAG, "ClassifierApplication with TinyDancer destroyed.");
    }

    private void writeResultsToFile(File outputFile, List<String> fileContent) {
        try {
            Log.d(TAG, "Writing resource stats to file: " + outputFile.getPath());
            if (!outputFile.exists()) outputFile.createNewFile();

            FileOutputStream stream = new FileOutputStream(outputFile);
            OutputStreamWriter writer = new OutputStreamWriter(stream);
            for (String line : fileContent) { writer.append(line + "\n"); }

            writer.close();
            stream.flush();
            stream.close();
        } catch(FileNotFoundException ex) {
            Log.e(TAG, "Unable to access output file.  Cannot write results to file.", ex);
        } catch (IOException ex) {
            Log.e(TAG, "Unable to write to output file, or close output stream.", ex);
        }
    }
}