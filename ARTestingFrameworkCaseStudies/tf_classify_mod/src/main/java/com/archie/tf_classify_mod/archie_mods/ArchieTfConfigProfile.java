package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.app.Fragment;
import android.content.Context;
import android.hardware.Camera;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.params.StreamConfigurationMap;
import android.media.Image;
import android.media.ImageReader;
import android.util.Size;
import android.widget.Toast;

import com.archie.tf_classify_mod.CameraConnectionFragment;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.LegacyCameraConnectionFragment;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.env.Logger;

import java.util.HashMap;
import java.util.Map;

import edu.temple.gtc_core.profiles.IConfigurationProfile;
import edu.temple.gtc_core.utils.Constants;

import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_FORMAT_CAMERA2;
import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_FORMAT_LEGACY;

public class ArchieTfConfigProfile implements IConfigurationProfile,
        ImageReader.OnImageAvailableListener, Camera.PreviewCallback {

    protected static final Logger LOGGER = new Logger();

    private static Activity initActivity;
    private static Fragment fragment;

    private boolean useCamera2API;
    protected int previewWidth = 0;
    protected int previewHeight = 0;

    @Override
    public void resumeProfile(Activity activity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for config profile: "
                + this.getClass().getSimpleName());
        initActivity = activity;
        if (fragment == null) {
            LOGGER.i("No fragment set.  Initializing new fragment.");
            setFragment();
        }
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for config profile: "
                + this.getClass().getSimpleName());
        if (fragment != null) {
            fragment.onPause();
            fragment.onDetach();
            fragment.onDestroy();
            fragment = null;
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          CAMERA EVENT / INTERFACE LISTENERS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    /**
     * Callback for Android legacy camera
     */
    @Override
    public void onPreviewFrame(final byte[] bytes, final Camera camera) {
        LOGGER.e("Legacy camera API called preview frame availability listener for config profile: "
                + this.getClass().getSimpleName());

        ClassifierApplication app = ((ClassifierApplication)initActivity.getApplication());
        if (app.isComputing()) {
            // LOGGER.e("App processing other input ... Dropping frame!");
            return;
        }

        Map<String, Object> dataToPreprocess = new HashMap<>();
        dataToPreprocess.put(Constants.BUNDLE_KEY_PREVIEW_DATA, bytes);
        dataToPreprocess.put(Constants.BUNDLE_KEY_PREVIEW_FORMAT, INPUT_FORMAT_LEGACY);
        app.getGtcController().onDataAvailable(dataToPreprocess);
    }

    /**
     * Callback for Camera2 API
     */
    @Override
    public void onImageAvailable(final ImageReader reader) {
        LOGGER.e("ImageReader called image availability listener for config profile: "
                + this.getClass().getSimpleName());

        //We need wait until we have some size from onPreviewSizeChosen
        if (previewWidth == 0 || previewHeight == 0) {
            LOGGER.e("NO PREVIEW DIMENSIONS SET.");
            return;
        }

        ClassifierApplication app = ((ClassifierApplication)initActivity.getApplication());
        if (app.isComputing()) {
            // LOGGER.e("App processing other input ... Dropping image!");
            return;
        }

        Image image = null;
        try {
            image = reader.acquireLatestImage();
            if (image == null) return;

            LOGGER.i("Preparing to classify image with height: " + image.getHeight()
                + " and width: " + image.getWidth());

            final Image.Plane[] planes = image.getPlanes();
            Map<String, Object> dataToPreprocess = new HashMap<>();
            dataToPreprocess.put(Constants.BUNDLE_KEY_PREVIEW_DATA, planes);
            dataToPreprocess.put(Constants.BUNDLE_KEY_PREVIEW_FORMAT, INPUT_FORMAT_CAMERA2);
            app.getGtcController().onDataAvailable(dataToPreprocess);
        } catch (final Exception e) {
            LOGGER.e(e, "Exception!");
            return;
        } finally {
            if (image != null) image.close();
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          PRIVATE REFERENCE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------

    protected void setFragment() {
        String cameraId = chooseCamera();
        if (cameraId == null) {
            Toast.makeText(initActivity, "No Camera Detected", Toast.LENGTH_SHORT).show();
            initActivity.finish();
        }

        final ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        if (useCamera2API) {
            CameraConnectionFragment camera2Fragment = CameraConnectionFragment.newInstance(
                    new CameraConnectionFragment.ConnectionCallback() {
                        @Override
                        public void onPreviewSizeChosen(final Size size, final int rotation) {
                            previewHeight = size.getHeight();
                            previewWidth = size.getWidth();
                            ArchieTfConfigProfile.this.onPreviewSizeChosen(size, rotation);
                        }
                    },
                    this,
                    getLayoutId(),
                    app.getDesiredPreviewSize());
            camera2Fragment.setCamera(cameraId);
            fragment = camera2Fragment;
        } else {
            fragment = new LegacyCameraConnectionFragment(this,
                    getLayoutId(), app.getDesiredPreviewSize());
        }

        initActivity.getFragmentManager()
                .beginTransaction()
                .replace(R.id.container, fragment)
                .commit();
    }

    private String chooseCamera() {
        final CameraManager manager = (CameraManager) initActivity.getSystemService(Context.CAMERA_SERVICE);
        try {
            for (final String cameraId : manager.getCameraIdList()) {
                final CameraCharacteristics characteristics = manager.getCameraCharacteristics(cameraId);

                // We don't use a front facing camera in this sample.
                final Integer facing = characteristics.get(CameraCharacteristics.LENS_FACING);
                if (facing != null && facing == CameraCharacteristics.LENS_FACING_FRONT) {
                    continue;
                }

                final StreamConfigurationMap map = characteristics.get(CameraCharacteristics.SCALER_STREAM_CONFIGURATION_MAP);
                if (map == null) continue;

                // Fallback to camera1 API for internal cameras that don't have full support.
                // This should help with legacy situations where using the camera2 API causes
                // distorted or otherwise broken previews.
                useCamera2API = (facing == CameraCharacteristics.LENS_FACING_EXTERNAL)
                        || isHardwareLevelSupported(characteristics,
                        CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL_FULL);
                LOGGER.i("Camera API lv2?: %s", useCamera2API);
                return cameraId;
            }
        } catch (CameraAccessException e) {
            LOGGER.e(e, "Not allowed to access camera");
        }

        return null;
    }

    private void onPreviewSizeChosen(final Size size, final int rotation) {
        LOGGER.i("New preview size chosen: " + size.getHeight() + ", " + size.getWidth());
        final ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        app.setPreviewSize(size);
        app.setRotation(rotation);
        app.getGtcController().onSensorsReady();
        app.getGtcController().startServices();
    }

    private boolean isHardwareLevelSupported(CameraCharacteristics characteristics, int requiredLevel) {
        int deviceLevel = characteristics.get(CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL);
        if (deviceLevel == CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY) {
            return requiredLevel == deviceLevel;
        }

        // deviceLevel is not LEGACY, can use numerical sort
        return requiredLevel <= deviceLevel;
    }

    protected int getLayoutId() {
        return R.layout.camera_connection_fragment;
    }

}