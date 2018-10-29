package edu.temple.gtc_annotator.mobile;

import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.Context;
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

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;

/**
    High level management module to facilitate communication with the external GTC app,
    and evaluate to event triggers from both sides
 */
public class CommunicatorService extends Service {

    // --------------------------------------------------------------------------------
    //      Class constants
    // --------------------------------------------------------------------------------
    private static final boolean RUN_IN_FOREGROUND = true;
    private static final int NOTIFICATION_ID = 544;     // make sure this is unique!!
    private static final int INTERVAL = 1000 * 30;      // heartbeat interval ... 30sec
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in "onCreate()"
    // --------------------------------------------------------------------------------
    private static String EXTRA_KEY_PID;
    private static String EXTRA_KEY_COMM_SERVICE_PID;
    private static Notification NOTIFICATION;           // foreground notification to display when service is running
    private static String NOTIFICATION_TITLE;
    private static String NOTIFICATION_TEXT;
    private static Integer mPID;                        // this service's process ID
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      General purpose status flags
    // --------------------------------------------------------------------------------
    private static boolean mIsServiceRunning = false;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Timer properties to generate heartbeat while service is running
    // --------------------------------------------------------------------------------
    private static Timer mTimer;
    private static Handler mTimerHandler;
    private TimerTask mTimerTask;

    class CommunicatorAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.d(Constants.TAG, "Communicator Service heartbeat with PID: " + mPID);
            return null;
        }
    }
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Messenger properties to store handles to GTC and Tester nodes
    // --------------------------------------------------------------------------------
    //          ... this service only handles two types of events:
    //              - registering messengers
    //              - forwarding messages from one node to another
    //          ... any unknown, malformed message code will throw an error
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
    // --------------------------------------------------------------------------------


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PUBLIC-FACING METHODS (SHOULD BE CALLED BY SYSTEM * ONLY *)
    //          ... THESE METHODS SHOULD * NOT * BE CALLED DIRECTLY
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onCreate() {
        super.onCreate();
        mPID = android.os.Process.myPid();

        EXTRA_KEY_PID = ResourcePropUtil.INTENT_EXTRA_PID(this);
        EXTRA_KEY_COMM_SERVICE_PID = ResourcePropUtil.INTENT_EXTRA_COMM_SERVICE_PID(this);

        NOTIFICATION_TITLE = ResourcePropUtil.NOTI_TITLE_COMMUNICATOR(this);
        NOTIFICATION_TEXT = ResourcePropUtil.NOTI_TEXT_COMMUNICATOR(this);
        NOTIFICATION = ServiceUtil.createNotification(this, NOTIFICATION_TITLE, NOTIFICATION_TEXT,
                getDefaultPendingIntent(this, MainActivity.class));

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
        startService();
        return Service.START_STICKY;
    }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "onDestroy() method called ... shutting down Communicator Service safely.");
        super.onDestroy();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void startService() {
        if (!mIsServiceRunning) {
            if (RUN_IN_FOREGROUND) {
                Log.d(Constants.TAG, "Starting Communicator Service in the foreground.");
                startForeground(NOTIFICATION_ID, NOTIFICATION);
            } else Log.d(Constants.TAG, "Starting Communicator Service in the background.");

            Log.d(Constants.TAG, "Communicator Service started successfully!");
            mTimer.schedule(mTimerTask, 0, INTERVAL);
            mIsServiceRunning = true;
        } else Log.d(Constants.TAG, "Communicator Service already running.");
    }

    private static PendingIntent getDefaultPendingIntent(Context context, Class defaultActivityClass) {
        // Create the intent behavior to manage a user tapping on the notification
        Intent intent = new Intent(context, defaultActivityClass);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        PendingIntent pendingIntent = PendingIntent.getActivity(context, 0, intent, 0);
        return pendingIntent;
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

}