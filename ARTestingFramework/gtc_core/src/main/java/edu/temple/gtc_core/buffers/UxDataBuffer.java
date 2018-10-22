package edu.temple.gtc_core.buffers;

import android.content.Context;
import android.util.Log;

import edu.temple.gtc_core.utils.Constants;

public class UxDataBuffer {

    private static final String UX_HEADER = "Timestamp,UxResult";
    private static final String UX_FILENAME = "UxResults.txt";

    private static Context context;
    private static StatsMap uxStatsMap;

    public void initializeBuffer(Context context) {
        Log.i(Constants.TAG, "Initializing UX Data Buffer.");
        this.context = context;
        uxStatsMap = new StatsMap(StatsMap.Type.Single, UX_HEADER);
    }

    public void insert(String payload) {
        Log.i(Constants.TAG, "Inserting new record into UX Data Buffer.");
        uxStatsMap.insert(payload);
    }

    public void dumpBuffer() {
        Log.i(Constants.TAG, "Dumping UX Data Buffer to file.");
        uxStatsMap.printToFile(context, UX_FILENAME);
        uxStatsMap.clear();
    }

}