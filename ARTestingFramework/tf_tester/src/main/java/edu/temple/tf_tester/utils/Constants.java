package edu.temple.tf_tester.utils;

import android.Manifest;

public class Constants {

    public static final String TAG = "TF_TESTER";

    public static final int PERMISSIONS_REQUEST = 111;
    public static final String[] REQUIRED_PERMISSIONS = new String[] {
            Manifest.permission.CAMERA,
            Manifest.permission.WRITE_EXTERNAL_STORAGE
    };

    public static final int ROTATION = 90;

}
