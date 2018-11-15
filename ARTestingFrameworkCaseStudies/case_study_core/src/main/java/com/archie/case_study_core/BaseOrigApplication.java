package com.archie.case_study_core;

import android.os.SystemClock;

import java.io.File;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public abstract class BaseOrigApplication extends BaseApplication {

    private static long preprocessStartTime, preprocessEndTime;
    private static long classificationStartTime;

    protected boolean onDestroy() {
        Date currentTime = Calendar.getInstance().getTime();
        DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
        File outputFileDir = initContext.getApplicationContext().getExternalFilesDir(null);

        String settingsFileName = (df.format(currentTime) + "_execSettings.csv");
        File settingsFile = new File(outputFileDir, settingsFileName);
        writeExecutionSettingsToFile(settingsFile);

        return super.onDestroy();
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

}