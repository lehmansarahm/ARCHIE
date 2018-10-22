package edu.temple.gtc_core;

import android.content.Context;
import android.content.res.AssetManager;
import android.util.Log;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.utils.Constants;

public class ConfigFileReader {

    private static final boolean DEFAULT_USE_CAMERA = true;
    private static final boolean DEFAULT_USE_ACCEL = false;
    private static final boolean DEFAULT_USE_GYRO = false;
    private static final boolean DEFAULT_USE_GPS = false;

    private static final boolean DEFAULT_STORE_APP_HIT_GTC_HIT = true;
    private static final boolean DEFAULT_STORE_APP_HIT_GTC_MISS = true;
    private static final boolean DEFAULT_STORE_APP_MISS_GTC_HIT = true;
    private static final boolean DEFAULT_STORE_APP_MISS_GTC_MISS = false;

    private static final long DEFAULT_ASYNC_INTERVAL = TimeUnit.MINUTES.toMillis(2);
    private static final String DEFAULT_ASYNC_LABEL = "daisy";

    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      SUPPORTING CLASSES
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    // for other internal classes to use
    public enum TimeDenom { Seconds, Minutes, Hours, Days }

    // MUST MAINTAIN SAME NAMING STRUCTURE AS INTERNAL CONFIG FILE OBJECTS
    public class BufferSensorData {
        boolean camera;
        boolean accelerometer;
        boolean gyroscope;
        boolean gps;
    }

    // MUST MAINTAIN SAME NAMING STRUCTURE AS INTERNAL CONFIG FILE OBJECTS
    public class BufferStoreEvents {
        boolean app_hit_gtc_hit;
        boolean app_hit_gtc_miss;
        boolean app_miss_gtc_hit;
        boolean app_miss_gtc_miss;
    }

    // MUST MAINTAIN SAME NAMING STRUCTURE AS INTERNAL CONFIG FILE OBJECTS
    public class AsyncSchedule {
        int interval;
        TimeDenom denomination;
        String default_label;
    }

    public class HardwareProfile {
        String name;
        int allowable_cpu_percentage;
        int allowable_ram_percentage;
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      CONFIG FILE PROPERTIES (MUST MAINTAIN SAME NAMING STRUCTURE)
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    BufferSensorData buffer_sensor_data;
    BufferStoreEvents buffer_store_events;

    AsyncSchedule async_anno_settings;
    AsyncSchedule async_ux_settings;

    String[] classifiers;
    String[] configuration_profiles;
    String[] interaction_profiles;

    HardwareProfile[] hardware_profiles;


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      STATIC CREATION METHOD TO POPULATE A CONFIG INSTANCE FROM JSON
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    public static ConfigFileReader create(Context context, String configFilename) {
        Gson gson = new GsonBuilder().create();
        String rawConfigFileContent = parseAssetFile(context, configFilename);
        ConfigFileReader config = gson.fromJson(rawConfigFileContent, ConfigFileReader.class);
        return config;
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PUBLIC ACCESS METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --

    public String toString() {
        Gson gson = new GsonBuilder().create();
        return gson.toJson(this);
    }

    public void cleanup() {
        buffer_sensor_data = null;
        buffer_store_events = null;
        async_anno_settings = null;
        async_ux_settings = null;
        classifiers = null;
        configuration_profiles = null;
        interaction_profiles = null;
        hardware_profiles = null;
    }

    public BufferSensorData getBufferSensors() {
        if (buffer_sensor_data != null) return buffer_sensor_data;
        else {
            BufferSensorData bsd = new BufferSensorData();
            bsd.camera = DEFAULT_USE_CAMERA;
            bsd.accelerometer = DEFAULT_USE_ACCEL;
            bsd.gyroscope = DEFAULT_USE_GYRO;
            bsd.gps = DEFAULT_USE_GPS;
            return bsd;
        }
    }

    public BufferStoreEvents getBufferStoreEvents() {
        if (buffer_store_events != null) return buffer_store_events;
        else {
            BufferStoreEvents bse = new BufferStoreEvents();
            bse.app_hit_gtc_hit = DEFAULT_STORE_APP_HIT_GTC_HIT;
            bse.app_hit_gtc_miss = DEFAULT_STORE_APP_HIT_GTC_MISS;
            bse.app_miss_gtc_hit = DEFAULT_STORE_APP_MISS_GTC_HIT;
            bse.app_miss_gtc_miss = DEFAULT_STORE_APP_MISS_GTC_MISS;
            return bse;
        }
    }

    public String getDefaultAsyncLabel() {
        if (async_anno_settings != null) return async_anno_settings.default_label;
        else return DEFAULT_ASYNC_LABEL;
    }

    public long getAsyncAnnoIntervalMillis() {
        TimeDenom asyncAnnoDenom = async_anno_settings.denomination;
        if (asyncAnnoDenom == null)
            return DEFAULT_ASYNC_INTERVAL;

        int asyncAnnoInterval = async_anno_settings.interval;
        switch (asyncAnnoDenom) {
            case Seconds:
                return TimeUnit.SECONDS.toMillis(asyncAnnoInterval);
            case Minutes:
                return TimeUnit.MINUTES.toMillis(asyncAnnoInterval);
            case Hours:
                return TimeUnit.HOURS.toMillis(asyncAnnoInterval);
            case Days:
                return TimeUnit.DAYS.toMillis(asyncAnnoInterval);
            default:
                return DEFAULT_ASYNC_INTERVAL;
        }
    }

    public long getAsyncUxIntervalMillis() {
        TimeDenom asyncUxDenom = async_ux_settings.denomination;
        if (asyncUxDenom == null)
            return DEFAULT_ASYNC_INTERVAL;

        int asyncUxInterval = async_ux_settings.interval;
        switch (asyncUxDenom) {
            case Seconds:
                return TimeUnit.SECONDS.toMillis(asyncUxInterval);
            case Minutes:
                return TimeUnit.MINUTES.toMillis(asyncUxInterval);
            case Hours:
                return TimeUnit.HOURS.toMillis(asyncUxInterval);
            case Days:
                return TimeUnit.DAYS.toMillis(asyncUxInterval);
            default:
                return DEFAULT_ASYNC_INTERVAL;
        }
    }

    public String[] getClassifiers() {
        return classifiers;
    }

    public String[] getConfigurationProfiles() {
        return configuration_profiles;
    }

    public String[] getInteractionProfiles() {
        return interaction_profiles;
    }

    public HardwareProfile[] getHardwareProfiles() {
        return hardware_profiles;
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private static String parseAssetFile(Context context, String configFilename) {
        AssetManager assetManager = context.getAssets();
        String actualFilename = configFilename.split("file:///android_asset/")[1];
        Log.i(Constants.TAG, "Reading config details from: " + actualFilename);

        String content = "";
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(assetManager.open(actualFilename)));
            String line;
            while ((line = br.readLine()) != null) content += line;
            br.close();
        } catch (IOException e) {
            Log.e(Constants.TAG, "Something went wrong while trying to read the config file: " + configFilename, e);
        }

        return content;
    }

}