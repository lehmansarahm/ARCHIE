package com.archie.opencv_blobDetector_mod;

import android.app.Activity;
import android.view.SurfaceView;
import android.view.View;

import com.archie.case_study_core.BaseGtcApplication;

import org.opencv.android.BaseLoaderCallback;
import org.opencv.android.CameraBridgeViewBase;
import org.opencv.android.LoaderCallbackInterface;
import org.opencv.android.OpenCVLoader;
import org.opencv.core.CvType;
import org.opencv.core.Mat;
import org.opencv.core.Scalar;

import java.util.concurrent.TimeUnit;

public class ColorBlobApplication extends BaseGtcApplication {
    
    public void onPause(Activity currentActivity) {
        super.onPause(currentActivity);
        pauseCameraView();
    }

    public void onResume() {
        super.onResume();
        resumeLoaderCallback();
    }

    public boolean onDestroy() {
        pauseCameraView();
        return super.onDestroy();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private boolean                 mPreviewReady = false;
    private boolean                 mLoaderCallbackReady = false;

    private CameraBridgeViewBase    mOpenCvCameraView;
    private BaseLoaderCallback      mLoaderCallback;

    public void initializeCameraView(Activity initActivity, CameraBridgeViewBase.CvCameraViewListener2 listener) {
        mOpenCvCameraView = initActivity.findViewById(R.id.color_blob_detection_activity_surface_view);
        mOpenCvCameraView.setVisibility(SurfaceView.VISIBLE);
        mOpenCvCameraView.setCvCameraViewListener(listener);
    }

    public void initializeLoaderCallback(Activity initActivity, final View.OnTouchListener listener) {
        mLoaderCallback = new BaseLoaderCallback(initActivity) {
            @Override
            public void onManagerConnected(int status) {
                switch (status) {
                    case LoaderCallbackInterface.SUCCESS:
                    {
                        LOGGER.i("OpenCV loaded successfully");
                        mOpenCvCameraView.enableView();
                        mOpenCvCameraView.setOnTouchListener(listener);
                    } break;
                    default:
                    {
                        super.onManagerConnected(status);
                    } break;
                }
            }
        };

        mPreviewReady = true;
        if (mLoaderCallbackReady)
            mLoaderCallback.onManagerConnected(LoaderCallbackInterface.SUCCESS);
    }

    public int getCameraXOffset(int cols) {
        int xOffset = (mOpenCvCameraView.getWidth() - cols) / 2;
        return xOffset;
    }

    public int getCameraYOffset(int rows) {
        int yOffset = (mOpenCvCameraView.getHeight() - rows) / 2;
        return yOffset;
    }

    private void pauseCameraView() {
        if (mOpenCvCameraView != null)
            mOpenCvCameraView.disableView();
    }

    private void resumeLoaderCallback() {
        if (!OpenCVLoader.initDebug()) {
            LOGGER.d("Internal OpenCV library not found. Using OpenCV Manager for initialization");
            OpenCVLoader.initAsync(OpenCVLoader.OPENCV_VERSION_3_0_0,
                    this, mLoaderCallback);
        } else {
            LOGGER.d("OpenCV library found inside package. Using it!");
            mLoaderCallbackReady = true;
            if (mPreviewReady)
                mLoaderCallback.onManagerConnected(LoaderCallbackInterface.SUCCESS);
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static boolean mIsColorSelected = false;

    public void setIsColorSelected(boolean testing) {
        synchronized (LOCK) {
            ColorBlobApplication.mIsColorSelected = testing;
        }
    }

    public boolean isColorSelected() {
        synchronized (LOCK) {
            return ColorBlobApplication.mIsColorSelected;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private Mat                     mRgba;
    private Scalar                  mBlobColorRgba;
    private Scalar                  mBlobColorHsv;
    private ColorBlobDetector       mDetector;
    private Mat                     mSpectrum;

    public void initializeCameraViewParams(int width, int height) {
        synchronized (LOCK) {
            mRgba = new Mat(height, width, CvType.CV_8UC4);
            mDetector = new ColorBlobDetector();
            mSpectrum = new Mat();
            mBlobColorRgba = new Scalar(255);
            mBlobColorHsv = new Scalar(255);
        }
    }

    public void setRgba(Mat rgba) {
        synchronized (LOCK) {
            mRgba = rgba;
        }
    }

    public Mat getRgba() {
        synchronized (LOCK) {
            return mRgba;
        }
    }

    public void releaseRgba() {
        synchronized (LOCK) {
            mRgba.release();
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static int rotation;

    public void setRotation(int rotation) {
        synchronized (LOCK) {
            ColorBlobApplication.rotation = rotation;
        }
    }

    public int getRotation() {
        synchronized (LOCK) {
            return ColorBlobApplication.rotation;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public void setTesting(boolean testing) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING = testing;
        }
    }

    public boolean isTesting() {
        synchronized (LOCK) {
            return ColorBlobApplication.TESTING;
        }
    }

    public void setTestingLabel(String testingLabel) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING_LABEL = testingLabel;
        }
    }

    public void setTestTime(int testTime) {
        synchronized (LOCK) {
            ColorBlobApplication.TESTING_DELAY = TimeUnit.MINUTES.toMillis(testTime);
        }
    }

    public long getTestingDelay() {
        synchronized (LOCK) {
            return ColorBlobApplication.TESTING_DELAY;
        }
    }

}