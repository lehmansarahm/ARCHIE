package com.archie.opencv_blobDetector_mod;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.util.Size;
import android.view.SurfaceView;
import android.view.View;

import com.archie.opencv_blobDetector_mod.archie_mods.ArchieBlobConfigProfile;
import com.archie.opencv_blobDetector_mod.env.Logger;
import com.codemonkeylabs.fpslibrary.FrameDataCallback;
import com.codemonkeylabs.fpslibrary.TinyDancer;

import org.opencv.android.BaseLoaderCallback;
import org.opencv.android.CameraBridgeViewBase;
import org.opencv.android.LoaderCallbackInterface;
import org.opencv.android.OpenCVLoader;
import org.opencv.core.CvType;
import org.opencv.core.Mat;
import org.opencv.core.Scalar;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.GtcController;

public class ColorBlobApplication extends Application {

    private static boolean          TESTING = true;
    private static String           TESTING_LABEL = "roses";

    // private static long          TESTING_DELAY = TimeUnit.SECONDS.toMillis(10);
    private static long             TESTING_DELAY = TimeUnit.MINUTES.toMillis(5);

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(176, 144);        // xx-small
    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(352, 288);        // x-small
    private static final Size       DESIRED_PREVIEW_SIZE = new Size(640, 480);        // small
    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(1280, 960);       // medium
    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(2048, 1536);       // large    // ** FINE TUNE HERE **
    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(3200, 2400);      // x-large
    // private static final Size    DESIRED_PREVIEW_SIZE = new Size(4032, 3024);      // xx-large

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static final String     CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT = "yyyyMMdd_hhmmss";
    private static final Logger     LOGGER = new Logger();
    private static final Object     LOCK = new Object();

    private static Context          initContext;
    private static List<String>     frameStats;
    private static List<String>     classificationStats;

    private static long             executionStartTime = 0;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onCreate() {
        frameStats = new ArrayList<>();
        frameStats.add("Time (sec),Previous Frame (ns),Current Frame (ns),Time Elapsed (ms),Dropped Frame Count");

        classificationStats = new ArrayList<>();
        classificationStats.add("Time (sec),Preproc Start Time (ns),Preproc End Time (ns),Preproc Time Elapsed (ms),"
                + "Class Start Time (ns),Class End Time (ns),Class Time Elapsed (ms),Result,Confidence");

        initContext = this.getApplicationContext();
        TinyDancer.create()
                .addFrameDataCallback(new FrameDataCallback() {
                    @Override
                    public void doFrame(long previousFrameNS, long currentFrameNS, int droppedFrames) {
                        // Calculate time elapsed between frames (in nanoseconds)
                        long timeElapsedNS = currentFrameNS - previousFrameNS;
                        double timeElapsedMS = (timeElapsedNS / 1000000.0d);

                        // calculate time spent in overall program execution (seconds)
                        long executionTimeElapsed = calculateExecutionTime();

                        // output the frame stats
                        String newFrameStats = (executionTimeElapsed + ","
                                + previousFrameNS + "," + currentFrameNS + ","
                                + timeElapsedMS + "," + droppedFrames);
                        // LOGGER.i("Logging frame stats: " + newFrameStats);
                        frameStats.add(newFrameStats);
                    }
                }).show(initContext);

        LOGGER.i("ClassifierApplication with TinyDancer created!");
        super.onCreate();
    }

    public void onPause(Activity currentActivity) {
        LOGGER.i("Pausing profiles.");
        getGtcController().pauseProfiles();
        pauseCameraView();

        if (!currentActivity.isFinishing()) {
            LOGGER.d("Requesting finish");
            currentActivity.finish();
        }
    }

    public void onResume() {
        LOGGER.i("Resuming profiles.");
        getGtcController().resumeProfiles();
        resumeLoaderCallback();
    }

    public boolean onDestroy() {
        try {
            getGtcController().stopServices();
            TinyDancer.hide(initContext);
            pauseCameraView();

            Date currentTime = Calendar.getInstance().getTime();
            DateFormat df = new SimpleDateFormat(CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
            File outputFileDir = initContext.getApplicationContext().getExternalFilesDir(null);

            String frameFileName = (df.format(currentTime) + "_frames.csv");
            File frameFile = new File(outputFileDir, frameFileName);
            writeResultsToFile(frameFile, frameStats);

            String classFileName = (df.format(currentTime) + "_classification.csv");
            File classFile = new File(outputFileDir, classFileName);
            writeResultsToFile(classFile, classificationStats);

            String settingsFileName = (df.format(currentTime) + "_execSettings.csv");
            File settingsFile = new File(outputFileDir, settingsFileName);
            writeExecutionSettingsToFile(settingsFile);

            LOGGER.i("ClassifierApplication with TinyDancer destroyed.");
            return true;
        } catch (Exception ex) {
            LOGGER.e("Exception encountered while attempting to shut down ClassifierApplication."
                    + "\n" + ex.getMessage());
            return false;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static GtcController gtcController;

    public void setGtcController(GtcController gtcController) {
        synchronized (LOCK) {
            ColorBlobApplication.gtcController = gtcController;
        }
    }

    public GtcController getGtcController() {
        synchronized (LOCK) {
            return ColorBlobApplication.gtcController;
        }
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

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private long calculateExecutionTime() {
        long currentSystemTime = System.currentTimeMillis();
        if (executionStartTime == 0) executionStartTime = currentSystemTime;
        return (TimeUnit.MILLISECONDS.toSeconds(currentSystemTime - executionStartTime));
    }

    private void writeExecutionSettingsToFile(File outputFile) {
        List<String> settings = new ArrayList<>();
        settings.add("Execution Start Time (ms)," + executionStartTime);
        settings.add("Testing?," + TESTING);
        if (TESTING) {
            settings.add("Testing Delay (ms)," + TESTING_DELAY);
            settings.add("Testing Label," + TESTING_LABEL);
        }
        settings.add("Desired Preview Height," + DESIRED_PREVIEW_SIZE.getHeight());
        settings.add("Desired Preview Width," + DESIRED_PREVIEW_SIZE.getWidth());
        writeResultsToFile(outputFile, settings);
    }

    private void writeResultsToFile(File outputFile, List<String> fileContent) {
        try {
            LOGGER.i("Writing resource stats to file: " + outputFile.getPath());
            if (!outputFile.exists()) outputFile.createNewFile();

            FileOutputStream stream = new FileOutputStream(outputFile);
            OutputStreamWriter writer = new OutputStreamWriter(stream);
            for (String line : fileContent) { writer.append(line + "\n"); }

            writer.close();
            stream.flush();
            stream.close();
        } catch(FileNotFoundException ex) {
            LOGGER.e("Unable to access output file.  Cannot write results to file.", ex);
        } catch (IOException ex) {
            LOGGER.e("Unable to write to output file, or close output stream.", ex);
        }
    }

}