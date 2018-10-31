package edu.temple.tf_tester_mod.archie_mods;

import android.app.Activity;
import android.app.Fragment;
import android.app.FragmentManager;
import android.media.Image;
import android.media.ImageReader;
import android.util.Size;
import android.view.WindowManager;

import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import edu.temple.gtc_core.profiles.IConfigurationProfile;
import edu.temple.tf_tester_mod.ClassifierApplication;
import edu.temple.tf_tester_mod.R;
import edu.temple.tf_tester_mod.CameraConnectionFragment;
import edu.temple.tf_tester_mod.env.Logger;

public class ArchieTfConfigProfile implements IConfigurationProfile, ImageReader.OnImageAvailableListener {

    private static final Logger LOGGER = new Logger();

    private static Activity currentActivity;
    private static FragmentManager fm;
    private static WindowManager wm;

    private static boolean initialized = false;

    /**
     * Overloaded method to utilize current activity when checking for permissions
     *
     * @param currentActivity
     */
    @Override
    public void resumeProfile(Activity currentActivity) {
        LOGGER.i("Profile resumed for activity: " + currentActivity.getComponentName());
        this.currentActivity = currentActivity;
        resume();
    }

    @Override
    public void pauseProfile() {
        LOGGER.i("Profile paused.  Is profile initialized: " + initialized);
    }

    @Override
    public void onImageAvailable(final ImageReader reader) {
        ClassifierApplication app = (ClassifierApplication) currentActivity.getApplication();
        if (app.isComputing()) {
            LOGGER.e("Cannot process this image ... classifier is currently working on another.");
            return;
        }

        LOGGER.i("New image is available ... attempting to process.");
        Image image = reader.acquireLatestImage();
        if (image == null) {
            LOGGER.e("No latest image available from ImageReader.");
            return;
        }

        Map<String, Object> sensorInput = new HashMap<>();
        sensorInput.put(Constants.KEY_IMAGE_TO_PREPROCESS, image);
        app.getGtcController().onDataAvailable(sensorInput);
    }

    private void resume() {
        if (currentActivity == null) {
            LOGGER.e("Cannot resume configuration profile without valid reference to the current activity!");
            return;
        }

        fm = currentActivity.getFragmentManager();
        wm = currentActivity.getWindowManager();

        if (!initialized) {
            initializeView();
            initialized = true;
        }
    }

    private void initializeView() {
        LOGGER.i("Initializing view for TF-ARCHIE configuration profile.");
        final ClassifierApplication app = (ClassifierApplication) currentActivity.getApplication();
        final Fragment fragment =
                CameraConnectionFragment.newInstance(
                        new CameraConnectionFragment.ConnectionCallback() {
                            @Override
                            public void onPreviewSizeChosen(final Size size, final int rotation) {
                                app.setPreviewSize(size);
                                app.setCameraOrientation(rotation + wm.getDefaultDisplay().getRotation());
                                app.getGtcController().onSensorsReady();
                                app.getGtcController().startServices();
                            }
                        }, this, getLayoutId(), getDesiredPreviewFrameSize());
        fm.beginTransaction().replace(R.id.container, fragment).commit();
    }

    private int getLayoutId() {
        return R.layout.camera_connection_fragment;
    }

    private Size getDesiredPreviewFrameSize() {
        return Constants.DESIRED_PREVIEW_SIZE;
    }

}