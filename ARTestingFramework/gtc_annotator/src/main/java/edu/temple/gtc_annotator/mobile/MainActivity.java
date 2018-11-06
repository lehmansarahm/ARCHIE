package edu.temple.gtc_annotator.mobile;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.common.api.ResultCallback;
import com.google.android.gms.wearable.MessageApi;
import com.google.android.gms.wearable.MessageEvent;
import com.google.android.gms.wearable.Node;
import com.google.android.gms.wearable.NodeApi;
import com.google.android.gms.wearable.Wearable;

import java.util.List;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_annotator.R;
import edu.temple.gtc_core.service_conns.CommunicatorConnection;
import edu.temple.gtc_core.service_listeners.IGtcCommListener;
import edu.temple.gtc_core.utils.ResourcePropUtil;

// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
//
//          HEAR YE, HEAR YE!!!!!
//
//          MAKE SURE ANY ANDROID WEAR LOGIC IS COMPATIBLE WITH GOOGLE PLAY SERVICES
//          VERSION 11, SINCE APPARENTLY THAT IS ALL THAT THE MOTO 360 WILL SUPPORT
//
//          ... YES IT SUCKS, I KNOW.  DON'T HATE ME.
//
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------

/**
    Need to be able to go to sleep, then wake up to prompt the user ...
    Prompt whenever a certain interval has passed, or we receive an event from the test app.
    Once annotation has been collected, notify test app so data storage can happen.
 */
public class MainActivity extends AppCompatActivity implements MessageApi.MessageListener, IGtcCommListener {

    // --------------------------------------------------------------------------------
    //      Class constants
    // --------------------------------------------------------------------------------
    private static final long WAIT_INTERVAL = TimeUnit.SECONDS.toMillis(2);     // 2 sec in millis
    private static final String PROCESS_NAME = "GtcAnnotatorPhone";
    private static final byte[] TEST_MESSAGE_PAYLOAD = (new String("((halt at stop sign)),10")).getBytes();
    private static final int DEFAULT_VALUE_INT = 0;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in "onCreate()"
    // --------------------------------------------------------------------------------
    private static String EXTRA_PID;
    private static String EXTRA_COMM_SERVICE_PID;
    private static String EXTRA_MESSAGE_PATH;
    private static String EXTRA_MESSAGE_PAYLOAD;
    private static String[] AVAILABLE_SERVICES;
    // --------------------------------------------------------------------------------

    // --------------------------------------------------------------------------------
    //      Activity view components
    // --------------------------------------------------------------------------------
    private static TextView mFeedbackText;
    private static Button mStartServicesButton;
    private static Button mStopServicesButton;
    private static Button mSendAnnotationButton;
    private static Button mSendUxButton;
    private static Button mSendTfButton;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Service connections ... DO NOT launch services directly!!
    // --------------------------------------------------------------------------------
    // private static ResourceLoggerConnection mResLogConnection = new ResourceLoggerConnection();
    private static CommunicatorConnection mCommConnection = new CommunicatorConnection();
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Android Wear properties ... to enable communication with watch
    // --------------------------------------------------------------------------------
    //      NOTE:  using deprecated "MessageApi" wiring (instead of "MessageClient") so
    //      that it's compatible with GMS-Wearable v11
    // --------------------------------------------------------------------------------
    private static GoogleApiClient mGoogleApiClient;
    private static String mWatchNodeID;
    // --------------------------------------------------------------------------------


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      ACTIVITY LIFE CYCLE EVENTS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Log.i(Constants.TAG, "Retrieving required resource properties.");
        EXTRA_PID = ResourcePropUtil.INTENT_EXTRA_PID(this);
        EXTRA_COMM_SERVICE_PID = ResourcePropUtil.INTENT_EXTRA_COMM_SERVICE_PID(this);
        EXTRA_MESSAGE_PATH = ResourcePropUtil.INTENT_EXTRA_GTC_MESSAGE_PATH(this);
        EXTRA_MESSAGE_PAYLOAD = ResourcePropUtil.INTENT_EXTRA_GTC_MESSAGE_PAYLOAD(this);

        AVAILABLE_SERVICES = new String[] {
                ResourcePropUtil.SERVICE_NAME_COMMUNICATOR(this),
                ResourcePropUtil.SERVICE_NAME_RESOURCE_LOGGER(this),
                ResourcePropUtil.SERVICE_NAME_FRAME_LOGGER(this)
        };

        Log.i(Constants.TAG, "Initializing communication and resource services.");
        // mResLogConnection.initialize(this);
        mCommConnection.initialize(this, new Intent(this, CommunicatorService.class));

        Log.i(Constants.TAG, "Initializing Google API Client and retrieving connected phone node ID.");
        retrieveWatchNodeID();

        Log.i(Constants.TAG, "Initializing application view components.");
        mFeedbackText = findViewById(R.id.feedbackText);
        mStartServicesButton = findViewById(R.id.startServicesButton);
        mStopServicesButton = findViewById(R.id.stopServicesButton);
        mSendAnnotationButton = findViewById(R.id.sendAnnotationMessage);
        mSendUxButton = findViewById(R.id.sendUxMessage);
        mSendTfButton = findViewById(R.id.sendTfMessage);

        mStartServicesButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    displayStopServicesInfo();
                    // mResLogConnection.startService(android.os.Process.myPid(), PROCESS_NAME);
                    mCommConnection.startService();

                    // wait for a bit, then bind to the comms service
                    Handler handler = new Handler();
                    handler.postDelayed(new Runnable() {
                        public void run() {
                            if (mCommConnection.isServiceRunning()) {
                                Log.i(Constants.TAG, "Communicator Service has been started.  Binding.");
                                mCommConnection.bind();
                            } else Log.e(Constants.TAG,
                                    "Cannot bind service if Communicator Service has not been started.");
                        }
                    }, WAIT_INTERVAL);

                    // wait for another bit, then register the current GTC listener
                    // ... I know this is probably not the "correct" way to do it, but oh well
                    handler.postDelayed(new Runnable() {
                        public void run() {
                            if (mCommConnection.isServiceBound()) {
                                Log.d(edu.temple.gtc_core.utils.Constants.TAG,
                                        "Communicator Service has been bound.  Registering listener.");
                                mCommConnection.registerListener(MainActivity.this, android.os.Process.myPid());
                            } else Log.e(edu.temple.gtc_core.utils.Constants.TAG,
                                        "Cannot register listener if Communicator Service is not bound!");
                        }
                    }, WAIT_INTERVAL * 2);
                } catch (Exception ex) {
                    Log.e(Constants.TAG, "Failed to start GTC services on app button click.", ex);
                }
            }
        });

        mStopServicesButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    // TODO - debug unbinding from service when app is closed, relaunched from notification
                    displayStartServicesInfo();
                    // mResLogConnection.stopService();
                    mCommConnection.unbind();
                    mCommConnection.stopService();
                } catch (Exception ex) {
                    Log.e(Constants.TAG, "Failed to stop GTC services on app button click.", ex);
                }
            }
        });

        mSendAnnotationButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                sendMessageToWatch(edu.temple.gtc_core.utils.Constants.MESSAGE_PATH_ANNOTATION_REQUESTED, TEST_MESSAGE_PAYLOAD);
            }
        });

        mSendUxButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                sendMessageToWatch(edu.temple.gtc_core.utils.Constants.MESSAGE_PATH_UX_REQUESTED, TEST_MESSAGE_PAYLOAD);
            }
        });

        mSendTfButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (mCommConnection.isServiceBound()) {
                    Log.i(Constants.TAG, "Sending test message to local TF Tester apps.");
                    Bundle testData = new Bundle();
                    testData.putInt(EXTRA_PID, android.os.Process.myPid());
                    mCommConnection.sendMessageToTesters(testData);
                }
                else Log.e(Constants.TAG, "Cannot send test message to TensorFlow apps if we aren't bound to the Comms Service.");
            }
        });

        if (areServicesRunning()) displayStopServicesInfo();
        else displayStartServicesInfo();
    }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "Main activity destroyed.  Disconnecting from Google API Client.");
        if (mGoogleApiClient.isConnected()) {
            Wearable.MessageApi.removeListener(mGoogleApiClient, this);
            mGoogleApiClient.disconnect();
        } else Log.e(Constants.TAG, "Google API Client already disconnected.");
        super.onDestroy();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      ANDROID WEAR MESSAGE LISTENER METHODS
    //
    //      ... HANDLES MESSAGES RECEIVED FROM OTHER DEVICES
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onMessageReceived(MessageEvent event) {
        final String messagePath = event.getPath();
        final String messagePayload = new String(event.getData());

        switch (messagePath) {
            case edu.temple.gtc_core.utils.Constants.MESSAGE_PATH_ANNOTATION_ACQUIRED:
                Log.e(Constants.TAG, "Watch has provided an annotation for an HAR event: "
                        + messagePath + "\t\t with result: " + messagePayload);
                break;
            case edu.temple.gtc_core.utils.Constants.MESSAGE_PATH_ASYNC_ANNOTATION_ACQUIRED:
                Log.e(Constants.TAG, "Watch has provided an annotation for an async HAR event: "
                        + messagePath + "\t\t with result: " + messagePayload);
                break;
            case edu.temple.gtc_core.utils.Constants.MESSAGE_PATH_UX_ACQUIRED:
                Log.e(Constants.TAG, "Watch has provided UX info: "
                        + messagePath + "\t\t with result: " + messagePayload);
                break;
            default:
                Log.e(Constants.TAG, "Unknown message path received: " + messagePath);
                return;
        }

        sendMessageToTesters(messagePath, messagePayload);
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      GTC MESSAGE LISTENER METHODS
    //
    //      ... HANDLES MESSAGES RECEIVED FROM OTHER PROCESSES ON THIS SAME DEVICE
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onTesterMessageReceived(Bundle data) {
        int senderPID = data.getInt(EXTRA_PID, DEFAULT_VALUE_INT);
        int commServicePID = data.getInt(EXTRA_COMM_SERVICE_PID, DEFAULT_VALUE_INT);

        String messagePath = data.getString(EXTRA_MESSAGE_PATH);
        String messagePayload = data.getString(EXTRA_MESSAGE_PAYLOAD);

        Log.e(Constants.TAG, "A TESTER APP HAS IDENTIFIED AN EVENT OF INTEREST!"
                + "\t Sender PID: " + senderPID
                + "\t Comm Service PID: " + commServicePID
                + "\t Message path: " + messagePath
                + "\t Message payload: " + messagePayload);

        sendMessageToWatch(messagePath, messagePayload.getBytes());
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void displayStartServicesInfo() {
        mFeedbackText.setText(ResourcePropUtil.SERVICE_TEXT_START(this));
        mStartServicesButton.setEnabled(true);
        mStopServicesButton.setEnabled(false);
        mSendAnnotationButton.setEnabled(false);
        mSendUxButton.setEnabled(false);
        mSendTfButton.setEnabled(false);
    }

    private void displayStopServicesInfo() {
        mFeedbackText.setText(ResourcePropUtil.SERVICE_TEXT_STOP(this));
        mStartServicesButton.setEnabled(false);
        mStopServicesButton.setEnabled(true);
        mSendAnnotationButton.setEnabled(true);
        mSendUxButton.setEnabled(true);
        mSendTfButton.setEnabled(true);
    }

    private void retrieveWatchNodeID() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                mGoogleApiClient = new GoogleApiClient.Builder(MainActivity.this)
                        .addApi(Wearable.API)
                        .build();
                mGoogleApiClient.blockingConnect();
                Wearable.MessageApi.addListener(mGoogleApiClient, MainActivity.this);

                PendingResult<NodeApi.GetConnectedNodesResult> connectedNodeTask =
                        Wearable.NodeApi.getConnectedNodes(mGoogleApiClient);
                List<Node> connectedNodes = connectedNodeTask.await().getNodes();
                for (Node node : connectedNodes) {
                    Log.i(Constants.TAG, "Connected node ID: " + node.getId()
                            + "\t\tDisplay Name: " + node.getDisplayName());
                    mWatchNodeID = node.getId();
                }
            }
        }).start();
    }

    private void sendMessageToWatch(final String messagePath, final byte[] payload) {
        try {
            if (mWatchNodeID != null && !mWatchNodeID.isEmpty()) {
                Log.i(Constants.TAG, "Attempting to forward message to watch node: " + mWatchNodeID
                    + "\t\tUsing path: " + messagePath);
                new Thread(new Runnable() {
                    @Override
                    public void run() {
                        if (!mGoogleApiClient.isConnected()) mGoogleApiClient.blockingConnect();

                        Log.i(Constants.TAG, "Connected to Google API Client ... sending message.");
                        PendingResult<MessageApi.SendMessageResult> sendResult =
                                Wearable.MessageApi.sendMessage(mGoogleApiClient, mWatchNodeID,
                                        messagePath, payload);
                        sendResult.setResultCallback(new ResultCallback<MessageApi.SendMessageResult>() {
                            @Override
                            public void onResult(@NonNull MessageApi.SendMessageResult sendMessageResult) {
                                Log.i(Constants.TAG, "Received message result: "
                                        + sendMessageResult.getStatus().getStatusMessage());
                            }
                        });
                    }
                }).start();
            } else Log.e(Constants.TAG, "Cannot send message to invalid Node ID!");
        } catch (Exception ex) {
            Log.e(Constants.TAG, "Something went wrong while attempting to send a test message to connected phone node.", ex);
        }
    }

    private void sendMessageToTesters(String messagePath, String messagePayload) {
        Log.i(Constants.TAG, "Attempting to forward message to GTC tester nodes using path: "
                + messagePath + "\t\t and payload: " + messagePayload);

        Bundle newData = new Bundle();
        newData.putString(EXTRA_MESSAGE_PATH, messagePath);
        newData.putString(EXTRA_MESSAGE_PAYLOAD, messagePayload);
        newData.putInt(EXTRA_PID, android.os.Process.myPid());
        mCommConnection.sendMessageToTesters(newData);
    }

    private boolean areServicesRunning() {
        boolean servicesRunning = false;
        for (String service : AVAILABLE_SERVICES)
            servicesRunning |= isServiceRunning(MainActivity.this, service);
        return servicesRunning;
    }

    private boolean isServiceRunning(Context context, String serviceClassName) {
        ActivityManager mgr = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
        for (ActivityManager.RunningServiceInfo service : mgr.getRunningServices(Integer.MAX_VALUE)) {
            if (serviceClassName.equals(service.service.getClassName())) return true;
        }
        return false;
    }

}