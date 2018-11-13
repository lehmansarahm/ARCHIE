package com.archie.opencv_blobDetector_mod.archie_mods;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.support.v4.app.ActivityCompat;
import android.view.Window;
import android.view.WindowManager;

import com.archie.opencv_blobDetector_mod.ColorBlobApplication;
import com.archie.opencv_blobDetector_mod.R;
import com.archie.opencv_blobDetector_mod.env.Logger;

import edu.temple.gtc_core.GtcController;

public class ModifiedMainActivity extends Activity {

    public static final String PROC_NAME = "OpenCV_BlobDetector_Mod";
    public static final String CONFIG_FILENAME = "file:///android_asset/config.json";

    private static final String EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    private static final String EXTRA_TESTING_LABEL = "testingLabel";
    private static final String EXTRA_TRIAL_TIME = "trialTime";

    private static final Logger LOGGER = new Logger();

    private static final int PERMISSIONS_REQUEST        = 112;
    private static final String[] REQUIRED_PERMISSIONS  = new String[] {
            Manifest.permission.CAMERA
    };

    private boolean             mHasPermissions = false;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public ModifiedMainActivity() {
        LOGGER.i("Instantiated new " + this.getClass());
    }

    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        LOGGER.i("called onCreate");
        super.onCreate(savedInstanceState);
        initializeTestInstance();

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        setContentView(R.layout.color_blob_detection_surface_view);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        mHasPermissions = true;
        for (int i = 0; i < REQUIRED_PERMISSIONS.length; i++)
            mHasPermissions &= (ActivityCompat.checkSelfPermission(this,
                    REQUIRED_PERMISSIONS[i]) == PackageManager.PERMISSION_GRANTED);

        if (mHasPermissions) {
            LOGGER.d("All permissions have been provided! ");
            initGtcController();
        } else {
            LOGGER.d("Some permissions are missing...");
            ActivityCompat.requestPermissions(this, REQUIRED_PERMISSIONS, PERMISSIONS_REQUEST);
        }
    }

    @Override
    public void onPause() {
        super.onPause();
        ((ColorBlobApplication)getApplication()).onPause(this);
    }

    @Override
    public void onResume() {
        super.onResume();
        ((ColorBlobApplication)getApplication()).onResume();
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        ((ColorBlobApplication)getApplication()).onDestroy();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case PERMISSIONS_REQUEST: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted) {
                    mHasPermissions = true;
                    initGtcController();
                }
                else ActivityCompat.requestPermissions(this, REQUIRED_PERMISSIONS, PERMISSIONS_REQUEST);
            }
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void initializeTestInstance() {
        ColorBlobApplication app = ((ColorBlobApplication) getApplication());

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
                    ModifiedMainActivity.this.finishAffinity();
                }}, app.getTestingDelay());
        }
    }

    private void initGtcController() {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        try {
            // instantiating the GTC controller will automatically load and execute
            // the classifiers, profiles listed in the app config
            ColorBlobApplication app = ((ColorBlobApplication) getApplication());
            GtcController gtcController = new GtcController(ModifiedMainActivity.this,
                    android.os.Process.myPid(), PROC_NAME, CONFIG_FILENAME);
            app.setGtcController(gtcController);
        } catch (Exception ex) {
            LOGGER.e("Unable to create new GTC Controller instance!  Exception message: \n\t"
                    + ex.getMessage());
        }

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }

}