package edu.temple.gtc_core;

import android.os.AsyncTask;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Log;

import java.io.IOException;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.services.ResourceLoggerService;
import edu.temple.gtc_core.utils.Constants;

public class HardwareProfileController {

    /*private static final long PROFILE_TIMER_INTERVAL = TimeUnit.MINUTES.toMillis(1);
    private static final long CPU_TIMER_INTERVAL = TimeUnit.SECONDS.toMillis(1);

    private static IGtcCallbackListener callbackListener;
    private static ConfigFileReader.TestingProfile[] testingProfiles;
    private static int currentProfileIndex;


    // --------------------------------------------------------------------------------
    //      Profile switching timer ... scheduled in primary class constructor
    // --------------------------------------------------------------------------------
    private static Timer mProfileTimer;
    private static Handler mProfileTimerHandler;
    private TimerTask mProfileTimerTask;

    class ProfileAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            Log.i(Constants.TAG, "Switching to next resource testing profile.");
            currentProfileIndex++;
            if (currentProfileIndex == testingProfiles.length) currentProfileIndex = 0;
            callbackListener.onTestProfileReady(testingProfiles[currentProfileIndex]);
            return null;
        }
    }
    // --------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------
    //      CPU utilization timer ... scheduled in primary class constructor
    // --------------------------------------------------------------------------------
    private static Timer mCpuTimer;
    private static TimerTask mCpuTimerTask;

    private static Handler mCpuEaterHandler;
    private static Runnable mCpuEaterRunnable;
    // --------------------------------------------------------------------------------

    public static long factorial(long n) {
        if (n == 1) return 1;
        else return (n * factorial(n - 1));
    }

    public HardwareProfileController(ConfigFileReader.TestingProfile[] profiles, IGtcCallbackListener listener) {
        testingProfiles = profiles;
        callbackListener = listener;
        currentProfileIndex = 1;

        mProfileTimer = new Timer();
        mProfileTimerHandler = new Handler();
        mProfileTimerTask = new TimerTask() {
            @Override
            public void run() {
                mProfileTimerHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        new ProfileAsyncTask().execute();
                    }
                });
            }
        };

        mCpuEaterHandler = new Handler();
        mCpuEaterRunnable = new Runnable() {
            @Override
            public void run() {
                Log.e(Constants.TAG, "STARTING NEW CPU EATER RUNNABLE.");
                long t1 = SystemClock.elapsedRealtime();
                long timeFactorial = factorial(5000);
                long t2 = SystemClock.elapsedRealtime();
                Log.e(Constants.TAG,"CPU Eater Service Time (millis) = " + (t2 - t1));
            }
        };

        mCpuTimer = new Timer();
        mCpuTimerTask = new TimerTask() {
            @Override
            public void run() {
                String[] cpuStats;
                try {
                    cpuStats = ResourceLoggerService.getCpuStats();
                } catch (IOException ex) {
                    Log.e(Constants.TAG, "Something went wrong while trying to retrieve CPU stats.", ex);
                    return;
                }

                int currentCpuLoad = Integer.parseInt(cpuStats[0]);
                ConfigFileReader.TestingProfile currentProfile = testingProfiles[currentProfileIndex];
                Log.i(Constants.TAG, "Comparing current CPU utilization: " + currentCpuLoad
                        + "\t\t Against current profile range: " + currentProfile.cpu_range[0]
                        + " - " + currentProfile.cpu_range[1]);

                if (currentCpuLoad <= currentProfile.cpu_range[0]) {

                    // TODO - find a more sophisticated method of eating CPU cycles

                    Log.i(Constants.TAG, "Current CPU load is below test profile minimum ... spin up additional cycles!");
                    mCpuEaterHandler.post(mCpuEaterRunnable);
                } else if (currentCpuLoad >= currentProfile.cpu_range[1]) {

                    // TODO - find a more sophisticated method of freeing up CPU cycles

                    Log.e(Constants.TAG, "Current CPU load is above test profile maximum ... attempt to reduce load!");
                    mCpuEaterHandler.removeCallbacks(mCpuEaterRunnable);
                } else {
                    Log.i(Constants.TAG, "CPU is within profile range.  No changes necessary.");
                }
            }
        };

        mProfileTimer.schedule(mProfileTimerTask, 0, PROFILE_TIMER_INTERVAL);
        mCpuTimer.schedule(mCpuTimerTask, 0, CPU_TIMER_INTERVAL);
    }

    public void cleanup() {
        mProfileTimer.cancel();
        mCpuTimer.cancel();
    }*/

}