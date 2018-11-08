package com.archie.tf_speech_mod.archie_mods;

public class Constants {

    public static final String PROC_NAME = "Tf_Speech_Mod";
    public static final String CONFIG_FILENAME = "file:///android_asset/config.json";

    // Constants that control the behavior of the recognition code and model
    // settings. See the audio recognition tutorial for a detailed explanation of
    // all these, but you should customize them to match your training settings if
    // you are running your own model.
    public static final int SAMPLE_RATE = 16000;
    public static final int SAMPLE_DURATION_MS = 1000;
    public static final int RECORDING_LENGTH = (int) (SAMPLE_RATE * SAMPLE_DURATION_MS / 1000);
    public static final long AVERAGE_WINDOW_DURATION_MS = 500;
    public static final float DETECTION_THRESHOLD = 0.70f;
    public static final int SUPPRESSION_MS = 1500;
    public static final int MINIMUM_COUNT = 3;
    public static final long MINIMUM_TIME_BETWEEN_SAMPLES_MS = 30;
    public static final String LABEL_FILENAME = "file:///android_asset/conv_actions_labels.txt";
    public static final String MODEL_FILENAME = "file:///android_asset/conv_actions_frozen.pb";
    public static final String INPUT_DATA_NAME = "decoded_sample_data:0";
    public static final String SAMPLE_RATE_NAME = "decoded_sample_data:1";
    public static final String OUTPUT_SCORES_NAME = "labels_softmax";

    public static final String SILENCE_LABEL = "_silence_";
    public static final long MINIMUM_TIME_FRACTION = 4;

}
