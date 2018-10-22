package edu.temple.gtc_services;

import android.app.Notification;
import android.app.Service;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.support.annotation.Nullable;
import android.util.Log;

import java.util.ArrayList;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;
import edu.temple.gtc_core.Constants;

/**
    High level management module to facilitate communication with the external GTC app,
    and respond to event triggers from both sides
 */
public class CommunicatorService extends Service {

    private static final boolean RUN_IN_FOREGROUND = true;
    private static final int NOTIFICATION_ID = 544;
    private static final int INTERVAL = 1000 * 30;          // 30sec

    private static String EXTRA_KEY_PID;                    // set in "onCreate()"
    private static String EXTRA_KEY_COMM_SERVICE_PID;       // set in "onCreate()"

    private static boolean mIsServiceRunning = false;
    private static String mNotiTitle, mNotiText;
    private static Notification mNoti;
    private static Integer mPID;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static Timer mTimer;
    private static Handler mTimerHandler;
    private TimerTask mTimerTask;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private List<Messenger> gtcMessengers = new ArrayList<>();
    private List<Messenger> testerMessengers = new ArrayList<>();

    private final Messenger mIncomingMessenger = new Messenger(new IncomingHandler());
    private class IncomingHandler extends Handler {
        @Override
        public void handleMessage(Message message) {
            // retrieve the sender's PID, if available
            Bundle data = message.getData();
            int pid = data.getInt(EXTRA_KEY_PID, 0);

            // add the comm service PID to the data bundle
            data.putInt(EXTRA_KEY_COMM_SERVICE_PID, mPID);

            // figure out what to do with the message ...
            switch (message.what) {
                case Constants.MSG_CODE_REGISTER_GTC:
                    Log.d(Constants.TAG, "Received registration event from new GTC app from pid: " + pid);
                    gtcMessengers.add(message.replyTo);
                    break;
                case Constants.MSG_CODE_REGISTER_TESTER:
                    Log.d(Constants.TAG, "Received registration event from new tester app from pid: " + pid);
                    testerMessengers.add(message.replyTo);
                    break;
                case Constants.MSG_CODE_SEND_TO_GTC:
                    Log.d(Constants.TAG, "Received message for GTC from pid: " + pid);
                    for (Messenger destMessenger : gtcMessengers) {
                        forwardMessage(destMessenger, message.what, data);
                    }
                    break;
                case Constants.MSG_CODE_SEND_TO_TEST:
                    Log.d(Constants.TAG, "Received message for tester app from pid: " + pid);
                    for (Messenger destMessenger : testerMessengers) {
                        forwardMessage(destMessenger, message.what, data);
                    }
                    break;
                default:
                    Log.e(Constants.TAG, "Received unknown message code: " + message.what
                            + " from pid: " + pid);
                    break;
            }
        }
    }

    private void forwardMessage(Messenger destMessenger, int msgCode, Bundle newData) {
        try {
            Message msg = Message.obtain(null, msgCode, 0, 0);
            msg.replyTo = mIncomingMessenger;
            msg.setData(newData);
            destMessenger.send(msg);
        } catch (RemoteException ex) {
            Log.e(Constants.TAG, "Failed to send message to reply-to messenger.", ex);
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    @Override
    public void onCreate() {
        super.onCreate();
        mPID = android.os.Process.myPid();

        EXTRA_KEY_PID = ResourcePropUtil.INTENT_EXTRA_PID(this);
        EXTRA_KEY_COMM_SERVICE_PID = ResourcePropUtil.INTENT_EXTRA_COMM_SERVICE_PID(this);

        mTimer = new Timer();
        mTimerHandler = new Handler();
        mTimerTask = new TimerTask() {
            @Override
            public void run() {
                mTimerHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        new CommunicatorAsyncTask().execute();
                    }
                });
            }
        };

        Log.d(Constants.TAG, "Communicator Service instantiated with PID: " + mPID);
    }

    @Nullable
    @Override
    public IBinder onBind(Intent intent) { return mIncomingMessenger.getBinder(); }

    @Override
    public boolean onUnbind(Intent intent) { return false; }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        /*mTestAppPkgName = intent.getStringExtra(Constants.EXTRA_PACKAGE_NAME);
        Log.d(Constants.TAG, "Received GTC comm link request from app with package name: " +
                mTestAppPkgName + ".  Attempting to secure connection.");

        if (!mAreConnected && mTestAppPkgName != null && !mTestAppPkgName.isEmpty()) {
            boolean isGtcRunning = isAppRunning(getApplicationContext(), Constants.PACKAGE_NAME_SERVICES(this));
            boolean isTesterAppRunning = isAppRunning(getApplicationContext(), mTestAppPkgName);

            if (isGtcRunning && isTesterAppRunning) {
                // both apps are running locally ... connect via content provider
                mRunningLocally = true;
            } else {
                // TODO - apps are running on diff. devices ... attempt to connect via Bluetooth
                mRunningLocally = false;
            }

            Log.d(Constants.TAG, "Connected comm link between GTC and tester app.");
            mAreConnected = true;
        }*/

        startService();
        return Service.START_STICKY;
    }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "onDestroy() method called ... shutting down Communicator Service safely.");
        super.onDestroy();
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    private void startService() {
        if (!mIsServiceRunning) {
            if (RUN_IN_FOREGROUND) {
                Log.d(edu.temple.gtc_core.Constants.TAG, "Starting Communicator Service in the foreground.");
                mNotiTitle = ResourcePropUtil.NOTI_TITLE_COMMUNICATOR(this);
                mNotiText = ResourcePropUtil.NOTI_TEXT_COMMUNICATOR(this);
                mNoti = ServiceUtil.createNotification(this, mNotiTitle, mNotiText, ServiceAppUtil.getDefaultPendingIntent(this));
                startForeground(NOTIFICATION_ID, mNoti);
            } else Log.d(edu.temple.gtc_core.Constants.TAG, "Starting Communicator Service in the background.");

            Log.d(Constants.TAG, "Communicator Service started successfully!");
            mTimer.schedule(mTimerTask, 0, INTERVAL);
            mIsServiceRunning = true;
        } else Log.d(edu.temple.gtc_core.Constants.TAG, "Communicator Service already running.");
    }

    /**
     * The tester app has identified a local event.  Tell the GTC app to get annotation info from
     * the user (Content Provider version).
     */
    private void handleTesterEventCP() {
        // TODO - flesh this out
    }

    /**
     * The user has identified an event that the tester app didn't catch.  Tell the tester app to
     * dump all buffers to storage (Content Provider version).
     */
    private void handleUserEventCP() {
        // TODO - flesh this out
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    /**
     * The tester app has identified a local event.  Tell the GTC app to get annotation info from
     * the user (Bluetooth version).
     */
    private void handleTesterEventBT() {
        // TODO - flesh this out
    }

    /**
     * The user has identified an event that the tester app didn't catch.  Tell the tester app to
     * dump all buffers to storage (Bluetooth version).
     */
    private void handleUserEventBT() {
        // TODO - flesh this out
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    class CommunicatorAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.d(Constants.TAG, "Communicator Service heartbeat with PID: " + mPID);
            return null;
        }
    }

}