package edu.temple.gtc_core.profiles;

import android.app.Activity;

public interface IBaseProfile {

    /**
     * GTC Controller will call start, stop methods when switching between profiles.  "Resume Profile"
     * method responsible for spinning up any state management required when starting up a profile
     * for the first time, or resuming execution after pausing.
     */
    void resumeProfile(Activity currentActivity);

    /**
     * GTC Controller will call start, stop methods when switching between profiles.  "Pause Profile"
     * method responsible for performing any clean-up operations when this profile is no longer
     * being actively executed.
     */
    void pauseProfile();

}