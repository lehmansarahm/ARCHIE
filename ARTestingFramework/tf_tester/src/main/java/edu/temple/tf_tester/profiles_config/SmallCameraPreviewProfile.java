package edu.temple.tf_tester.profiles_config;

import android.hardware.Camera;

public class SmallCameraPreviewProfile extends BaseCameraPreviewProfile {

    public SmallCameraPreviewProfile() {
        previewWidth = 480;
        previewHeight = 640;
        cameraDirection = Camera.CameraInfo.CAMERA_FACING_BACK;
    }

}