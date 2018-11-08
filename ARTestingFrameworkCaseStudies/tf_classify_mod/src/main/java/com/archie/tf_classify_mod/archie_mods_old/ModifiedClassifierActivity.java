/*
 * Copyright 2016 The TensorFlow Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.archie.tf_classify_mod.archie_mods_old;

import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.view.KeyEvent;
import android.view.WindowManager;
import android.widget.Toast;

import edu.temple.gtc_core.GtcController;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.env.Logger;

public class ModifiedClassifierActivity extends Activity {

    private static final Logger LOGGER = new Logger();

    @Override
    protected void onCreate(final Bundle savedInstanceState) {
        LOGGER.d("onCreate " + this);
        super.onCreate(null);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setContentView(R.layout.activity_camera);

        if (((ClassifierApplication)getApplication()).isTesting()) {
            final Handler handler = new Handler();
            handler.postDelayed(new Runnable() {
                @Override
                public void run() {
                    LOGGER.e("TESTING TIME LIMIT REACHED.");
                    ModifiedClassifierActivity.this.finishAffinity();
                }}, ClassifierApplication.TESTING_DELAY);
        }

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

    @Override
    public boolean onKeyDown(final int keyCode, final KeyEvent event) {
        if (keyCode == KeyEvent.KEYCODE_VOLUME_DOWN || keyCode == KeyEvent.KEYCODE_VOLUME_UP) {
            ((ClassifierApplication)getApplication()).toggleDebug();
            // TODO - requestRender();
            // TODO - classifier.enableStatLogging(app.isDebug());
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case Constants.PERMISSIONS_REQUEST: {
                if (grantResults.length > 0
                        && grantResults[0] == PackageManager.PERMISSION_GRANTED
                        && grantResults[1] == PackageManager.PERMISSION_GRANTED) {
                    initializeGtcController();
                } else requestPermission();
            }
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    private boolean hasPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            return checkSelfPermission(Constants.PERMISSION_CAMERA) == PackageManager.PERMISSION_GRANTED
                    && checkSelfPermission(Constants.PERMISSION_STORAGE) == PackageManager.PERMISSION_GRANTED;
        } else {
            return true;
        }
    }

    private void requestPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (shouldShowRequestPermissionRationale(Constants.PERMISSION_CAMERA) ||
                    shouldShowRequestPermissionRationale(Constants.PERMISSION_STORAGE)) {
                Toast.makeText(ModifiedClassifierActivity.this,
                        "Camera AND storage permission are required for this demo", Toast.LENGTH_LONG).show();
            }
            requestPermissions(new String[] { Constants.PERMISSION_CAMERA, Constants.PERMISSION_STORAGE},
                    Constants.PERMISSIONS_REQUEST);
        }
    }

    private void initializeGtcController() {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        GtcController gtcController = new GtcController(ModifiedClassifierActivity.this,
                android.os.Process.myPid(), Constants.PROC_NAME, Constants.CONFIG_FILENAME);
        ((ClassifierApplication)getApplication()).setGtcController(gtcController);

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }

}