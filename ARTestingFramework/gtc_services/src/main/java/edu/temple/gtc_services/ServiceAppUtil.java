package edu.temple.gtc_services;

import android.app.ActivityManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.support.v4.content.ContextCompat;
import android.util.Log;

import edu.temple.gtc_services.Constants;
import edu.temple.gtc_services.MainActivity;
import edu.temple.gtc_services.CommunicatorService;

public class ServiceAppUtil {

    public enum SERVICES { CommunicatorService }

    public static PendingIntent getDefaultPendingIntent(Context context) {
        // Create the intent behavior to manage a user tapping on the notification
        Intent intent = new Intent(context, MainActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        PendingIntent pendingIntent = PendingIntent.getActivity(context, 0, intent, 0);
        return pendingIntent;
    }

    public static Intent getDefaultIntent(Context context, SERVICES serviceName) {
        switch (serviceName) {
            case CommunicatorService:
                return new Intent(context, CommunicatorService.class);
            default:
                Log.d(Constants.TAG, "Unknown service name provided: " + serviceName);
                return null;
        }
    }

    public static boolean anyGtcServicesRunning(Context context) {
        boolean servicesRunning = false;

        for (SERVICES service : SERVICES.values()) {
            servicesRunning |= isServiceRunning(context, getClassName(service));
        }

        return servicesRunning;
    }

    private static String getClassName(SERVICES serviceName) {
        switch (serviceName) {
            case CommunicatorService:
                return "edu.temple.gtc_services.CommunicatorService";
            default:
                return null;
        }
    }

    private static boolean isServiceRunning(Context context, String serviceClassName) {
        ActivityManager mgr = (ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
        for (ActivityManager.RunningServiceInfo service : mgr.getRunningServices(Integer.MAX_VALUE)) {
            if (serviceClassName.equals(service.service.getClassName())) return true;
        }
        return false;
    }

}
