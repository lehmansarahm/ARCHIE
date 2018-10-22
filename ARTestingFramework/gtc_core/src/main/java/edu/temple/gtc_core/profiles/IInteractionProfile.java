package edu.temple.gtc_core.profiles;

import java.util.Map;

public interface IInteractionProfile extends IBaseProfile {

    void onSensorsReady();

    void onClassifierResultAvailable(Map<String, Object> classifierResult);

}