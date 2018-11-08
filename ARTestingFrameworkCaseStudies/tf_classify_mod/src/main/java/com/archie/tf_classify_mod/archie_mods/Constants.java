package com.archie.tf_classify_mod.archie_mods;

import android.Manifest;
import android.util.Size;

public class Constants {

    // ----------------------------------------------------------------------------------------
    //          ARCHIE properties
    // ----------------------------------------------------------------------------------------
    public static final String PROC_NAME = "TfClassify_Mod";
    public static final String CONFIG_FILENAME = "file:///android_asset/config.json";

    // ----------------------------------------------------------------------------------------
    //          flags for CLI arguments
    // ----------------------------------------------------------------------------------------
    public static final String EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    public static final String EXTRA_TESTING_LABEL = "testingLabel";

    // ----------------------------------------------------------------------------------------
    //          permissions settings
    // ----------------------------------------------------------------------------------------
    public static final int PERMISSIONS_REQUEST = 1;
    public static final String PERMISSION_CAMERA = Manifest.permission.CAMERA;
    public static final String PERMISSION_STORAGE = Manifest.permission.WRITE_EXTERNAL_STORAGE;

    // ----------------------------------------------------------------------------------------
    //          camera connection properties
    // ----------------------------------------------------------------------------------------
    public static final Size DESIRED_PREVIEW_SIZE = new Size(640, 480);
    public static final boolean MAINTAIN_ASPECT = true;

    // ----------------------------------------------------------------------------------------
    //          camera frame pre-processing properties
    // ----------------------------------------------------------------------------------------
    public static final boolean SAVE_PREVIEW_BITMAP = false;

    // ----------------------------------------------------------------------------------------
    //          classifier properties
    // ----------------------------------------------------------------------------------------
    public static final int INPUT_SIZE = 224;
    public static final int IMAGE_MEAN = 117;
    public static final float IMAGE_STD = 1;
    public static final String INPUT_NAME = "input";
    public static final String OUTPUT_NAME = "output";
    public static final String MODEL_FILE = "file:///android_asset/graph.pb";
    public static final String LABEL_FILE = "file:///android_asset/labels.txt";

    // ----------------------------------------------------------------------------------------
    //          output / app view properties
    // ----------------------------------------------------------------------------------------
    public static final float TEXT_SIZE_DIP = 10;

}