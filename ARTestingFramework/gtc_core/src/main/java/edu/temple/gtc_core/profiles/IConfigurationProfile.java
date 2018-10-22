package edu.temple.gtc_core.profiles;

import android.app.Activity;

/**
 * This interface only details methods required for communicating with the GTC Controller.
 * Subscribing classes must also implement any sensor initialization, event handling logic
 * necessary for their particular configurations.
 */
public interface IConfigurationProfile extends IBaseProfile {

    /**
     * Overloaded method to utilize current activity when checking for permissions
     *
     * @param currentActivity
     */
    void resumeProfile(Activity currentActivity);

}