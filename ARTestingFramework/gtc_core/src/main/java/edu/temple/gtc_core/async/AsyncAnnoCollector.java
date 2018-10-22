package edu.temple.gtc_core.async;

import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;

import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.service_conns.CommunicatorConnection;

public class AsyncAnnoCollector {

    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in primary class constructor
    // --------------------------------------------------------------------------------
    private static String EXTRA_MESSAGE_PATH;
    private static String EXTRA_MESSAGE_PAYLOAD;
    // --------------------------------------------------------------------------------
    private static String mDefaultAnnoLabel;
    private static CommunicatorConnection mCommConnection;
    // --------------------------------------------------------------------------------

    private static Timer mAnnoTimer;
    private static Handler mAnnoTimerHandler;
    private static TimerTask mAnnoTimerTask;
    private static long mAnnoIntervalMins;

    class AnnoAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.i(Constants.TAG, "Sending async annotation request.");
            Bundle newData = new Bundle();
            newData.putString(EXTRA_MESSAGE_PATH, Constants.MESSAGE_PATH_ASYNC_ANNOTATION_REQUESTED);
            newData.putString(EXTRA_MESSAGE_PAYLOAD, mDefaultAnnoLabel + "," + mAnnoIntervalMins);
            mCommConnection.sendMessageToGtc(newData);
            return null;
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public AsyncAnnoCollector(String messagePath, String messagePayload, CommunicatorConnection conn) {
        this.EXTRA_MESSAGE_PATH = messagePath;
        this.EXTRA_MESSAGE_PAYLOAD = messagePayload;
        mCommConnection = conn;
    }

    public void initializeCollector() {
        mAnnoTimer = new Timer();
        mAnnoTimerHandler = new Handler();
        mAnnoTimerTask = new TimerTask() {
            @Override
            public void run() {
                mAnnoTimerHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        new AnnoAsyncTask().execute();
                    }
                });
            }
        };
    }

    public void scheduleCollection(String annoLabel, long asyncAnnoIntervalMillis) {
        mDefaultAnnoLabel = annoLabel;
        mAnnoIntervalMins = TimeUnit.MILLISECONDS.toMinutes(asyncAnnoIntervalMillis);
        mAnnoTimer.schedule(mAnnoTimerTask, 0, asyncAnnoIntervalMillis);
    }

    public void stopCollection() {
        mAnnoTimer.cancel();
    }

}