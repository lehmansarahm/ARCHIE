package com.archie.tf_classify_mod.archie_mods;

import android.Manifest;
import android.util.Size;

public class Constants {

    public static final String PROC_NAME = "TfClassify_Mod";
    public static final String CONFIG_FILENAME = "file:///android_asset/config.json";

    public static final int PERMISSIONS_REQUEST = 1;

    public static final String PERMISSION_CAMERA = Manifest.permission.CAMERA;
    public static final String PERMISSION_STORAGE = Manifest.permission.WRITE_EXTERNAL_STORAGE;

    public static final String KEY_IMAGE_TO_PREPROCESS = "key_image_to_preprocess";


    // These are the settings for the original v1 Inception model. If you want to
    // use a model that's been produced from the TensorFlow for Poets codelab,
    // you'll need to set IMAGE_SIZE = 299, IMAGE_MEAN = 128, IMAGE_STD = 128,
    // INPUT_NAME = "Mul", and OUTPUT_NAME = "final_result".
    // You'll also need to update the MODEL_FILE and LABEL_FILE paths to point to
    // the ones you produced.
    //
    // To use v3 Inception model, strip the DecodeJpeg Op from your retrained
    // model first:
    //
    // python strip_unused.py \
    // --input_graph=<retrained-pb-file> \
    // --output_graph=<your-stripped-pb-file> \
    // --input_node_names="Mul" \
    // --output_node_names="final_result" \
    // --input_binary=true

    /* Inception V3
    private static final int INPUT_SIZE = 299;
    private static final int IMAGE_MEAN = 128;
    private static final float IMAGE_STD = 128.0f;
    private static final String INPUT_NAME = "Mul:0";
    private static final String OUTPUT_NAME = "final_result";
    */


    public static final int INPUT_SIZE = 224;
    public static final int IMAGE_MEAN = 128;
    public static final float IMAGE_STD = 128.0f;

    public static final String INPUT_NAME = "input";
    public static final String OUTPUT_NAME = "final_result"; // "MobilenetV1/Predictions/Softmax";

    public static final String MODEL_FILE = "file:///android_asset/graph.pb";
    public static final String LABEL_FILE = "file:///android_asset/labels.txt";

    public static final boolean SAVE_PREVIEW_BITMAP = false;

    public static final boolean MAINTAIN_ASPECT = true;

    public static final float TEXT_SIZE_DIP = 10;

    public static final Size PREVIEW_SIZE_SMALL = new Size(176, 144);
    public static final Size PREVIEW_SIZE_MEDIUM = new Size(640, 480);
    public static final Size PREVIEW_SIZE_LARGE = new Size(1024, 768);
    public static final Size PREVIEW_SIZE_XLARGE = new Size(1280, 960);
    public static final Size PREVIEW_SIZE_XXLARGE = new Size(2048, 1536);
    public static final Size PREVIEW_SIZE_XXXLARGE = new Size(4032, 3024);

}