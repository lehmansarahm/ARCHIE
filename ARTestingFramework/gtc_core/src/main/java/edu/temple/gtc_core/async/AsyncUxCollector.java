package edu.temple.gtc_core.async;

import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;

import java.util.Timer;
import java.util.TimerTask;

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.service_conns.CommunicatorConnection;

public class AsyncUxCollector {

    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in primary class constructor
    // --------------------------------------------------------------------------------
    private static String EXTRA_MESSAGE_PATH;
    private static String EXTRA_MESSAGE_PAYLOAD;
    // --------------------------------------------------------------------------------
    private static String mDefaultAnnoLabel;
    private static CommunicatorConnection mCommConnection;
    // --------------------------------------------------------------------------------

    private static Timer mUxTimer;
    private static Handler mUxTimerHandler;
    private static TimerTask mUxTimerTask;
    private static long mAnnoIntervalMins;

    class UxAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.i(Constants.TAG, "Sending async UX request.");
            Bundle newData = new Bundle();
            newData.putString(EXTRA_MESSAGE_PATH, Constants.MESSAGE_PATH_UX_REQUESTED);
            newData.putString(EXTRA_MESSAGE_PAYLOAD, mDefaultAnnoLabel);
            mCommConnection.sendMessageToGtc(newData);
            return null;
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public AsyncUxCollector(String messagePath, String messagePayload, CommunicatorConnection conn) {
        this.EXTRA_MESSAGE_PATH = messagePath;
        this.EXTRA_MESSAGE_PAYLOAD = messagePayload;
        mCommConnection = conn;
    }

    public void initializeCollector() {
        mUxTimer = new Timer();
        mUxTimerHandler = new Handler();
        mUxTimerTask = new TimerTask() {
            @Override
            public void run() {
                mUxTimerHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        new UxAsyncTask().execute();
                    }
                });
            }
        };
    }

    public void scheduleCollection(String annoLabel, long asyncAnnoIntervalMillis, final long asyncUxIntervalMillis) {
        // force UX timer to run after specified delay ... not sure why "delay" param in normal
        // timer schedule function call isn't working ...
        mDefaultAnnoLabel = annoLabel;
        long uxTimerDelay = (asyncAnnoIntervalMillis / 2);
        new java.util.Timer().schedule(
                new java.util.TimerTask() {
                    @Override
                    public void run() {
                        mUxTimer.schedule(mUxTimerTask, 0, asyncUxIntervalMillis);
                    }
                }, uxTimerDelay);
    }

    public void stopCollection() {
        mUxTimer.cancel();
    }

}