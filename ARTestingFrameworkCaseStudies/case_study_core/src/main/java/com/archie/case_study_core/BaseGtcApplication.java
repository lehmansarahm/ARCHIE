package com.archie.case_study_core;

import android.app.Activity;

import edu.temple.gtc_core.GtcController;

public abstract class BaseGtcApplication extends BaseApplication {

    public static final String EXTRA_CONFIG_FILE = "configFilename";

    protected void onPause(Activity currentActivity) {
        LOGGER.i("Pausing profiles.");
        getGtcController().pauseProfiles();

        if (!currentActivity.isFinishing()) {
            LOGGER.d("Requesting finish");
            currentActivity.finish();
        }
    }

    protected void onResume() {
        LOGGER.i("Resuming profiles.");
        getGtcController().resumeProfiles();
    }

    protected boolean onDestroy() {
        try {
            getGtcController().stopServices();
        } catch (Exception ex) {
            LOGGER.e(ex, "Something went wrong while trying to stop the GTC Controller services.");
        }

        return super.onDestroy();
    }

    public static void initGtcController(Activity currentActivity, String procName, String configFileName) {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        try {
            // instantiating the GTC controller will automatically load and execute
            // the classifiers, profiles listed in the app config
            BaseGtcApplication app = ((BaseGtcApplication) currentActivity.getApplication());
            GtcController gtcController = new GtcController(currentActivity,
                    android.os.Process.myPid(), procName, configFileName);
            app.setGtcController(gtcController);
        } catch (Exception ex) {
            LOGGER.e("Unable to create new GTC Controller instance!  Exception message: \n\t"
                    + ex.getMessage());
        }

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static GtcController gtcController;

    public void setGtcController(GtcController gtcController) {
        synchronized (LOCK) {
            BaseGtcApplication.gtcController = gtcController;
        }
    }

    public GtcController getGtcController() {
        synchronized (LOCK) {
            return BaseGtcApplication.gtcController;
        }
    }

}