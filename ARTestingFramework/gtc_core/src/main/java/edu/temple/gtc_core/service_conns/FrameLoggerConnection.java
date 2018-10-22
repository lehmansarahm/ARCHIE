package edu.temple.gtc_core.service_conns;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.util.Log;

import edu.temple.gtc_core.services.FrameLoggerService;
import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;

public class FrameLoggerConnection {

    private static final long WAIT_INTERVAL = 1000 * 1; // 1 sec

    private static String SERVICE_CLASS_NAME;           // set in "onCreate()"
    private static String EXTRA_KEY_PID;                // set in "onCreate()"
    private static String EXTRA_KEY_PROC_NAME;          // set in "onCreate()"

    private static Context mContext;
    private static Intent mIntent;
    private static boolean mIsServiceStarted;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static Handler mHandler = new Handler();
    private Runnable mRunnable = new Runnable() {
        @Override
        public void run() {
            isServiceRunning();
        }
    };

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public FrameLoggerConnection() {
        Log.d(Constants.TAG, "Frame Logger Connection instantiated!");
    }

    public void initialize(Context context) {
        if (!isInitialized()) {
            Log.d(Constants.TAG, "Initializing Frame Logger Service connection.");
            mContext = context.getApplicationContext();
            mIntent = new Intent(mContext, FrameLoggerService.class);
            EXTRA_KEY_PID = ResourcePropUtil.INTENT_EXTRA_PID(mContext);
            EXTRA_KEY_PROC_NAME = ResourcePropUtil.INTENT_EXTRA_PROC_NAME(mContext);
            SERVICE_CLASS_NAME = ResourcePropUtil.SERVICE_NAME_FRAME_LOGGER(mContext);
        } else Log.d(Constants.TAG, "Frame Logger Service connection already initialized.");
    }

    private boolean isInitialized() {
        return (mContext != null && mIntent != null);
    }

    public void startService(int pid, String procName) {
        if (isInitialized()) {
            if (!mIsServiceStarted) {
                Log.d(Constants.TAG, "Attempting to start Frame Logger Service.");
                mIntent.putExtra(EXTRA_KEY_PID, pid);
                mIntent.putExtra(EXTRA_KEY_PROC_NAME, procName);
                mContext.startService(mIntent);
            } else Log.d(Constants.TAG, "Frame Logger Service already started.");
        } else Log.e(Constants.TAG, "Can't start un-initialized Frame Logger Service!");

        // give the service time to start, then update the "is service started" flag
        mHandler.postDelayed(mRunnable, WAIT_INTERVAL);
    }

    public void stopService() {
        if (isInitialized()) {
            if (mIsServiceStarted) {
                Log.d(Constants.TAG, "Attempting to stop Frame Logger Service.");
                mContext.stopService(mIntent);
            } else Log.d(Constants.TAG, "Frame Logger Service already stopped.");
        } else Log.e(Constants.TAG, "Can't stop un-initialized Frame Logger Service!");

        // give the service time to stop, then update the "is service started" flag
        mHandler.postDelayed(mRunnable, WAIT_INTERVAL);
    }

    public boolean isServiceRunning() {
        mIsServiceStarted = ServiceUtil.isServiceRunning(mContext, SERVICE_CLASS_NAME);
        Log.d(Constants.TAG, "Is Frame Logger Service running: " + mIsServiceStarted);
        return mIsServiceStarted;
    }

}