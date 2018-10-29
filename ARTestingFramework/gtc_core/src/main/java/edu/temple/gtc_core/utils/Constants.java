package edu.temple.gtc_core.utils;

public class Constants {

    public static final String TAG = "GtcCore";

    public static final String CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";

    public static final String YES = "Yes";
    public static final String NO  = "No";



    public static final String BUNDLE_KEY_PREVIEW_DATA = "bundle_key_preview_data";
    public static final String BUNDLE_KEY_PREVIEW_FORMAT = "bundle_key_preview_format";
    public static final String BUNDLE_KEY_PREPROCESSED_OUTPUT = "bundle_key_preprocessed_output";
    public static final String BUNDLE_KEY_CLASSIFICATION_RESULTS = "bundle_key_classification_results";
    public static final String BUNDLE_KEY_CLASSIFICATION_TOP_RESULT = "bundle_key_classification_top_result";
    public static final String BUNDLE_KEY_RESPONSE_EVENT = "bundle_key_response_event";
    public static final String BUNDLE_KEY_RESPONSE_TIME = "bundle_key_response_time";
    public static final String BUNDLE_KEY_LAST_PROCESSING_TIME = "bundle_key_last_processing_time";

    public static final String CLASSIFIER_RESPONSE_TIME_LIMIT_REACHED = "time_limit_reached";
    public static final String CLASSIFIER_RESPONSE_POSITIVE_MATCH = "positive_match";
    public static final String CLASSIFIER_RESPONSE_STILL_BUFFERING = "buffering";



    // ------------------------------------------------------------------------------
    //          INTER-PROCESS COMMUNICATION MESSAGE CODES
    // ------------------------------------------------------------------------------

    public static final int MSG_CODE_REGISTER_GTC = 0;
    public static final int MSG_CODE_REGISTER_TESTER = 1;
    public static final int MSG_CODE_SEND_TO_GTC = 2;
    public static final int MSG_CODE_SEND_TO_TEST = 3;
    public static final int MSG_CODE_SEND_WEARABLE_MESSAGE = 4;

    // ------------------------------------------------------------------------------
    //          INTER-DEVICE COMMUNICATION MESSAGE CODES
    // ------------------------------------------------------------------------------

    public static final String RECEIVER_WATCH_NAME = "Moto 360";
    public static final String RECEIVER_PHONE_NAME = "Nexus 5";

    public static final String NODE_CAPABILITY_GTC_ANNOTATION = "gtc_annotation";

    public static final String MESSAGE_PATH_ANNOTATION_REQUESTED = "/gtc_annotation/requested";
    public static final String MESSAGE_PATH_ANNOTATION_ACQUIRED = "/gtc_annotation/acquired";
    public static final String MESSAGE_PATH_ANNOTATION_COMPLETE = "/gtc_annotation/complete";

    public static final String MESSAGE_PATH_UX_REQUESTED = "/gtc_annotation/ux/requested";
    public static final String MESSAGE_PATH_UX_ACQUIRED = "/gtc_annotation/ux/acquired";
    public static final String MESSAGE_PATH_UX_COMPLETE = "/gtc_annotation/ux/complete";

    public static final String MESSAGE_PATH_ASYNC_ANNOTATION_REQUESTED = "/gtc_annotation/async/requested";
    public static final String MESSAGE_PATH_ASYNC_ANNOTATION_ACQUIRED = "/gtc_annotation/async/acquired";

    // ------------------------------------------------------------------------------
    
    public static final String EVENT_TESTER = "event_local";
    public static final String EVENT_USER = "event_user";

    public static final int MSG_CODE_STOP = 1;
    public static final int MSG_CODE_REGISTER_PID = 2;

}