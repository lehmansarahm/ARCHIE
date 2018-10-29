package edu.temple.gtc_core.classify;

import android.app.Activity;

import java.util.Map;

public interface IClassifier {

    void onSensorsReady(Activity currentActivity);

    void preprocess(Map<String, Object> sensorInput);

    void classify(Map<String, Object> preprocessedInput);

    void evaluate(Map<String, Object> classifierInput);

}