package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.view.WindowManager;
import android.widget.Toast;

import com.archie.case_study_core.BaseApplication;
import com.archie.case_study_core.BaseGtcApplication;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.env.Logger;

import static com.archie.tf_classify_mod.archie_mods.Constants.CONFIG_FILENAME;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSIONS_REQUEST;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_CAMERA;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_STORAGE;
import static com.archie.tf_classify_mod.archie_mods.Constants.PROC_NAME;

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

        if (hasPermission()) initGtcController();
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
                initGtcController();
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
        BaseApplication.initializeTestInstance(this, getIntent());
    }

    private void initGtcController() {
        BaseGtcApplication.initGtcController(this, PROC_NAME, CONFIG_FILENAME);
    }

}