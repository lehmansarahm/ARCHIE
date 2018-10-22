package edu.temple.tf_tester.profiles_int;

import android.util.Log;

import java.util.Map;

import edu.temple.tf_tester.utils.Constants;

public class TextInteractionProfile extends BaseInteractionProfile {

    private static final String BUNDLE_KEY_CLASSIFICATION_RESULT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULT;
    private static final String BUNDLE_KEY_RESPONSE_EVENT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;
    private static final String POSITIVE_MATCH = edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_POSITIVE_MATCH;

    private static String classificationResult, responseEvent;

    @Override
    public void onClassifierResultAvailable(Map<String, Object> classifierResult) {
        //  confirm that input map has the expected properties
        if (!classifierResult.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULT)) {
            Log.e(Constants.TAG, "INTERACTION PROFILE DID NOT RECEIVE CLASSIFICATION RESULT");
            classificationResult = "";
        } else {
            classificationResult = classifierResult.get(BUNDLE_KEY_CLASSIFICATION_RESULT).toString();
        }

        if (!classifierResult.containsKey(BUNDLE_KEY_RESPONSE_EVENT)) {
            Log.e(Constants.TAG, "INTERACTION PROFILE DID NOT RECEIVE CLASSIFICATION RESPONSE");
            responseEvent = "";
        } else {
            responseEvent = classifierResult.get(BUNDLE_KEY_RESPONSE_EVENT).toString();
            if (!responseEvent.equals(POSITIVE_MATCH))
                Log.e(Constants.TAG, "RESPONSE EVENT WAS NOT A POSITIVE MATCH.");
            else {
                // TODO - respond to classifier result however it makes sense
            }
        }
    }

}