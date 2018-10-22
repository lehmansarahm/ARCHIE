package edu.temple.gtc_core.classify;

import java.util.Map;

public interface IClassifier {

    void preprocess(Map<String, Object> sensorInput);

    void classify(Map<String, Object> preprocessedInput);

    void respond(Map<String, Object> classifierInput);

}