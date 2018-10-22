package edu.temple.gtc_annotator.wearable;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.Vibrator;
import android.support.v4.view.GestureDetectorCompat;
import android.support.wear.widget.BoxInsetLayout;
import android.support.wearable.activity.WearableActivity;
import android.util.Log;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.TextClock;
import android.widget.TextView;

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.wearable.MessageApi;
import com.google.android.gms.wearable.MessageEvent;
import com.google.android.gms.wearable.Node;
import com.google.android.gms.wearable.NodeApi;
import com.google.android.gms.wearable.Wearable;

import java.lang.ref.WeakReference;
import java.util.List;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_annotator.R;

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

public class MainActivity extends WearableActivity implements MessageApi.MessageListener, GestureDetector.OnGestureListener, GestureDetector.OnDoubleTapListener {

    // --------------------------------------------------------------------------------
    //      Class constants
    // --------------------------------------------------------------------------------
    public static final String EXTRA_RESPONDING_TO_REQUEST = "extra_responding_to_request";
    private static final long MINUTE_INTERVAL_MS = TimeUnit.SECONDS.toMillis(60);   // 60 sec, one minute in millis
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Pseudo-constants ... values set in "onCreate()"
    // --------------------------------------------------------------------------------
    private static int COLOR_ACTIVE_TEXT;
    private static int COLOR_ACTIVE_BACKGROUND;
    private static int COLOR_INACTIVE_TEXT;
    private static int COLOR_INACTIVE_BACKGROUND;
    private static int COLOR_ANNOTATION_TEXT;
    private static int COLOR_ANNOTATION_BACKGROUND;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Activity view components
    // --------------------------------------------------------------------------------
    private BoxInsetLayout mBackground;
    private TextClock mClockView;
    private TextView mNoticeView;
    private GestureDetectorCompat mDetector;
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Handler properties to update the clock time on the watch face once per minute
    // --------------------------------------------------------------------------------
    private final Handler mActiveClockUpdateHandler = new UpdateClockHandler(this);

    private static class UpdateClockHandler extends Handler {

        private final WeakReference<MainActivity> mStopwatchActivityWeakReference;

        public UpdateClockHandler(MainActivity reference) {
            mStopwatchActivityWeakReference = new WeakReference<>(reference);
        }

        @Override
        public void handleMessage(Message message) {
            MainActivity annotatorActivity = mStopwatchActivityWeakReference.get();
            if (annotatorActivity == null) return;
            switch (message.what) {
                case R.id.msg_update:
                    long timeMs = System.currentTimeMillis();
                    long delayMs = MINUTE_INTERVAL_MS - (timeMs % MINUTE_INTERVAL_MS);
                    Log.d(Constants.TAG, "NOT ambient - delaying by: " + delayMs);
                    annotatorActivity.mActiveClockUpdateHandler.sendEmptyMessageDelayed(R.id.msg_update, delayMs);
                    break;
            }
        }
    }
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      Android Wear properties ... to enable communication with phone
    // --------------------------------------------------------------------------------
    //      NOTE:  using deprecated "MessageApi" wiring (instead of "MessageClient") so
    //      that it's compatible with GMS-Wearable v11
    // --------------------------------------------------------------------------------
    private static GoogleApiClient mGoogleApiClient;
    private static String mPhoneNodeID;

    private enum CollectionType { Annotation, Ux }
    private static CollectionType responseCollectionType = null;
    private static boolean isRequestAsync = false;

    private static boolean respondingToRequest = false;
    private static String responsePayload = null;
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
        setAmbientEnabled();

        respondingToRequest = getIntent().getBooleanExtra(EXTRA_RESPONDING_TO_REQUEST, false);

        Log.i(Constants.TAG, "Initializing Gesture Detector.");
        mDetector = new GestureDetectorCompat(this,this);
        mDetector.setOnDoubleTapListener(this);

        Log.i(Constants.TAG, "Initializing Google API Client and retrieving connected phone node ID.");
        retrievePhoneID();

        Log.i(Constants.TAG, "Retrieving resource properties.");
        COLOR_ACTIVE_TEXT = getResources().getColor(R.color.activeText);
        COLOR_ACTIVE_BACKGROUND = getResources().getColor(R.color.activeBackground);
        COLOR_INACTIVE_TEXT = getResources().getColor(R.color.inactiveText);
        COLOR_INACTIVE_BACKGROUND = getResources().getColor(R.color.inactiveBackground);
        COLOR_ANNOTATION_TEXT = getResources().getColor(R.color.annotationText);
        COLOR_ANNOTATION_BACKGROUND = getResources().getColor(R.color.annotationBackground);

        Log.i(Constants.TAG, "Initializing application view components.");
        mBackground = findViewById(R.id.background);
        mClockView = findViewById(R.id.clock);
        mNoticeView = findViewById(R.id.notice);

        Log.i(Constants.TAG, "Initializing clock update message handler.");
        mActiveClockUpdateHandler.sendEmptyMessage(R.id.msg_update);
    }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "Annotator activity destroyed.  Unbinding from / stopping associated services.");
        mActiveClockUpdateHandler.removeMessages(R.id.msg_update);
        if (mGoogleApiClient.isConnected()) {
            Wearable.MessageApi.removeListener(mGoogleApiClient, this);
            mGoogleApiClient.disconnect();
        } else Log.e(Constants.TAG, "Google API Client already disconnected.");
        super.onDestroy();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      "ALWAYS-ON" WATCH APP METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    /**
     * onPause() called AFTER this
     *
     * @param ambientDetails
     */
    @Override
    public void onEnterAmbient(Bundle ambientDetails) {
        Log.d(Constants.TAG, "ENTER Ambient");
        super.onEnterAmbient(ambientDetails);

        mActiveClockUpdateHandler.removeMessages(R.id.msg_update);
        mBackground.setBackgroundColor(COLOR_INACTIVE_BACKGROUND);

        mClockView.setTextColor(COLOR_INACTIVE_TEXT);
        mClockView.getPaint().setAntiAlias(false);

        mNoticeView.setTextColor(COLOR_INACTIVE_TEXT);
        mNoticeView.getPaint().setAntiAlias(false);
    }

    /**
     * onStart() called BEFORE this
     */
    @Override
    public void onExitAmbient() {
        Log.d(Constants.TAG, "EXIT Ambient");
        super.onExitAmbient();
        setActiveUiColors();
        mNoticeView.getPaint().setAntiAlias(true);
        mClockView.getPaint().setAntiAlias(true);
        mActiveClockUpdateHandler.sendEmptyMessage(R.id.msg_update);
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      WEARABLE MESSAGE LISTENER, RESPONSE HANDLER METHODS
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

            case Constants.MESSAGE_PATH_ANNOTATION_REQUESTED:
                Log.e(Constants.TAG, "Phone has requested an annotation for an HAR event: " + messagePath
                    + "\t\t With payload: " + messagePayload);
                responseCollectionType = CollectionType.Annotation;
                responsePayload = messagePayload;
                respondingToRequest = true;
                isRequestAsync = false;
                setActiveUiColors();
                alertUser();
                break;

            case Constants.MESSAGE_PATH_ASYNC_ANNOTATION_REQUESTED:
                Log.e(Constants.TAG, "Phone has requested an async annotation for an HAR event: " + messagePath
                        + "\t\t With payload: " + messagePayload);
                responseCollectionType = CollectionType.Annotation;
                responsePayload = messagePayload;
                respondingToRequest = true;
                isRequestAsync = true;
                setActiveUiColors();
                alertUser();
                break;

            case Constants.MESSAGE_PATH_UX_REQUESTED:
                Log.e(Constants.TAG, "Phone has requested UX info: " + messagePath);
                responseCollectionType = CollectionType.Ux;
                responsePayload = messagePayload;
                respondingToRequest = true;
                setActiveUiColors();
                alertUser();
                break;

            default:
                Log.e(Constants.TAG, "Unknown message path received: " + messagePath);
                break;

        }
    }

    @Override
    public boolean onDoubleTap(MotionEvent e) {
        Log.i(Constants.TAG, "Double tap!");
        if (respondingToRequest && responseCollectionType != null) {
            try {
                if (mPhoneNodeID != null && !mPhoneNodeID.isEmpty()) {
                    if (responseCollectionType.equals(CollectionType.Annotation)) {
                        Intent intent = new Intent(MainActivity.this, CollectAnnotationActivity.class);
                        intent.putExtra(Constants.INTENT_EXTRA_NODE_ID, mPhoneNodeID);
                        intent.putExtra(Constants.INTENT_EXTRA_MESSAGE_PAYLOAD, responsePayload);
                        intent.putExtra(Constants.INTENT_EXTRA_ASYNC_REQUEST, isRequestAsync);
                        startActivity(intent);
                        finish();
                    } else if (responseCollectionType.equals(CollectionType.Ux)) {
                        Intent intent = new Intent(MainActivity.this, CollectUxActivity.class);
                        intent.putExtra(Constants.INTENT_EXTRA_NODE_ID, mPhoneNodeID);
                        startActivity(intent);
                        finish();
                    } else {
                        Log.e(Constants.TAG, "Can't send message for unknown response collection type: " + responseCollectionType.toString());
                    }
                } else Log.e(Constants.TAG, "Cannot send message to invalid Node ID!");
            } catch (Exception ex) {
                Log.e(Constants.TAG, "Something went wrong while attempting to send message to connected phone node.", ex);
                return false;
            }
            return true;
        } else {
            Log.e(Constants.TAG, "Received double tap gesture when not looking for response.");
            return false;
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void retrievePhoneID() {
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
                    mPhoneNodeID = node.getId();
                }
            }
        }).start();
    }

    private void setActiveUiColors() {
        if (respondingToRequest) {
            mClockView.setTextColor(COLOR_ANNOTATION_TEXT);
            mNoticeView.setTextColor(COLOR_ANNOTATION_TEXT);
            mBackground.setBackgroundColor(COLOR_ANNOTATION_BACKGROUND);
        } else {
            mClockView.setTextColor(COLOR_ACTIVE_TEXT);
            mNoticeView.setTextColor(COLOR_ACTIVE_TEXT);
            mBackground.setBackgroundColor(COLOR_ACTIVE_BACKGROUND);
        }
    }

    private void alertUser() {
        // TODO - wake up the watch screen
        /* WindowManager.LayoutParams wmParams = getWindow().getAttributes();
        wmParams.screenBrightness = 1;
        getWindow().setAttributes(wmParams); */

        // play a vibration
        Vibrator vibrator = (Vibrator) getSystemService(VIBRATOR_SERVICE);
        long[] vibrationPattern = {0, 500, 50, 300};
        final int indexInPatternToRepeat = -1; // -1 = don't repeat
        vibrator.vibrate(vibrationPattern, indexInPatternToRepeat);

        // update the feedback text view
        if (responseCollectionType.equals(CollectionType.Annotation)) {
            mNoticeView.setText(getResources().getString(R.string.notice_label_annotation_requested));
        } else if (responseCollectionType.equals(CollectionType.Ux)) {
            mNoticeView.setText(getResources().getString(R.string.notice_label_ux_requested));
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      GESTURE DETECTION, EVENT HANDLING PLACE HOLDERS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public boolean onTouchEvent(MotionEvent event){
        if (this.mDetector.onTouchEvent(event)) {
            return true;
        }
        return super.onTouchEvent(event);
    }

    @Override
    public boolean onDown(MotionEvent event) { return false; }

    @Override
    public boolean onFling(MotionEvent event1, MotionEvent event2, float velocityX, float velocityY) { return false; }

    @Override
    public void onLongPress(MotionEvent event) { return; }

    @Override
    public boolean onScroll(MotionEvent event1, MotionEvent event2, float distanceX, float distanceY) { return false; }

    @Override
    public void onShowPress(MotionEvent event) { return; }

    @Override
    public boolean onSingleTapUp(MotionEvent event) { return false; }

    @Override
    public boolean onSingleTapConfirmed(MotionEvent event) { return false; }

    @Override
    public boolean onDoubleTapEvent(MotionEvent event) { return false; }

}