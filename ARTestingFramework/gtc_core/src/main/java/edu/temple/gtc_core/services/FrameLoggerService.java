package edu.temple.gtc_core.services;

import android.app.Notification;
import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import android.os.SystemClock;
import android.support.annotation.Nullable;
import android.util.Log;
import android.view.Choreographer;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.buffers.StatsMap;
import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.ResourcePropUtil;
import edu.temple.gtc_core.utils.ServiceUtil;

public class FrameLoggerService extends Service {

    private static final boolean RUN_IN_FOREGROUND = true;
    private static final int NOTIFICATION_ID = 643;

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

    private static final String FRAME_HEADER = "Timestamp,Frame Count,Total Frame Time (millis),Avg Frame Time (millis)";
    private static final String FRAME_FILENAME = "FrameStats.txt";
    private static StatsMap mFrameStats = new StatsMap(StatsMap.Type.Multi, FRAME_HEADER);

    private static final long BUFFER_TIME_LIMIT = TimeUnit.SECONDS.toMillis(10);
    private static List<long[]> mFrameBuffer = new ArrayList<>();

    private static long lastSystemTime = 0, currentBufferTime = 0;
    private static int frameCounter = 0;

    private static Choreographer choreographer = Choreographer.getInstance();
    private static Choreographer.FrameCallback frameCallback = new Choreographer.FrameCallback() {
        @Override
        public void doFrame(long frameTimeNanos) {
            // get the time taken from last frame to this one
            long currentSystemTime = SystemClock.elapsedRealtime();
            long currentFrameTime = (lastSystemTime == 0) ? 0 : (currentSystemTime - lastSystemTime);

            // put the current frame number / time in the frame buffer
            mFrameBuffer.add(new long[] { frameCounter, currentFrameTime });
            currentBufferTime += currentFrameTime;

            if (currentBufferTime >= BUFFER_TIME_LIMIT) {
                Log.i(Constants.TAG, "Reached buffer time limit with current buffer time: "
                        + currentBufferTime);

                // we've filled up our buffer ... retrieve the beginning and ending entries
                long[] firstEntry = mFrameBuffer.get(0);
                long[] lastEntry = mFrameBuffer.get(mFrameBuffer.size() - 1);
                Log.i(Constants.TAG, "Consolidating buffer with first entry: { "
                    + firstEntry[0] + ", " + firstEntry[1] + " } \t\t ... and last entry: { "
                    + lastEntry[0] + ", " + lastEntry[1] + " }");

                // find the total and average frame times represented by this buffer
                double totalFrameTime = 0.0;
                for (long[] entry : mFrameBuffer) totalFrameTime += entry[1];
                double averageFrameTime = (totalFrameTime / mFrameBuffer.size());

                // dump the details to the stats map
                String[] bufferStats = new String[] {
                        String.valueOf(mFrameBuffer.size()),    // number of frames in buffer
                        String.valueOf(totalFrameTime),
                        String.valueOf(averageFrameTime)
                };
                mFrameStats.insert(bufferStats);

                // reset buffer, associated properties
                mFrameBuffer.clear();
                currentBufferTime = 0;
            }

            // update our variables for the next frame
            lastSystemTime = currentSystemTime;
            frameCounter++;

            // callback automatically removed ... have to re-associate...
            choreographer.postFrameCallback(this);
        }
    };

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    @Override
    public void onCreate() {
        super.onCreate();
        Log.d(Constants.TAG, "Frame Logger Service instance created!");
        extraPIDKey = ResourcePropUtil.INTENT_EXTRA_PID(this);
        extraProcNameKey = ResourcePropUtil.INTENT_EXTRA_PROC_NAME(this);
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        Log.d(Constants.TAG, "Start command called for Frame Logger Service.");

        // attempt to get new PID from start command intent
        if (mPid == null) {
            int newPid = intent.getIntExtra(extraPIDKey, EXTRA_PID_DEFAULT_VALUE);
            if (newPid != EXTRA_PID_DEFAULT_VALUE) {
                mPid = newPid;
                mProcName = intent.getStringExtra(extraProcNameKey);
                Log.d(Constants.TAG, "Frame Logger Service received new PID: "
                        + mPid + " for process: " + mProcName);
                startService();
            } else Log.e(Constants.TAG, "Frame Logger Service received start command with no PID.");
        } else Log.d(Constants.TAG, "PID already set for this Frame Logger Service: " + mPid);

        // restart this service if killed by system
        return START_STICKY;
    }

    @Nullable
    @Override
    public IBinder onBind(Intent intent) { return null; }

    @Override
    public void onDestroy() {
        Log.d(Constants.TAG, "onDestroy() method called ... shutting down Frame Logger Service safely.");
        stopService();
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private void startService() {
        if (!isServiceRunning) {
            if (RUN_IN_FOREGROUND) {
                Log.d(Constants.TAG, "Starting Frame Logger Service in the foreground.");
                notiTitle = ResourcePropUtil.NOTI_TITLE_FRAME_LOGGER(this);
                notiText = ResourcePropUtil.NOTI_TEXT_FRAME_LOGGER(this);
                noti = ServiceUtil.createNotification(this, notiTitle, notiText, null);
                startForeground(NOTIFICATION_ID, noti);
            } else Log.d(Constants.TAG, "Starting Frame Logger Service in the background.");

            choreographer.postFrameCallback(frameCallback);
            isServiceRunning = true;
        } else Log.d(Constants.TAG, "Frame Logger Service already running.");
    }

    private void stopService() {
        if (isServiceRunning) {
            Log.d(Constants.TAG, "Writing frame timing results to file.");
            mFrameStats.printToFile(this, FRAME_FILENAME);
            mFrameStats.clear();

            // release all local variables
            choreographer.removeFrameCallback(frameCallback);
            isServiceRunning = false;
            mPid = null;

            // stop this service
            stopSelf();
        } else Log.d(Constants.TAG, "Frame Logger Service already stopped.");
    }

}