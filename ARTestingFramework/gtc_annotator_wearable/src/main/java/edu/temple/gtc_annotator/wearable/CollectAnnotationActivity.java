package edu.temple.gtc_annotator.wearable;

import android.content.Intent;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.wearable.activity.ConfirmationActivity;
import android.support.wearable.activity.WearableActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.common.api.ResultCallback;
import com.google.android.gms.wearable.MessageApi;
import com.google.android.gms.wearable.Wearable;

import edu.temple.gtc_annotator.R;

public class CollectAnnotationActivity extends WearableActivity {

    private static String mMessagePath; // = Constants.MESSAGE_PATH_ANNOTATION_ACQUIRED;
    private static String mPhoneNodeID;

    private static boolean isRequestAsync = false;

    private static RadioGroup iconGroup;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_collect_annotation);

        Log.i(Constants.TAG, "Retrieving destination phone node ID.");
        mPhoneNodeID = getIntent().getStringExtra(Constants.INTENT_EXTRA_NODE_ID);

        Log.i(Constants.TAG, "Determining whether request is asynchronous.");
        isRequestAsync = getIntent().getBooleanExtra(Constants.INTENT_EXTRA_ASYNC_REQUEST, false);
        if (isRequestAsync) mMessagePath = Constants.MESSAGE_PATH_ASYNC_ANNOTATION_ACQUIRED;
        else mMessagePath = Constants.MESSAGE_PATH_ANNOTATION_ACQUIRED;

        Log.i(Constants.TAG, "Retrieving payload components.");
        String payload = getIntent().getStringExtra(Constants.INTENT_EXTRA_MESSAGE_PAYLOAD);
        String[] payloadComponents = payload.split(",");

        Log.i(Constants.TAG, "Initializing application view components.");
        iconGroup = findViewById(R.id.iconGroup);

        TextView instructionTextView = findViewById(R.id.instructionTextView);
        instructionTextView.setText("Did you perform activity: " + payloadComponents[0]
                + " within the last " + payloadComponents[1] + " minute?");

        Button submitAnnotationButton = findViewById(R.id.submitAnnotation);
        submitAnnotationButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // retrieve user's selected response
                int radioButtonID = iconGroup.getCheckedRadioButtonId();
                RadioButton radioButton = iconGroup.findViewById(radioButtonID);
                if (radioButton != null) {
                    // get the annotation result
                    String result = radioButton.getText().toString();

                    // ONLY send a response back if:
                    //      ... request is synchronous (OR)
                    //      ... request is async AND the user completed the activity
                    if (!isRequestAsync || result.equalsIgnoreCase("Yes")) {
                        // convert result to byte array and send message to phone
                        byte[] resultPayload = result.getBytes();
                        sendMessage(resultPayload);

                        // display confirmation overlay to user
                        Intent confirmationIntent = new Intent(CollectAnnotationActivity.this, ConfirmationActivity.class);
                        confirmationIntent.putExtra(ConfirmationActivity.EXTRA_ANIMATION_TYPE,
                                ConfirmationActivity.SUCCESS_ANIMATION);
                        confirmationIntent.putExtra(ConfirmationActivity.EXTRA_MESSAGE, "Message sent");
                        startActivity(confirmationIntent);
                    } else {
                        Log.e(Constants.TAG, "Invalid message conditions ..."
                                + "\t\tWas request async: " + isRequestAsync
                                + "\t\tAnnotation result: " + result);
                    }

                    // return to the main activity
                    Intent mainIntent = new Intent(CollectAnnotationActivity.this, MainActivity.class);
                    startActivity(mainIntent);
                }
            }
        });
    }

    private void sendMessage(final byte[] payload) {
        Log.i(Constants.TAG, "Attempting to send message to phone node: " + mPhoneNodeID
                + " using path: " + mMessagePath);
        new Thread(new Runnable() {
            @Override
            public void run() {
                GoogleApiClient mGoogleApiClient = new GoogleApiClient.Builder(CollectAnnotationActivity.this)
                        .addApi(Wearable.API)
                        .build();
                mGoogleApiClient.blockingConnect();

                PendingResult<MessageApi.SendMessageResult> sendResult =
                        Wearable.MessageApi.sendMessage(mGoogleApiClient, mPhoneNodeID, mMessagePath, payload);
                sendResult.setResultCallback(new ResultCallback<MessageApi.SendMessageResult>() {
                    @Override
                    public void onResult(@NonNull MessageApi.SendMessageResult sendMessageResult) {
                        Log.i(Constants.TAG, "Received message transfer result: "
                                + sendMessageResult.getStatus().getStatusMessage());
                    }
                });
            }
        }).start();
    }

}