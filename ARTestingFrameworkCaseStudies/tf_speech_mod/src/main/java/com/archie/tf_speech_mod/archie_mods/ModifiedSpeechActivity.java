package com.archie.tf_speech_mod.archie_mods;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;

import com.archie.tf_speech_mod.R;
import com.archie.tf_speech_mod.SpeechApplication;
import com.archie.tf_speech_mod.env.Logger;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

import edu.temple.gtc_core.GtcController;

import static com.archie.tf_speech_mod.archie_mods.Constants.LABEL_FILENAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.REQUEST_RECORD_AUDIO;

public class ModifiedSpeechActivity extends Activity {

    private static final String EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    private static final String EXTRA_TESTING_LABEL = "testingLabel";
    private static final String EXTRA_TRIAL_TIME = "trialTime";

    private static final Logger LOGGER = new Logger();

    private Button quitButton;
    private List<String> displayedLabels = new ArrayList<>();

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        // Set up the UI.
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_speech);

        initializeAppInstance();
        initializeTestInstance();
        requestMicrophonePermission();
    }

    @Override
    public synchronized void onStart() {
        LOGGER.d("onStart " + this);
        super.onStart();
    }

    @Override
    public synchronized void onResume() {
        LOGGER.d("onResume " + this);
        ((SpeechApplication)getApplication()).onResume();
        super.onResume();
    }

    @Override
    public synchronized void onPause() {
        LOGGER.d("onPause " + this);
        ((SpeechApplication)getApplication()).onPause(this);
        super.onPause();
    }

    @Override
    public synchronized void onStop() {
        LOGGER.d("onStop " + this);
        super.onStop();
    }

    @Override
    public synchronized void onDestroy() {
        LOGGER.d("onDestroy " + this);
        ((SpeechApplication)getApplication()).onDestroy();
        super.onDestroy();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void initializeAppInstance() {
        quitButton = findViewById(R.id.quit);
        quitButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                moveTaskToBack(true);
                android.os.Process.killProcess(android.os.Process.myPid());
                System.exit(1);
            }
        });

        ListView labelsListView = findViewById(R.id.list_view);

        // Load the labels for the model, but only display those that don't start
        // with an underscore.
        String actualFilename = LABEL_FILENAME.split("file:///android_asset/")[1];
        LOGGER.i("Reading labels from: " + actualFilename);

        List<String> labels = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(getAssets().open(actualFilename)));
            String line;
            while ((line = br.readLine()) != null) {
                labels.add(line);
                if (line.charAt(0) != '_') {
                    displayedLabels.add(line.substring(0, 1).toUpperCase() + line.substring(1));
                }
            }
            br.close();
        } catch (IOException e) {
            throw new RuntimeException("Problem reading label file!", e);
        }

        // Build a list view based on these labels.
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this,
                R.layout.list_text_item, displayedLabels);
        labelsListView.setAdapter(arrayAdapter);

        SpeechApplication app = (SpeechApplication) getApplication();
        app.setLabelsListView(labelsListView);
        app.setLabels(labels);
    }

    private void initializeTestInstance() {
        SpeechApplication app = ((SpeechApplication) getApplication());

        if (getIntent().hasExtra(EXTRA_TIMED_TEST)) {
            String rawIsTesting = getIntent().getStringExtra(EXTRA_TIMED_TEST);
            try {
                Boolean isTesting = Boolean.parseBoolean(rawIsTesting);
                LOGGER.i("RECEIVED NOTICE TO QUIT AFTER TEST TIME LIMIT EXPIRES: " + isTesting);
                app.setTesting(isTesting);
            } catch (Exception ex) {
                LOGGER.e(ex, "Something went wrong while trying to parse raw testing string: " + rawIsTesting);
            }
        }
        else LOGGER.i("NO TIMED_TEST RUNTIME PARAM RECEIVED.");

        if (getIntent().hasExtra(EXTRA_TESTING_LABEL)) {
            String testingLabel = getIntent().getStringExtra(EXTRA_TESTING_LABEL);
            LOGGER.i("RECEIVED NOTICE TO USE TESTING LABEL: " + testingLabel);
            app.setTestingLabel(testingLabel);
        }
        else LOGGER.i("NO TESTING_LABEL RUNTIME PARAM RECEIVED.");

        if (getIntent().hasExtra(EXTRA_TRIAL_TIME)) {
            String rawTrialTime = getIntent().getStringExtra(EXTRA_TRIAL_TIME);
            try {
                int trialTime = Integer.parseInt(rawTrialTime);
                app.setTestTime(trialTime);
                LOGGER.i("RECEIVED NOTICE TO USE TRIAL TIME (IN MINUTES): " + trialTime);
                LOGGER.i("TEST APP WILL AUTO-FINISH AFTER DELAY (IN MILLIS): " + app.getTestingDelay());
            } catch (Exception ex) {
                LOGGER.e(ex, "Something went wrong while trying to parse raw trial time string: " + rawTrialTime);
            }
        }
        else LOGGER.i("NO TRIAL_TIME RUNTIME PARAM RECEIVED.");

        LOGGER.i("SETTING TRIAL TIME FOR: " + app.getTestingDelay() + " MILLIS");
        if (app.isTesting()) {
            final Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                @Override
                public void run() {
                    LOGGER.e("TESTING TIME LIMIT REACHED.");
                    ModifiedSpeechActivity.this.finishAffinity();
                }}, app.getTestingDelay());
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void requestMicrophonePermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            boolean hasPermissions =
                    checkSelfPermission(Manifest.permission.RECORD_AUDIO) ==
                            PackageManager.PERMISSION_GRANTED;
            if (hasPermissions) initGtcController();
            else requestPermissions(new String[]{ Manifest.permission.RECORD_AUDIO },
                        REQUEST_RECORD_AUDIO);
        } else initGtcController();
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        if (requestCode == REQUEST_RECORD_AUDIO && grantResults.length > 0
                && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
            initGtcController();
        }
    }

    private void initGtcController() {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        try {
            // instantiating the GTC controller will automatically load and execute
            // the classifiers, profiles listed in the app config
            SpeechApplication app = ((SpeechApplication) getApplication());
            GtcController gtcController = new GtcController(ModifiedSpeechActivity.this,
                    android.os.Process.myPid(), Constants.PROC_NAME, Constants.CONFIG_FILENAME);
            app.setGtcController(gtcController);
        } catch (Exception ex) {
            LOGGER.e("Unable to create new GTC Controller instance!  Exception message: \n\t"
                    + ex.getMessage());
        }

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }

}