package edu.temple.tf_tester.profiles_config;

import android.hardware.Camera;

public class MediumCameraPreviewProfile extends BaseCameraPreviewProfile {

    public MediumCameraPreviewProfile() {
        previewWidth = 960;
        previewHeight = 1280;
        cameraDirection = Camera.CameraInfo.CAMERA_FACING_BACK;
    }

}