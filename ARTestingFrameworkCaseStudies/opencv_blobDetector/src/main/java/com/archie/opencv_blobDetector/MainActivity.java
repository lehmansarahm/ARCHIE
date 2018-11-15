package com.archie.opencv_blobDetector;

import java.util.List;

import org.opencv.android.BaseLoaderCallback;
import org.opencv.android.CameraBridgeViewBase.CvCameraViewFrame;
import org.opencv.android.LoaderCallbackInterface;
import org.opencv.android.OpenCVLoader;
import org.opencv.core.Core;
import org.opencv.core.CvType;
import org.opencv.core.Mat;
import org.opencv.core.MatOfPoint;
import org.opencv.core.Rect;
import org.opencv.core.Scalar;
import org.opencv.core.Size;
import org.opencv.android.CameraBridgeViewBase;
import org.opencv.android.CameraBridgeViewBase.CvCameraViewListener2;
import org.opencv.imgproc.Imgproc;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.support.v4.app.ActivityCompat;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.view.View.OnTouchListener;
import android.view.SurfaceView;

import com.archie.case_study_core.BaseApplication;
import com.archie.opencv_blobDetector.env.Logger;

public class MainActivity extends Activity implements OnTouchListener, CvCameraViewListener2 {

    private static final String EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    private static final String EXTRA_TESTING_LABEL = "testingLabel";
    private static final String EXTRA_TRIAL_TIME = "trialTime";

    private static final Logger LOGGER = new Logger();

    private static final int PERMISSIONS_REQUEST        = 112;
    private static final String[] REQUIRED_PERMISSIONS  = new String[] {
            Manifest.permission.CAMERA
    };

    private boolean              mHasPermissions = false;
    private boolean              mPreviewReady = false;
    private boolean              mLoaderCallbackReady = false;
    private boolean              mIsColorSelected = false;

    private Mat                  mRgba;
    private Scalar               mBlobColorRgba;
    private Scalar               mBlobColorHsv;
    private ColorBlobDetector    mDetector;
    private Mat                  mSpectrum;
    private Size                 SPECTRUM_SIZE;
    private Scalar               CONTOUR_COLOR;

    private CameraBridgeViewBase mOpenCvCameraView;

    private BaseLoaderCallback  mLoaderCallback = new BaseLoaderCallback(this) {
        @Override
        public void onManagerConnected(int status) {
            switch (status) {
                case LoaderCallbackInterface.SUCCESS:
                {
                    LOGGER.i("OpenCV loaded successfully");
                    mOpenCvCameraView.enableView();
                    mOpenCvCameraView.setOnTouchListener(MainActivity.this);
                } break;
                default:
                {
                    super.onManagerConnected(status);
                } break;
            }
        }
    };

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    public MainActivity() {
        LOGGER.i("Instantiated new " + this.getClass());
    }

    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        LOGGER.i("called onCreate");
        super.onCreate(savedInstanceState);
        ((BaseApplication)getApplication()).initializeTestInstance(this, getIntent());

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        setContentView(R.layout.color_blob_detection_surface_view);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        mHasPermissions = true;
        for (int i = 0; i < REQUIRED_PERMISSIONS.length; i++)
            mHasPermissions &= (ActivityCompat.checkSelfPermission(this,
                    REQUIRED_PERMISSIONS[i]) == PackageManager.PERMISSION_GRANTED);

        if (mHasPermissions) {
            LOGGER.d("All permissions have been provided! ");
            initializePreview();
        } else {
            LOGGER.d("Some permissions are missing...");
            ActivityCompat.requestPermissions(this, REQUIRED_PERMISSIONS, PERMISSIONS_REQUEST);
        }
    }

    @Override
    public void onPause()
    {
        super.onPause();
        if (mOpenCvCameraView != null)
            mOpenCvCameraView.disableView();
    }

    @Override
    public void onResume()
    {
        super.onResume();
        if (!OpenCVLoader.initDebug()) {
            LOGGER.d("Internal OpenCV library not found. Using OpenCV Manager for initialization");
            OpenCVLoader.initAsync(OpenCVLoader.OPENCV_VERSION_3_0_0, this, mLoaderCallback);
        } else {
            LOGGER.d("OpenCV library found inside package. Using it!");
            mLoaderCallbackReady = true;
            if (mPreviewReady)
                mLoaderCallback.onManagerConnected(LoaderCallbackInterface.SUCCESS);
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        ((ColorBlobApplication)getApplication()).onDestroy();
        if (mOpenCvCameraView != null)
            mOpenCvCameraView.disableView();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case PERMISSIONS_REQUEST: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted) {
                    mHasPermissions = true;
                    initializePreview();
                }
                else ActivityCompat.requestPermissions(this, REQUIRED_PERMISSIONS, PERMISSIONS_REQUEST);
            }
        }
    }

    public void onCameraViewStarted(int width, int height) {
        mRgba = new Mat(height, width, CvType.CV_8UC4);
        mDetector = new ColorBlobDetector();
        mSpectrum = new Mat();
        mBlobColorRgba = new Scalar(255);
        mBlobColorHsv = new Scalar(255);
        SPECTRUM_SIZE = new Size(200, 64);
        CONTOUR_COLOR = new Scalar(255,0,0,255);

        // if actively testing, send preliminary touch event
        ColorBlobApplication app = (ColorBlobApplication) getApplication();
        LOGGER.i("Checking to see if we're running a testing scenario: " + app.isTesting());
        if (app.isTesting()) {
            // set preliminary properties
            long downTime = SystemClock.uptimeMillis();
            long eventTime = SystemClock.uptimeMillis() + 100;
            float x = 461.0f, y = 543.0f;

            // List of meta states found here:
            // developer.android.com/reference/android/view/KeyEvent.html#getMetaState()
            int metaState = 0;

            // Obtain MotionEvent object
            MotionEvent motionEvent = MotionEvent.obtain(
                    downTime,
                    eventTime,
                    MotionEvent.ACTION_UP,
                    x,
                    y,
                    metaState
            );

            // Dispatch touch event to view
            View blobSurface = findViewById(R.id.color_blob_detection_activity_surface_view);
            onTouch(blobSurface, motionEvent);
        }
    }

    public void onCameraViewStopped() {
        mRgba.release();
    }

    @Override
    public boolean onTouch(View v, MotionEvent event) {
        ColorBlobApplication app = (ColorBlobApplication) getApplication();
        app.onPreprocessStart();

        int cols = mRgba.cols();
        int rows = mRgba.rows();

        int xOffset = (mOpenCvCameraView.getWidth() - cols) / 2;
        int yOffset = (mOpenCvCameraView.getHeight() - rows) / 2;

        int x = (int)event.getX() - xOffset;
        int y = (int)event.getY() - yOffset;

        LOGGER.i("Touch image coordinates: (" + x + ", " + y + ")");

        if ((x < 0) || (y < 0) || (x > cols) || (y > rows)) return false;

        Rect touchedRect = new Rect();

        touchedRect.x = (x>4) ? x-4 : 0;
        touchedRect.y = (y>4) ? y-4 : 0;

        touchedRect.width = (x+4 < cols) ? x + 4 - touchedRect.x : cols - touchedRect.x;
        touchedRect.height = (y+4 < rows) ? y + 4 - touchedRect.y : rows - touchedRect.y;

        Mat touchedRegionRgba = mRgba.submat(touchedRect);

        Mat touchedRegionHsv = new Mat();
        Imgproc.cvtColor(touchedRegionRgba, touchedRegionHsv, Imgproc.COLOR_RGB2HSV_FULL);

        // Calculate average color of touched region
        mBlobColorHsv = Core.sumElems(touchedRegionHsv);
        int pointCount = touchedRect.width*touchedRect.height;
        for (int i = 0; i < mBlobColorHsv.val.length; i++)
            mBlobColorHsv.val[i] /= pointCount;

        mBlobColorRgba = converScalarHsv2Rgba(mBlobColorHsv);

        LOGGER.i("Touched rgba color: (" + mBlobColorRgba.val[0] + ", " + mBlobColorRgba.val[1] +
                ", " + mBlobColorRgba.val[2] + ", " + mBlobColorRgba.val[3] + ")");

        mDetector.setHsvColor(mBlobColorHsv);

        Imgproc.resize(mDetector.getSpectrum(), mSpectrum, SPECTRUM_SIZE, 0, 0, Imgproc.INTER_LINEAR_EXACT);

        mIsColorSelected = true;

        touchedRegionRgba.release();
        touchedRegionHsv.release();

        app.onPreprocessComplete();
        return false; // don't need subsequent touch events
    }

    public Mat onCameraFrame(CvCameraViewFrame inputFrame) {
        ColorBlobApplication app = (ColorBlobApplication) getApplication();
        mRgba = inputFrame.rgba();

        if (mIsColorSelected) {
            app.onClassificationStart();

            mDetector.process(mRgba);
            List<MatOfPoint> contours = mDetector.getContours();
            LOGGER.e("Contours count: " + contours.size());
            Imgproc.drawContours(mRgba, contours, -1, CONTOUR_COLOR);

            Mat colorLabel = mRgba.submat(4, 68, 4, 68);
            colorLabel.setTo(mBlobColorRgba);

            Mat spectrumLabel = mRgba.submat(4, 4 + mSpectrum.rows(), 70, 70 + mSpectrum.cols());
            mSpectrum.copyTo(spectrumLabel);

            app.onClassificationComplete("blobEdges", 100);
        }

        return mRgba;
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void initializePreview() {
        mOpenCvCameraView = findViewById(R.id.color_blob_detection_activity_surface_view);
        mOpenCvCameraView.setVisibility(SurfaceView.VISIBLE);
        mOpenCvCameraView.setCvCameraViewListener(this);

        mPreviewReady = true;
        if (mLoaderCallbackReady)
            mLoaderCallback.onManagerConnected(LoaderCallbackInterface.SUCCESS);
    }

    private Scalar converScalarHsv2Rgba(Scalar hsvColor) {
        Mat pointMatRgba = new Mat();
        Mat pointMatHsv = new Mat(1, 1, CvType.CV_8UC3, hsvColor);
        Imgproc.cvtColor(pointMatHsv, pointMatRgba, Imgproc.COLOR_HSV2RGB_FULL, 4);

        return new Scalar(pointMatRgba.get(0, 0));
    }

}