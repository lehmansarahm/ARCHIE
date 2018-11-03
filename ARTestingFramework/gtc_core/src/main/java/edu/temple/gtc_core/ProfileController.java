package edu.temple.gtc_core;

import android.app.Activity;
import android.os.AsyncTask;
import android.os.Handler;
import android.util.Log;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.profiles.IConfigurationProfile;
import edu.temple.gtc_core.profiles.IInteractionProfile;
import edu.temple.gtc_core.utils.Constants;

public class ProfileController {

    private static final long PROFILE_TIMER_INTERVAL = TimeUnit.MINUTES.toMillis(1);
    private enum PROFILE_SWITCH_MODE { Configuration, Interaction, Hardware, None }

    private List<IConfigurationProfile> configProfiles;
    private List<IInteractionProfile> intProfiles;
    private List<ConfigFileReader.HardwareProfile> hardwareProfiles;

    private PROFILE_SWITCH_MODE profileSwitchMode;
    private Activity currentActivity;
    private int currentProfileIndex;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static Timer mProfileTimer;
    private static Handler mProfileTimerHandler;
    private TimerTask mProfileTimerTask;

    class ProfileAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.i(Constants.TAG, "Switching to next resource testing profile.");

            switch (profileSwitchMode) {
                case Configuration:
                    // pause the current profile before switching to the next one
                    configProfiles.get(currentProfileIndex).pauseProfile();

                    // update the current profile index
                    currentProfileIndex++;
                    if (currentProfileIndex == configProfiles.size()) currentProfileIndex = 0;

                    // start up the next profile
                    configProfiles.get(currentProfileIndex).resumeProfile(currentActivity);
                    break;
                case Interaction:
                    // pause the current profile before switching to the next one
                    intProfiles.get(currentProfileIndex).pauseProfile();

                    // update the current profile index
                    currentProfileIndex++;
                    if (currentProfileIndex == intProfiles.size()) currentProfileIndex = 0;

                    // start up the next profile
                    intProfiles.get(currentProfileIndex).resumeProfile(currentActivity);
                    break;
                case Hardware:
                    // pause the current profile before switching to the next one
                    // hardwareProfiles.get(currentProfileIndex).pauseProfile();

                    // update the current profile index
                    currentProfileIndex++;
                    if (currentProfileIndex == hardwareProfiles.size()) currentProfileIndex = 0;

                    // start up the next profile
                    // hardwareProfiles.get(currentProfileIndex).resumeProfile();

                    // TODO - figure out how to execute hardware profiles
                    break;
                default:
                    Log.e(Constants.TAG, "No profile switch mode set.  Sticking with current profiles.");
                    break;
            }

            return null;
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    public ProfileController(Activity currentActivity, String[] configProfileNames,
                             String[] interactionProfileNames,
                             ConfigFileReader.HardwareProfile[] hardwareProfiles) {
        this.currentActivity = currentActivity;
        this.hardwareProfiles = Arrays.asList(hardwareProfiles);
        Log.e(Constants.TAG, "Imported " + this.hardwareProfiles.size()
                + " Hardware Profile classes.");

        configProfiles = new ArrayList<>();
        for (String configProfileName : configProfileNames) {
            Log.i(Constants.TAG, "Attempting to instantiate IConfigurationProfile class: "
                    + configProfileName);
            Object profile = getObjectFromClassName(configProfileName);
            if (profile instanceof IConfigurationProfile)
                configProfiles.add((IConfigurationProfile) profile);
            else Log.e(Constants.TAG, "Profile class not instance of IConfigurationProfile: "
                    + configProfileName);
        }

        Log.e(Constants.TAG, "Imported " + configProfiles.size()
                + " IConfigurationProfile classes.");

        intProfiles = new ArrayList<>();
        for (String intProfileName : interactionProfileNames) {
            Log.i(Constants.TAG, "Attempting to instantiate IInteractionProfile class: "
                    + intProfileName);
            Object profile = getObjectFromClassName(intProfileName);
            if (profile instanceof IInteractionProfile)
                intProfiles.add((IInteractionProfile) profile);
            else Log.e(Constants.TAG, "Profile class not instance of IInteractionProfile: "
                    + intProfileName);
        }

        Log.e(Constants.TAG, "Imported " + intProfiles.size()
                + " IInteractionProfile classes.");

        if (configProfiles.size() > 1) profileSwitchMode = PROFILE_SWITCH_MODE.Configuration;
        else if (intProfiles.size() > 1) profileSwitchMode = PROFILE_SWITCH_MODE.Interaction;
        else if (this.hardwareProfiles.size() > 1) profileSwitchMode = PROFILE_SWITCH_MODE.Hardware;
        else profileSwitchMode = PROFILE_SWITCH_MODE.None;

        // Only start the profile switching timer if we have a reason to.
        if (profileSwitchMode != PROFILE_SWITCH_MODE.None) {
            mProfileTimer = new Timer();
            mProfileTimerHandler = new Handler();
            mProfileTimerTask = new TimerTask() {
                @Override
                public void run() {
                    mProfileTimerHandler.post(new Runnable() {
                        @Override
                        public void run() {
                            new ProfileController.ProfileAsyncTask().execute();
                        }
                    });
                }
            };

            mProfileTimer.schedule(mProfileTimerTask, 0, PROFILE_TIMER_INTERVAL);
        }
    }

    public void pause() {
        switch (profileSwitchMode) {
            case Configuration:
                configProfiles.get(currentProfileIndex).pauseProfile();
                intProfiles.get(0).pauseProfile();
                // TODO - hardwareProfiles.get(0).pauseProfile();
                break;
            case Interaction:
                configProfiles.get(0).pauseProfile();
                intProfiles.get(currentProfileIndex).pauseProfile();
                // TODO - hardwareProfiles.get(0).pauseProfile();
                break;
            case Hardware:
                configProfiles.get(0).pauseProfile();
                intProfiles.get(0).pauseProfile();
                // TODO - hardwareProfiles.get(currentProfileIndex).pauseProfile();
                break;
            default:
                if (configProfiles.size() > 0) configProfiles.get(0).pauseProfile();
                if (intProfiles.size() > 0) intProfiles.get(0).pauseProfile();
                // TODO - if (hardwareProfiles.size() > 0) hardwareProfiles.get(0).pauseProfile();
                break;
        }
    }

    public void resume() {
        switch (profileSwitchMode) {
            case Configuration:
                configProfiles.get(currentProfileIndex).resumeProfile(currentActivity);
                intProfiles.get(0).resumeProfile(currentActivity);
                // TODO - hardwareProfiles.get(0).resumeProfile();
                break;
            case Interaction:
                configProfiles.get(0).resumeProfile(currentActivity);
                intProfiles.get(currentProfileIndex).resumeProfile(currentActivity);
                // TODO - hardwareProfiles.get(0).resumeProfile();
                break;
            case Hardware:
                configProfiles.get(0).resumeProfile(currentActivity);
                intProfiles.get(0).resumeProfile(currentActivity);
                // TODO - hardwareProfiles.get(currentProfileIndex).resumeProfile();
                break;
            default:
                if (configProfiles.size() > 0) configProfiles.get(0).resumeProfile(currentActivity);
                if (intProfiles.size() > 0) intProfiles.get(0).resumeProfile(currentActivity);
                // TODO - if (hardwareProfiles.size() > 0) hardwareProfiles.get(0).resumeProfile();
                break;
        }
    }

    public void cleanup() {
        if (mProfileTimer != null) mProfileTimer.cancel();
    }

    public IConfigurationProfile getCurrentConfigurationProfile() {
        if (profileSwitchMode == PROFILE_SWITCH_MODE.Configuration)
            return configProfiles.get(currentProfileIndex);
        else return configProfiles.get(0);
    }

    public IInteractionProfile getCurrentInteractionProfile() {
        if (profileSwitchMode == PROFILE_SWITCH_MODE.Interaction)
            return intProfiles.get(currentProfileIndex);
        else return intProfiles.get(0);
    }

    public ConfigFileReader.HardwareProfile getCurrentHardwareProfile() {
        if (profileSwitchMode == PROFILE_SWITCH_MODE.Hardware)
            return hardwareProfiles.get(currentProfileIndex);
        else return hardwareProfiles.get(0);
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private Object getObjectFromClassName(String className) {
        try {
            Class<?> clazz = Class.forName(className);
            Constructor<?> defaultConstructor = clazz.getConstructor();
            Object obj = defaultConstructor.newInstance();
            return obj;
        } catch (ClassNotFoundException ex) {
            Log.e(Constants.TAG, "Could not find profile class: " + className, ex);
        } catch (NoSuchMethodException ex) {
            Log.e(Constants.TAG, "Could not find a default constructor for profile class: " + className, ex);
        } catch (InstantiationException | IllegalAccessException | InvocationTargetException ex) {
            Log.e(Constants.TAG, "Could not instantiate object for profile class: " + className, ex);
        }

        // if we get this far, it means we encountered an error ... return null
        return null;
    }

}