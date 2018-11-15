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

import com.archie.case_study_core.BaseApplication;
import com.archie.case_study_core.BaseGtcApplication;
import com.archie.tf_speech_mod.R;
import com.archie.tf_speech_mod.SpeechApplication;
import com.archie.tf_speech_mod.env.Logger;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

import edu.temple.gtc_core.GtcController;

import static com.archie.tf_speech_mod.archie_mods.Constants.CONFIG_FILENAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.LABEL_FILENAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.PROC_NAME;
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

    private void initializeTestInstance() {
        BaseApplication.initializeTestInstance(this, getIntent());
    }

    private void initGtcController() {
        BaseGtcApplication.initGtcController(this, PROC_NAME, CONFIG_FILENAME);
    }

}