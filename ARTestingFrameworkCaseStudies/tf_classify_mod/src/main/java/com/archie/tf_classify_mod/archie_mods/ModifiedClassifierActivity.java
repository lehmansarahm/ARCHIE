package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.hardware.Camera;
import android.hardware.camera2.CameraCharacteristics;
import android.media.Image;
import android.media.ImageReader;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.Surface;
import android.view.WindowManager;
import android.widget.Toast;

import com.archie.tf_classify_mod.Classifier;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.ResultsView;
import com.archie.tf_classify_mod.env.BorderedText;
import com.archie.tf_classify_mod.env.Logger;

import java.nio.ByteBuffer;

import edu.temple.gtc_core.GtcController;

import static com.archie.tf_classify_mod.archie_mods.Constants.EXTRA_TIMED_TEST;
import static com.archie.tf_classify_mod.archie_mods.Constants.EXTRA_TESTING_LABEL;
import static com.archie.tf_classify_mod.archie_mods.Constants.EXTRA_TRIAL_TIME;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSIONS_REQUEST;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_CAMERA;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_STORAGE;

public class ModifiedClassifierActivity extends Activity {

    private static final Logger LOGGER = new Logger();

    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          ACTIVITY LIFE CYCLE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    protected void onCreate(final Bundle savedInstanceState) {
        LOGGER.d("onCreate " + this);
        super.onCreate(null);

        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setContentView(R.layout.activity_camera);
        initializeTestInstance();

        if (hasPermission()) initializeGtcController();
        else requestPermission();
    }

    @Override
    public synchronized void onStart() {
        LOGGER.d("onStart " + this);
        super.onStart();
    }

    @Override
    public synchronized void onResume() {
        LOGGER.d("onResume " + this);
        ((ClassifierApplication)getApplication()).onResume();
        super.onResume();
    }

    @Override
    public synchronized void onPause() {
        LOGGER.d("onPause " + this);
        ((ClassifierApplication)getApplication()).onPause(this);
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
        ((ClassifierApplication)getApplication()).onDestroy();
        super.onDestroy();
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          PERMISSIONS HANDLING METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions,
                                           final int[] grantResults) {
        if (requestCode == PERMISSIONS_REQUEST) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED) {
                initializeGtcController();
            }
            else requestPermission();
        }
    }

    private boolean hasPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            return checkSelfPermission(PERMISSION_CAMERA) == PackageManager.PERMISSION_GRANTED &&
                    checkSelfPermission(PERMISSION_STORAGE) == PackageManager.PERMISSION_GRANTED;
        }
        else return true;
    }

    private void requestPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (shouldShowRequestPermissionRationale(PERMISSION_CAMERA) ||
                    shouldShowRequestPermissionRationale(PERMISSION_STORAGE)) {
                Toast.makeText(ModifiedClassifierActivity.this,
                        "Camera AND storage permission are required for this demo", Toast.LENGTH_LONG).show();
            }
            requestPermissions(new String[] {PERMISSION_CAMERA, PERMISSION_STORAGE}, PERMISSIONS_REQUEST);
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          PRIVATE REFERENCE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    private void initializeTestInstance() {
        ClassifierApplication app = ((ClassifierApplication) getApplication());

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
                    ModifiedClassifierActivity.this.finishAffinity();
                }}, app.getTestingDelay());
        }
    }

    private void initializeGtcController() {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        try {
            // instantiating the GTC controller will automatically load and execute
            // the classifiers, profiles listed in the app config
            ClassifierApplication app = ((ClassifierApplication) getApplication());
            GtcController gtcController = new GtcController(ModifiedClassifierActivity.this,
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