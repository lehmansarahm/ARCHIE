package edu.temple.gtc_services;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import edu.temple.gtc_core.service_conns.CommunicatorConnection;
import edu.temple.gtc_core.utils.ResourcePropUtil;

/**
 * Responsible for hosting the remote services on a given device
 */
public class MainActivity extends AppCompatActivity {

    private static CommunicatorConnection commConnection = new CommunicatorConnection();
    private static Intent baseCommIntent = CommunicatorConnection.getDefaultIntent();

    private TextView feedbackText;
    private Button startServicesButton, stopServicesButton, sendTestMessagesButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        commConnection.initialize(this, baseCommIntent);

        feedbackText = findViewById(R.id.feedbackText);
        startServicesButton = findViewById(R.id.startServicesButton);
        stopServicesButton = findViewById(R.id.stopServicesButton);
        sendTestMessagesButton = findViewById(R.id.sendTestMessagesButton);

        startServicesButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    displayStopServicesInfo();
                    commConnection.startService();
                    commConnection.bind();
                } catch (Exception ex) {
                    Log.e(Constants.TAG, "Failed to start GTC services on app button click.", ex);
                }
            }
        });

        stopServicesButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    // TODO - debug unbinding from service when app is closed, relaunched from notification
                    displayStartServicesInfo();
                    commConnection.unbind();
                    commConnection.stopService();
                } catch (Exception ex) {
                    Log.e(Constants.TAG, "Failed to stop GTC services on app button click.", ex);
                }
            }
        });

        sendTestMessagesButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (commConnection.isServiceBound()) {
                    Bundle testData = new Bundle();
                    testData.putInt("pid", android.os.Process.myPid());
                    commConnection.sendMessageToGtc(testData);
                    commConnection.sendMessageToTesters(testData);
                } else Log.e(Constants.TAG, "CAN'T SEND TEST MESSAGES TO UNBOUND SERVICE.");
            }
        });

        if (ServiceAppUtil.anyGtcServicesRunning(this)) displayStopServicesInfo();
        else displayStartServicesInfo();
    }

    private void displayStartServicesInfo() {
        feedbackText.setText(ResourcePropUtil.SERVICE_TEXT_START(this));
        startServicesButton.setEnabled(true);
        stopServicesButton.setEnabled(false);
        sendTestMessagesButton.setEnabled(false);
    }

    private void displayStopServicesInfo() {
        feedbackText.setText(ResourcePropUtil.SERVICE_TEXT_STOP(this));
        startServicesButton.setEnabled(false);
        stopServicesButton.setEnabled(true);
        sendTestMessagesButton.setEnabled(true);
    }

}