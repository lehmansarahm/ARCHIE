package com.archie.opencv_blobDetector_mod.archie_mods;

import android.app.Activity;
import android.view.MotionEvent;
import android.view.View;

import com.archie.opencv_blobDetector_mod.ColorBlobApplication;
import com.archie.opencv_blobDetector_mod.env.Logger;

import org.opencv.android.CameraBridgeViewBase;
import org.opencv.core.Mat;

import java.util.HashMap;
import java.util.Map;

import edu.temple.gtc_core.profiles.IConfigurationProfile;

import static com.archie.opencv_blobDetector_mod.archie_mods.ArchieBlobClassifier.PREVIEW_FORMAT_FRAME;
import static com.archie.opencv_blobDetector_mod.archie_mods.ArchieBlobClassifier.PREVIEW_FORMAT_TOUCH;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;

public class ArchieBlobConfigProfile implements IConfigurationProfile,
        View.OnTouchListener, CameraBridgeViewBase.CvCameraViewListener2 {

    private static final Logger LOGGER = new Logger();

    private Activity            initActivity;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void resumeProfile(Activity activity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for config profile: "
                + this.getClass().getSimpleName());
        initActivity = activity;

        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.initializeCameraView(initActivity, this);
        app.initializeLoaderCallback(initActivity, this);
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for config profile: "
                + this.getClass().getSimpleName());
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public boolean onTouch(View v, MotionEvent event) {
        LOGGER.i("Received touch event!  Forwarding to classifier.");

        Map<String, Object> touchEventMap = new HashMap<>();
        touchEventMap.put(BUNDLE_KEY_PREVIEW_DATA, event);
        touchEventMap.put(BUNDLE_KEY_PREVIEW_FORMAT, PREVIEW_FORMAT_TOUCH);

        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.getGtcController().onDataAvailable(touchEventMap);

        return false; // don't need subsequent touch events
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onCameraViewStarted(int width, int height) {
        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.initializeCameraViewParams(width, height);
        app.getGtcController().onSensorsReady();
    }

    @Override
    public void onCameraViewStopped() {
        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.releaseRgba();
    }

    @Override
    public Mat onCameraFrame(CameraBridgeViewBase.CvCameraViewFrame inputFrame) {
        LOGGER.i("Received new camera frame!  Updating with results from classifier.");

        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.setRgba(inputFrame.rgba());

        if (app.isColorSelected()) {
            Map<String, Object> cameraFrameMap = new HashMap<>();
            cameraFrameMap.put(BUNDLE_KEY_PREVIEW_FORMAT, PREVIEW_FORMAT_FRAME);
            app.getGtcController().onDataAvailable(cameraFrameMap);
        }

        return app.getRgba();
    }

}