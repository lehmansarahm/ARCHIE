package com.archie.opencv_blobDetector_mod.archie_mods;

import android.app.Activity;

import com.archie.opencv_blobDetector_mod.env.Logger;

import java.util.Map;

import edu.temple.gtc_core.profiles.IInteractionProfile;

public class ArchieBlobIntProfile implements IInteractionProfile {

    private static final Logger LOGGER = new Logger();

    @Override
    public void onSensorsReady() {
        LOGGER.e("GTC Controller called 'onSensorsReady' for interaction profile: "
                + this.getClass().getSimpleName());
    }

    @Override
    public void onClassifierResultAvailable(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'onClassifierResultAvailable' for interaction profile: "
                + this.getClass().getSimpleName());
    }

    @Override
    public void resumeProfile(Activity activity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for interaction profile: "
                + this.getClass().getSimpleName());
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for interaction profile: "
                + this.getClass().getSimpleName());
    }

}