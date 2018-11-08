package com.archie.tf_speech_mod.archie_mods;

import android.app.Activity;
import java.util.Map;

import edu.temple.gtc_core.classify.IClassifier;

public class ArchieOpenCvClassifier implements IClassifier {

    /**
     * ANY SORT OF INIT LOGIC THAT WE NEED TO WAIT ON INPUT SENSORS (MICROPHONE) TO PROVIDE
     */
    @Override
    public void onSensorsReady(Activity currentActivity) {
        // TODO - populate
    }

    @Override
    public void preprocess(Map<String, Object> sensorInput) {
        // TODO - populate
    }

    @Override
    public void classify(final Map<String, Object> preprocessedInput) {
        // TODO - populate
    }

    @Override
    public void evaluate(Map<String, Object> classifierInput) {
        // TODO - populate
    }

}