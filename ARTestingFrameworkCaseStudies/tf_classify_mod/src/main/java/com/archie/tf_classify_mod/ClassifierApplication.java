package com.archie.tf_classify_mod;

import android.app.Activity;
import android.os.Handler;
import android.os.HandlerThread;
import android.util.Size;

import com.archie.case_study_core.BaseGtcApplication;

public class ClassifierApplication extends BaseGtcApplication {

    private static HandlerThread handlerThread;
    private static Handler handler;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public void onStart() {
        super.onStart();
    }

    public void onPause(Activity currentActivity) {
        super.onPause(currentActivity);
        handlerThread.quitSafely();

        try {
            handlerThread.join();
            handlerThread = null;
            handler = null;
        } catch (final InterruptedException e) {
            LOGGER.e(e, "Exception!");
        }
    }

    public void onResume() {
        super.onResume();

        handlerThread = new HandlerThread("inference");
        handlerThread.start();
        handler = new Handler(handlerThread.getLooper());
    }

    public boolean onDestroy() {
        return super.onDestroy();
    }

    public static void runInBackground(final Runnable r) {
        LOGGER.i("Attempting to run task in background.");
        synchronized (LOCK) {
            if (handler != null) {
                LOGGER.i("Acquired lock on background thread handler!  Running task.");
                handler.post(r);
            }
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Classifier classifier;

    public void setClassifier(Classifier classifier) {
        synchronized (LOCK) {
            ClassifierApplication.classifier = classifier;
        }
    }

    public Classifier getClassifier() {
        synchronized (LOCK) {
            return ClassifierApplication.classifier;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static byte[] lastPreviewFrame;

    public void setLastPreviewFrame(byte[] frame) {
        synchronized (LOCK) {
            ClassifierApplication.lastPreviewFrame = frame;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean computing = false;

    public void setComputing(boolean computing) {
        synchronized (LOCK) {
            ClassifierApplication.computing = computing;
        }
    }

    public boolean isComputing() {
        synchronized (LOCK) {
            return ClassifierApplication.computing;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static Size previewSize;

    public void setPreviewSize(Size size) {
        synchronized (LOCK) {
            ClassifierApplication.previewSize = size;
        }
    }

    public int getPreviewHeight() {
        synchronized (LOCK) {
            return ClassifierApplication.previewSize.getHeight();
        }
    }

    public int getPreviewWidth() {
        synchronized (LOCK) {
            return ClassifierApplication.previewSize.getWidth();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int rotation;

    public void setRotation(int rotation) {
        synchronized (LOCK) {
            ClassifierApplication.rotation = rotation;
        }
    }

    public int getRotation() {
        synchronized (LOCK) {
            return ClassifierApplication.rotation;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int cameraOrientation;

    public void setCameraOrientation(int orientation) {
        synchronized (LOCK) {
            ClassifierApplication.cameraOrientation = orientation;
        }
    }

}