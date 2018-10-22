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

import com.google.android.gms.common.api.GoogleApiClient;
import com.google.android.gms.common.api.PendingResult;
import com.google.android.gms.common.api.ResultCallback;
import com.google.android.gms.wearable.MessageApi;
import com.google.android.gms.wearable.Wearable;

import edu.temple.gtc_annotator.R;

public class CollectUxActivity extends WearableActivity {

    private static String mMessagePath = Constants.MESSAGE_PATH_UX_ACQUIRED;
    private static String mPhoneNodeID;

    private static RadioGroup iconGroup;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_collect_ux);

        Log.i(Constants.TAG, "Retrieving destination phone node ID.");
        mPhoneNodeID = getIntent().getStringExtra(Constants.INTENT_EXTRA_NODE_ID);

        Log.i(Constants.TAG, "Initializing application view components.");
        iconGroup = findViewById(R.id.iconGroup);
        Button submitUxButton = findViewById(R.id.submitUx);
        submitUxButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // retrieve user's selected response
                int radioButtonID = iconGroup.getCheckedRadioButtonId();
                RadioButton radioButton = iconGroup.findViewById(radioButtonID);
                String result = radioButton.getText().toString();

                // convert result to byte array and send message to phone
                byte[] resultPayload = result.getBytes();
                sendMessage(resultPayload);

                // display confirmation overlay to user
                Intent confirmationIntent = new Intent(CollectUxActivity.this, ConfirmationActivity.class);
                confirmationIntent.putExtra(ConfirmationActivity.EXTRA_ANIMATION_TYPE,
                        ConfirmationActivity.SUCCESS_ANIMATION);
                confirmationIntent.putExtra(ConfirmationActivity.EXTRA_MESSAGE, "Message sent");
                startActivity(confirmationIntent);

                // return to the main activity
                Intent mainIntent = new Intent(CollectUxActivity.this, MainActivity.class);
                startActivity(mainIntent);
            }
        });
    }

    private void sendMessage(final byte[] payload) {
        Log.i(Constants.TAG, "Attempting to send message to phone node: " + mPhoneNodeID
                + " using path: " + mMessagePath);
        new Thread(new Runnable() {
            @Override
            public void run() {
                GoogleApiClient mGoogleApiClient = new GoogleApiClient.Builder(CollectUxActivity.this)
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