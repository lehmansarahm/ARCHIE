package edu.temple.gtc_core.services;

import android.app.Notification;
import android.app.Service;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Handler;
import android.os.IBinder;
import android.support.annotation.Nullable;
import android.util.Log;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

import edu.temple.gtc_core.buffers.StatsMap;
import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;

public class ResourceLoggerService extends Service {

    private static final boolean RUN_IN_FOREGROUND = true;

    private static final int ALLSTATS_INDEX_DEVICE_CPU = 0;
    private static final int ALLSTATS_INDEX_DEVICE_MEM = 1;
    private static final int ALLSTATS_INDEX_PROC = 2;

    private static final int CPUSTAT_INDEX_USER = 0;
    private static final int CPUSTAT_INDEX_SYSTEM = 1;
    private static final int CPUSTAT_INDEX_IOW = 2;
    private static final int CPUSTAT_INDEX_IRQ = 3;

    private static final int MEMSTAT_INDEX_TOTAL  = 0;
    private static final int MEMSTAT_INDEX_FREE = 1;

    private static final int PROCSTAT_INDEX_PID = 0;
    private static final int PROCSTAT_INDEX_FLAGS = 8;
    private static final int PROCSTAT_INDEX_UTIME = 13;
    private static final int PROCSTAT_INDEX_STIME = 14;
    private static final int PROCSTAT_INDEX_CUTIME = 15;
    private static final int PROCSTAT_INDEX_CSTIME = 16;
    private static final int PROCSTAT_INDEX_PRIORITY = 17;
    private static final int PROCSTAT_INDEX_NUM_THREADS = 19;
    private static final int PROCSTAT_INDEX_START_TIME = 21;
    private static final int PROCSTAT_INDEX_RSS = 23;

    private static final int INTERVAL = 1000 * 30;      // 30 sec
    private static final int NOTIFICATION_ID = 543;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static int EXTRA_PID_DEFAULT_VALUE = 0;
    private static String extraPIDKey;                  // set during "onCreate"
    private static String extraProcNameKey;             // set during "onCreate"

    private static String notiTitle, notiText;
    private static Notification noti;

    private static Integer mPid = null;
    private static String mProcName = null;
    private static boolean isServiceRunning = false;

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static final String RESOURCE_HEADER = ("Timestamp,"                             // common field
            + "CpuTotal,CpuUser,CpuSystem,CpuIow,CpuIrq"                                    // CPU-specific fields (whole device)
            + "MemTotal,MemFree"                                                            // RAM-specific fields (whole device)
            + "PID,Flags,Utime,Stime,Cutime,Cstime,Priority,NumThreads,StartTime,RSS");     // process-specific fields
    private static StatsMap mResourceStats = new StatsMap(StatsMap.Type.ListMulti, RESOURCE_HEADER);

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private static Timer mTimer;
    private static Handler mTimerHandler;
    private TimerTask mTimerTask;

    class ResourceLoggerAsyncTask extends AsyncTask {
        @Override
        protected Object doInBackground(Object[] objects) {
            try {
                List<String[]> allStats = new ArrayList<>();
                allStats.add(ALLSTATS_INDEX_DEVICE_CPU, getCpuStats());
                allStats.add(ALLSTATS_INDEX_DEVICE_MEM, getMemStats());
                allStats.add(ALLSTATS_INDEX_PROC, getProcStats());
                mResourceStats.insert(allStats);
            } catch (IOException e) {
                Log.e(Constants.TAG, "Could not execute shell command.", e);
            }
            return null;
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    @Override
    public void onCreate() {
        super.onCreate();
        Log.d(Constants.TAG, "Resource Logger Service instance created!");
        extraPIDKey = ResourcePropUtil.INTENT_EXTRA_PID(this);
        extraProcNameKey = ResourcePropUtil.INTENT_EXTRA_PROC_NAME(this);

        mTimer = new Timer();
        mTimerHandler = new Handler();
        mTimerTask = new TimerTask() {
            @Override
            public void run() {
                mTimerHandler.post(new Runnable() {
                    @Override
                    public void run() {
                        new ResourceLoggerAsyncTask().execute();
                    }
                });
            }
        };
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        Log.d(Constants.TAG, "Start command called for Resource Logger Service.");

        // attempt to get new PID from start command intent
        if (mPid == null) {
            int newPid = intent.getIntExtra(extraPIDKey, EXTRA_PID_DEFAULT_VALUE);
            if (newPid != EXTRA_PID_DEFAULT_VALUE) {
                mPid = newPid;
                mProcName = intent.getStringExtra(extraProcNameKey);
                Log.d(Constants.TAG, "Service received new PID: " + mPid + " for process: " + mProcName);
                startService();
            } else Log.e(Constants.TAG, "Start command received with no PID.");
        } else Log.d(Constants.TAG, "PID already set for this service: " + mPid);

        // restart this service if killed by system
        return START_STICKY;
    }

    @Nullable
    @Override
    public IBinder onBind(Intent intent) { return null; }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "onDestroy() method called ... shutting down Resource Logger Service safely.");
        stopService();
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private void startService() {
        if (!isServiceRunning) {
            if (RUN_IN_FOREGROUND) {
                Log.d(Constants.TAG, "Starting Resource Logger Service in the foreground.");
                notiTitle = ResourcePropUtil.NOTI_TITLE_RESOURCE_LOGGER(this);
                notiText = ResourcePropUtil.NOTI_TEXT_RESOURCE_LOGGER(this);
                noti = ServiceUtil.createNotification(this, notiTitle, notiText, null);
                startForeground(NOTIFICATION_ID, noti);
            } else Log.d(Constants.TAG, "Starting Resource Logger Service in the background.");

            mTimer.schedule(mTimerTask, 0, INTERVAL);
            isServiceRunning = true;
        } else Log.d(Constants.TAG, "Resource Logger Service already running.");
    }

    private void stopService() {
        if (isServiceRunning) {
            Log.d(Constants.TAG, "Writing resource stat results to file.");
            String procID = (mProcName != null && !mProcName.isEmpty()) ? mProcName : mPid.toString();
            String outputFilename = ("ResourceStats_" + procID + ".txt");
            mResourceStats.printToFile(this, outputFilename);
            mResourceStats.clear();

            // release all local variables
            mTimerHandler.removeCallbacks(mTimerTask);
            isServiceRunning = false;
            mTimer.cancel();
            mPid = null;

            // stop this service
            stopSelf();
        } else Log.d(Constants.TAG, "Resource Logger Service already stopped.");
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    public static String[] getCpuStats() throws IOException {
        Process cpuCommand = Runtime.getRuntime().exec("top -n 1");
        InputStreamReader isReader = new InputStreamReader(cpuCommand.getInputStream());
        BufferedReader buffReader = new BufferedReader(isReader);

        String line;
        String[] cpuStats = null;

        while ((line = buffReader.readLine()) != null) {

            // ---------------------------------------------------------------------------------
            // ---------------------------------------------------------------------------------
            //      NOTE!!  This section is customized for the Google Nexus 5
            //      (will come up as blank entries in emulator)
            // ---------------------------------------------------------------------------------
            // ---------------------------------------------------------------------------------

            if (line.contains("User") && line.contains("System") && line.contains("IOW") && line.contains("IRQ")) {
                Log.d(Constants.TAG, "DEVSTAT CPU output: " + line);

                String tempString = line.trim();
                tempString = tempString.replaceAll(",", "");
                tempString = tempString.replaceAll("User", "");
                tempString = tempString.replaceAll("System", "");
                tempString = tempString.replaceAll("IOW", "");
                tempString = tempString.replaceAll("IRQ", "");
                tempString = tempString.replaceAll("%", "");
                tempString = tempString.replaceAll("  ", " ");
                tempString = tempString.trim();

                cpuStats = tempString.split(" ");
            }
        }

        buffReader.close();
        isReader.close();

        if (cpuStats != null && cpuStats.length > 0) {
            // calculate total CPU usage
            Integer cpuTotal = 0;
            for (String cpuSplit : cpuStats) {
                cpuTotal += Integer.parseInt(cpuSplit);
            }

            // write the pertinent CPU stats ...
            String[] cpuOutput = new String[] {
                    cpuTotal.toString(),                // CPU load (whole device)
                    cpuStats[CPUSTAT_INDEX_USER],       // CPU load (user processes)
                    cpuStats[CPUSTAT_INDEX_SYSTEM],     // CPU load (system processes)
                    cpuStats[CPUSTAT_INDEX_IOW],        // CPU load (IOW processes)
                    cpuStats[CPUSTAT_INDEX_IRQ]         // CPU load (IRQ processes)
            };

            return cpuOutput;
        } else return (new String[] { "", "", "", "", "" });
    }

    private static String[] getMemStats() throws IOException {
        Process memCommand = Runtime.getRuntime().exec("cat proc/meminfo");
        InputStreamReader isReader = new InputStreamReader(memCommand.getInputStream());
        BufferedReader buffReader = new BufferedReader(isReader);

        int loopCounter = 0, indexCounter = 0;
        String[] memStats = new String[2];
        String line;

        while ((line = buffReader.readLine()) != null) {
            if (loopCounter == MEMSTAT_INDEX_TOTAL || loopCounter == MEMSTAT_INDEX_FREE) {
                Log.d(Constants.TAG, "DEVSTAT memory output: " + line);
                String[] tokens = line.split("\\s+");
                memStats[indexCounter] = tokens[1]; // index zero = field label, index one = field value
                indexCounter++;
            }
            loopCounter++;
        }

        buffReader.close();
        isReader.close();

        if (memStats != null && memStats.length > 0) {
            String[] memOutput = new String[]{
                    memStats[MEMSTAT_INDEX_TOTAL],      // total memory (whole device)
                    memStats[MEMSTAT_INDEX_FREE]        // free memory (whole device)
            };

            return (memOutput);
        } else return (new String[] { "", "" });
    }

    private static String[] getProcStats() throws IOException {
        Process processCommand = Runtime.getRuntime().exec("cat proc/" + mPid + "/stat");
        InputStreamReader isReader = new InputStreamReader(processCommand.getInputStream());
        BufferedReader buffReader = new BufferedReader(isReader);

        String line = buffReader.readLine();
        buffReader.close();
        isReader.close();

        String[] defaultStats = (new String[] { "", "", "", "", "", "", "", "", "", "" });
        if (line == null) {
            Log.e(Constants.TAG, "NO OUTPUT FROM PROC STATS COMMAND.");
            return defaultStats;
        }

        Log.d(Constants.TAG, "PROCSTAT output: " + line);
        String[] procStats = line.split("\\s+");

        if (procStats != null && procStats.length > 0) {
            String[] procOutput = new String[]{
                    procStats[PROCSTAT_INDEX_PID],
                    procStats[PROCSTAT_INDEX_FLAGS],
                    procStats[PROCSTAT_INDEX_UTIME],
                    procStats[PROCSTAT_INDEX_STIME],
                    procStats[PROCSTAT_INDEX_CUTIME],
                    procStats[PROCSTAT_INDEX_CSTIME],
                    procStats[PROCSTAT_INDEX_PRIORITY],
                    procStats[PROCSTAT_INDEX_NUM_THREADS],
                    procStats[PROCSTAT_INDEX_START_TIME],
                    procStats[PROCSTAT_INDEX_RSS]
            };
            return (procOutput);
        } else return defaultStats;
    }

}