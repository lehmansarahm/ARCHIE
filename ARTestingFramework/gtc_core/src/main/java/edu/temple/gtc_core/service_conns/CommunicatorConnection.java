package edu.temple.gtc_core.service_conns;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.os.Messenger;
import android.util.Log;

import edu.temple.gtc_core.service_listeners.IGtcCommListener;
import edu.temple.gtc_core.service_listeners.ITesterCommListener;
import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;

public class CommunicatorConnection {

    public enum Listener { Gtc, Tester }
    private static Listener listenerType = null;        // set in "registerListener()"

    private static IGtcCommListener gtcListener;        // set in "registerListener()"
    private static ITesterCommListener testerListener;  // set in "registerListener()"

    private static final long WAIT_INTERVAL = 1000 * 1; // 1 sec
    private static final int DEFAULT_VALUE_INT = 0;

    private static String ANNOTATOR_PACKAGE_NAME;         // set in "onCreate()"
    private static String COMM_SERVICE_CLASS_NAME;           // set in "onCreate()"
    private static String EXTRA_KEY_PID;                // set in "onCreate()"
    private static String EXTRA_KEY_COMM_SERVICE_PID;   // set in "onCreate()"

    private static Context mContext = null;
    private static Intent mIntent = null;
    private static boolean mIsStarted, mIsBound;

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

    private static Messenger mCommServiceMessenger;
    private ServiceConnection mCommServiceConnection = new ServiceConnection() {
        public void onServiceConnected(ComponentName className, IBinder service) {
            Log.d(Constants.TAG, "Connected to Communicator Service!");
            mCommServiceMessenger = new Messenger(service);
            mIsBound = true;
        }
        public void onServiceDisconnected(ComponentName className) {
            Log.e(Constants.TAG, "Disconnected from Communicator Service!");
            mCommServiceMessenger = null;
            mIsBound = false;
        }
    };

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private final Messenger mReplyMessenger = new Messenger(new IncomingHandler());
    private class IncomingHandler extends Handler {
        @Override
        public void handleMessage(Message message) {
            // handle the message based on the type of listener we are
            Listener type = CommunicatorConnection.this.listenerType;
            if (type.equals(Listener.Gtc) && message.what == Constants.MSG_CODE_SEND_TO_GTC) {
                Log.i(Constants.TAG, "Communicator Service received message from tester "
                        + "apps.  Forwarding to GTC Annotator.");
                gtcListener.onTesterMessageReceived(message.getData());
            } else if (type.equals(Listener.Tester) && message.what == Constants.MSG_CODE_SEND_TO_TEST) {
                Log.i(Constants.TAG, "Communicator Service received message from GTC "
                        + "Annotator.  Forwarding to tester apps.");
                testerListener.onGtcMessageReceived(message.getData());
            } else {
                Log.e(Constants.TAG, "Communicator Service listener of type: " + type.toString()
                        + " received inappropriate message code: " + message.what);
            }
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public CommunicatorConnection() {
        Log.d(Constants.TAG, "Communicator Service connection instantiated!");
    }

    public void initialize(Context context, Intent baseIntent) {
        if (!isInitialized()) {
            Log.d(Constants.TAG, "Initializing Communicator Service connection.");
            mContext = context;
            mIntent = baseIntent;

            ANNOTATOR_PACKAGE_NAME = ResourcePropUtil.PACKAGE_NAME_ANNOTATOR(mContext);
            COMM_SERVICE_CLASS_NAME = ResourcePropUtil.SERVICE_NAME_COMMUNICATOR(mContext);
            EXTRA_KEY_PID = ResourcePropUtil.INTENT_EXTRA_PID(mContext);
            EXTRA_KEY_COMM_SERVICE_PID = ResourcePropUtil.INTENT_EXTRA_COMM_SERVICE_PID(mContext);
        } else Log.d(Constants.TAG, "Communicator Service connection already initialized.");
    }

    public void startService() {
        if (isInitialized()) {
            if (!mIsStarted) {
                Log.d(Constants.TAG, "Attempting to start Communicator Service.");
                mContext.startService(mIntent);
                // ContextCompat.startForegroundService(mContext, mIntent);
            } else Log.d(Constants.TAG, "Communicator Service already started.");
        } else Log.e(Constants.TAG, "Can't start un-initialized Communicator Service!");

        // give the service time to start, then update the "is service started" flag
        mHandler.postDelayed(mRunnable, WAIT_INTERVAL);
    }

    public void stopService() {
        if (isInitialized()) {
            if (mIsStarted) {
                Log.d(Constants.TAG, "Attempting to stop Communicator Service.");
                mContext.stopService(mIntent);
            } else Log.d(Constants.TAG, "Communicator Service already stopped.");
        } else Log.e(Constants.TAG, "Can't stop un-initialized Communicator Service!");

        // give the service time to stop, then update the "is service started" flag
        mHandler.postDelayed(mRunnable, WAIT_INTERVAL);
    }

    public void bind() {
        if (isInitialized()) {
            if (!mIsBound) {
                Log.d(Constants.TAG, "Attempting to bind to Communicator Service.");
                mContext.bindService(mIntent, mCommServiceConnection, Context.BIND_AUTO_CREATE);
            } else Log.d(Constants.TAG, "Communicator Service already bound.");
        } else Log.e(Constants.TAG, "Can't bind to un-initialized Communicator Service!");
    }

    public void unbind() {
        if (isInitialized()) {
            if (mIsBound) {
                Log.d(Constants.TAG, "Attempting to unbind from Communicator Service.");
                mContext.unbindService(mCommServiceConnection);
                mIsBound = false;
            } else Log.d(Constants.TAG, "Communicator Service already unbound.");
        } else Log.e(Constants.TAG, "Can't unbind from un-initialized Communicator Service!");
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public void registerListener(IGtcCommListener listener, int pid) {
        if (listenerType == null) {
            Log.d(Constants.TAG, "Registering new GTC listener with this Communicator Service connection.");
            listenerType = Listener.Gtc;
            gtcListener = listener;

            Bundle data = new Bundle();
            data.putInt(EXTRA_KEY_PID, pid);
            ServiceUtil.sendMessageToService(mCommServiceMessenger, mReplyMessenger, Constants.MSG_CODE_REGISTER_GTC, data);
        } else Log.d(Constants.TAG, "SourceType type already registered for this Communicator Service connection.");
    }

    public void registerListener(ITesterCommListener listener, int pid) {
        if (listenerType == null) {
            Log.d(Constants.TAG, "Registering new Tester listener with this Communicator Service connection.");
            listenerType = Listener.Tester;
            testerListener = listener;

            Bundle data = new Bundle();
            data.putInt(EXTRA_KEY_PID, pid);
            ServiceUtil.sendMessageToService(mCommServiceMessenger, mReplyMessenger, Constants.MSG_CODE_REGISTER_TESTER, data);
        } else Log.d(Constants.TAG, "SourceType type already registered for this Communicator Service connection.");
    }

    public void sendMessageToGtc(Bundle data) {
        if (mReplyMessenger != null)
            ServiceUtil.sendMessageToService(mCommServiceMessenger, mReplyMessenger,
                    Constants.MSG_CODE_SEND_TO_GTC, data);
        else Log.e(Constants.TAG, "Cannot send message to null GTC reply messenger!");
    }

    public void sendMessageToTesters(Bundle data) {
        if (mReplyMessenger != null)
                ServiceUtil.sendMessageToService(mCommServiceMessenger, mReplyMessenger,
                    Constants.MSG_CODE_SEND_TO_TEST, data);
        else Log.e(Constants.TAG, "Cannot send message to null tester reply messenger!");
    }

    public boolean isServiceRunning() {
        mIsStarted = ServiceUtil.isServiceRunning(mContext, COMM_SERVICE_CLASS_NAME);
        Log.d(Constants.TAG, "Is Communicator Service running: " + mIsStarted);
        return mIsStarted;
    }

    public boolean isServiceBound() { return mIsBound; }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public static Intent getDefaultIntent() {
        Intent intent = new Intent();
        // raw values on purpose, so the GTC Controller can use this method
        intent.setComponent(new ComponentName("edu.temple.gtc_annotator",
                "edu.temple.gtc_annotator.mobile.CommunicatorService"));
        return intent;
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private boolean isInitialized() {
        return (mContext != null && mIntent != null);
    }

}