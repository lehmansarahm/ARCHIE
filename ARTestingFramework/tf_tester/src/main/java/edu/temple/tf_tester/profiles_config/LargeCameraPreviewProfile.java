package edu.temple.tf_tester.profiles_config;

import android.hardware.Camera;

public class LargeCameraPreviewProfile extends BaseCameraPreviewProfile {

    public LargeCameraPreviewProfile() {
        previewWidth = 1440;
        previewHeight = 1920;
        cameraDirection = Camera.CameraInfo.CAMERA_FACING_BACK;
    }

}