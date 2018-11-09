package edu.temple.gtc_core.buffers;

import android.content.Context;
import android.util.Log;

import edu.temple.gtc_core.utils.Constants;

public class ClassificationResultBuffer {

    private static final String CLASS_HEADER = "Timestamp,Attempt No,Result,"
            + "Time to Preprocess (millis),Time to Classify (millis)";
    private static final String CLASS_FILENAME = "ClassificationResults.csv";

    private static Context context;
    private static StatsMap classificationStatsMap;
    private static int classificationCounter;

    public void initializeBuffer(Context context) {
        Log.i(Constants.TAG, "Initializing Classification Result Buffer.");
        this.context = context;
        classificationStatsMap = new StatsMap(StatsMap.Type.Single, CLASS_HEADER);
        classificationCounter = 1;
    }

    public void insert(String result, long preprocessTime, long classificationTime) {
        Log.i(Constants.TAG, "Inserting new record into Classification Result Buffer.");
        String statsValue = (classificationCounter
                + "," + result
                + "," + preprocessTime
                + "," + classificationTime);
        classificationStatsMap.insert(statsValue);
        classificationCounter++;
    }

    public void dumpBuffer() {
        Log.i(Constants.TAG, "Dumping Classification Result Buffer to file.");
        classificationStatsMap.printToFile(context, CLASS_FILENAME);
        classificationStatsMap.clear();
    }

}