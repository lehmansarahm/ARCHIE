package edu.temple.gtc_annotator.wearable;

public class Constants {

    public static final String TAG = "GtcAnnotator_Watch";

    // ------------------------------------------------------------------------------
    //          INTER-DEVICE COMMUNICATION MESSAGE CODES
    // ------------------------------------------------------------------------------

    public static final String INTENT_EXTRA_NODE_ID = "wearable_message_node_id";
    public static final String INTENT_EXTRA_MESSAGE_PAYLOAD = "wearable_message_payload";
    public static final String INTENT_EXTRA_ASYNC_REQUEST = "wearable_async_request";

    public static final String MESSAGE_PATH_ANNOTATION_REQUESTED = "/gtc_annotation/requested";
    public static final String MESSAGE_PATH_ANNOTATION_ACQUIRED = "/gtc_annotation/acquired";
    public static final String MESSAGE_PATH_ANNOTATION_COMPLETE = "/gtc_annotation/complete";

    public static final String MESSAGE_PATH_UX_REQUESTED = "/gtc_annotation/ux/requested";
    public static final String MESSAGE_PATH_UX_ACQUIRED = "/gtc_annotation/ux/acquired";
    public static final String MESSAGE_PATH_UX_COMPLETE = "/gtc_annotation/ux/complete";

    public static final String MESSAGE_PATH_ASYNC_ANNOTATION_REQUESTED = "/gtc_annotation/async/requested";
    public static final String MESSAGE_PATH_ASYNC_ANNOTATION_ACQUIRED = "/gtc_annotation/async/acquired";

}