package edu.temple.tf_tester.profiles_config;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.hardware.Camera;
import android.support.v4.app.ActivityCompat;
import android.util.Log;

import java.util.HashMap;
import java.util.Map;

import edu.temple.gtc_core.profiles.IConfigurationProfile;
import edu.temple.tf_tester.TfTesterApp;
import edu.temple.tf_tester.utils.Constants;

// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
//
//          HEAR YE, HEAR YE!!!!!
//
//          THIS APP USES THE ORIGINAL V1 CAMERA API BECAUSE THAT'S WHAT WORKS WITH
//          OUR HARDWARE ...
//
//          ... YES IT SUCKS, I KNOW.  DON'T HATE ME.
//
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------

public class BaseCameraPreviewProfile extends Activity implements Camera.PreviewCallback, IConfigurationProfile {

    private static final String BUNDLE_KEY_PREVIEW_DATA = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
    private static final String BUNDLE_KEY_PREVIEW_FORMAT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;

    protected static final int PERMISSION_REQUEST_CODE = 111;
    protected static final String[] REQUIRED_PERMISSIONS_LIST = new String[] {
            Manifest.permission.CAMERA,
            Manifest.permission.WRITE_EXTERNAL_STORAGE
    };

    protected static int previewWidth, previewHeight, cameraDirection;
    protected static boolean hasPermissions;
    private static TfTesterApp app;

    public BaseCameraPreviewProfile() {
        app = (TfTesterApp)getApplication();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      CONFIGURATION PROFILE INTERFACE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void resumeProfile() {
        Log.e(Constants.TAG, "Can't resume profile without a context!");
        resumeProfile(this);
    }

    @Override
    public void resumeProfile(Activity context) {
        hasPermissions = true;
        for (int i = 0; i < REQUIRED_PERMISSIONS_LIST.length; i++)
            hasPermissions &= (ActivityCompat.checkSelfPermission(context,
                    REQUIRED_PERMISSIONS_LIST[i]) == PackageManager.PERMISSION_GRANTED);

        if (hasPermissions) initializeProfile();
        else ActivityCompat.requestPermissions(context,
                REQUIRED_PERMISSIONS_LIST, PERMISSION_REQUEST_CODE);
    }

    @Override
    public void pauseProfile() {
        if (app.getMainCamera() != null)
            app.getMainCamera().release();
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PERMISSION REQUEST LISTENER METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onRequestPermissionsResult(final int requestCode,
                                           final String[] permissions,
                                           final int[] grantResults) {
        switch (requestCode) {
            case PERMISSION_REQUEST_CODE: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted) {
                    hasPermissions = true;
                    initializeProfile();
                } else ActivityCompat.requestPermissions(this,
                        REQUIRED_PERMISSIONS_LIST, PERMISSION_REQUEST_CODE);
            }
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      CAMERA V1 API LISTENER METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onPreviewFrame(final byte[] data, final Camera camera) {
        Map<String, Object> sensorData = new HashMap<>();
        sensorData.put(BUNDLE_KEY_PREVIEW_DATA, data);
        sensorData.put(BUNDLE_KEY_PREVIEW_FORMAT, camera.getParameters().getPreviewFormat());
        app.getGtcController().onDataAvailable(sensorData);
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void initializeProfile() {
        int mainCameraId = findCameraID(cameraDirection);
        if (mainCameraId < 0) Log.e(Constants.TAG, "No back-facing camera found!");
        else {
            Camera mainCamera = Camera.open(mainCameraId);
            mainCamera.setPreviewCallback(BaseCameraPreviewProfile.this);

            Camera.Parameters parameters = mainCamera.getParameters();
            Camera.Size previewSize = parameters.getPreviewSize();
            boolean isLandscape = (previewSize.width > previewSize.height);

            if (isLandscape) {
                parameters.setPreviewSize(previewHeight, previewWidth);
                mainCamera.setDisplayOrientation(90);
            }
            else parameters.setPreviewSize(previewWidth, previewHeight);

            app.setPreviewHeight(previewHeight);
            app.setPreviewWidth(previewWidth);
            app.setPreviewOrientationLandscape(isLandscape);

            app.setMainCameraId(mainCameraId);
            app.setMainCamera(mainCamera);

            app.getGtcController().onSensorsReady();
            app.getGtcController().startServices();

            // TODO - make "desired result" label a config file property
            // AppState.getGtcController().scheduleAsyncDataCollection(DESIRED_RESULT);
        }
    }

    private int findCameraID(int facingIndex) {
        int numberOfCameras = Camera.getNumberOfCameras();
        for (int i = 0; i < numberOfCameras; i++) {
            Camera.CameraInfo info = new Camera.CameraInfo();
            Camera.getCameraInfo(i, info);
            if (info.facing == facingIndex) {
                return i;
            }
        }
        return -1;
    }

}