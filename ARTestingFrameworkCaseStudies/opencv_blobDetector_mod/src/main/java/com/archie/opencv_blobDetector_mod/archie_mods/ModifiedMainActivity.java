package com.archie.opencv_blobDetector_mod.archie_mods;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.view.Window;
import android.view.WindowManager;

import com.archie.case_study_core.BaseApplication;
import com.archie.case_study_core.BaseGtcApplication;
import com.archie.opencv_blobDetector_mod.ColorBlobApplication;
import com.archie.opencv_blobDetector_mod.R;
import com.archie.opencv_blobDetector_mod.env.Logger;

public class ModifiedMainActivity extends Activity {

    public static final String  PROC_NAME = "OpenCV_BlobDetector_Mod";
    public static final String  CONFIG_FILENAME = "file:///android_asset/config.json";

    private static final Logger LOGGER = new Logger();

    private static final int    PERMISSIONS_REQUEST        = 112;
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
        BaseApplication.initializeTestInstance(this, getIntent());
    }

    private void initGtcController() {
        BaseGtcApplication.initGtcController(this, PROC_NAME, CONFIG_FILENAME);
    }

}