package com.archie.opencv_blobDetector_mod.archie_mods;

import android.app.Activity;
import android.os.SystemClock;
import android.view.MotionEvent;
import android.view.View;

import com.archie.opencv_blobDetector_mod.ColorBlobApplication;
import com.archie.opencv_blobDetector_mod.ColorBlobDetector;
import com.archie.opencv_blobDetector_mod.R;
import com.archie.opencv_blobDetector_mod.env.Logger;

import org.opencv.core.Core;
import org.opencv.core.CvType;
import org.opencv.core.Mat;
import org.opencv.core.MatOfPoint;
import org.opencv.core.Rect;
import org.opencv.core.Scalar;
import org.opencv.core.Size;
import org.opencv.imgproc.Imgproc;

import java.util.List;
import java.util.Map;

import edu.temple.gtc_core.classify.IClassifier;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_TOP_RESULT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;

public class ArchieBlobClassifier implements IClassifier {

    public static final String     PREVIEW_FORMAT_TOUCH = "touch";
    public static final String     PREVIEW_FORMAT_FRAME = "cameraFrame";

    private static final Logger     LOGGER = new Logger();

    private Activity                initActivity;

    private Scalar                  mBlobColorRgba;
    private Scalar                  mBlobColorHsv;
    private ColorBlobDetector       mDetector;
    private Mat                     mSpectrum;

    private Size                    SPECTRUM_SIZE;
    private Scalar                  CONTOUR_COLOR;

    @Override
    public void onSensorsReady(Activity activity) {
        LOGGER.e("GTC Controller called 'onSensorsReady' for classifier: "
                + this.getClass().getSimpleName());
        initActivity = activity;

        mDetector = new ColorBlobDetector();
        mSpectrum = new Mat();
        mBlobColorRgba = new Scalar(255);
        mBlobColorHsv = new Scalar(255);

        SPECTRUM_SIZE = new Size(200, 64);
        CONTOUR_COLOR = new Scalar(255,0,0,255);
    }

    @Override
    public void preprocess(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'preprocess' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREVIEW_FORMAT)) {
            LOGGER.e("CANNOT PRE-PROCESS DATA WITHOUT KNOWING ITS FORMAT.");
            return;
        }

        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        String previewFormat = map.get(BUNDLE_KEY_PREVIEW_FORMAT).toString();
        if (previewFormat.equals(PREVIEW_FORMAT_TOUCH)) {
            // we've identified a touch event ... retrieve the relevant data
            handleTouchEvent(app, map);
        }

        // ------------------------------------------------------------------------------
        // ------------------------------------------------------------------------------

        // populate a placeholder for 'pre-processed output'
        map.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, "colorSelection");
        app.getGtcController().onClassifierPreprocessComplete(map);
    }

    @Override
    public void classify(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'classify' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREPROCESSED_OUTPUT)) {
            LOGGER.e("CANNOT CLASSIFY OUTPUT FROM PRE-PROCESSING IF THERE IS NONE.");
            return;
        }

        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        Mat mRgba = app.getRgba();

        mDetector.process(mRgba);
        List<MatOfPoint> contours = mDetector.getContours();
        LOGGER.e("Contours count: " + contours.size());
        Imgproc.drawContours(mRgba, contours, -1, CONTOUR_COLOR);

        Mat colorLabel = mRgba.submat(4, 68, 4, 68);
        colorLabel.setTo(mBlobColorRgba);

        Mat spectrumLabel = mRgba.submat(4, 4 + mSpectrum.rows(),
                70, 70 + mSpectrum.cols());
        mSpectrum.copyTo(spectrumLabel);

        app.setRgba(mRgba);

        // ------------------------------------------------------------------------------
        // ------------------------------------------------------------------------------

        // populate a placeholder for 'pre-processed output'
        map.put(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT, "boundarySelection");
        app.getGtcController().onClassifierClassificationComplete(map);
    }

    @Override
    public void evaluate(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'evaluate' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        // ------------------------------------------------------------------------------
        // ------------------------------------------------------------------------------

        map.put(BUNDLE_KEY_RESPONSE_EVENT, "finalBlob");
        ColorBlobApplication app = (ColorBlobApplication) initActivity.getApplication();
        app.getGtcController().onClassifierEvaluationComplete(map);
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private void handleTouchEvent(ColorBlobApplication app, Map<String, Object> map) {
        MotionEvent touchEvent = (MotionEvent) map.get(BUNDLE_KEY_PREVIEW_DATA);
        Mat mRgba = app.getRgba();

        int cols = mRgba.cols();
        int rows = mRgba.rows();

        int xOffset = app.getCameraXOffset(cols);
        int yOffset = app.getCameraYOffset(rows);

        int x = (int) touchEvent.getX() - xOffset;
        int y = (int) touchEvent.getY() - yOffset;

        LOGGER.i("Touch image coordinates: (" + x + ", " + y + ")");

        if ((x < 0) || (y < 0) || (x > cols) || (y > rows)) {
            LOGGER.e("INVALID TOUCH EVENT FOR COORDINATES: (" + x + ", " + y + ")");
            return;
        }

        Rect touchedRect = new Rect();

        touchedRect.x = (x > 4) ? x - 4 : 0;
        touchedRect.y = (y > 4) ? y - 4 : 0;

        touchedRect.width = (x + 4 < cols) ? x + 4 - touchedRect.x : cols - touchedRect.x;
        touchedRect.height = (y + 4 < rows) ? y + 4 - touchedRect.y : rows - touchedRect.y;

        Mat touchedRegionRgba = mRgba.submat(touchedRect);

        Mat touchedRegionHsv = new Mat();
        Imgproc.cvtColor(touchedRegionRgba, touchedRegionHsv, Imgproc.COLOR_RGB2HSV_FULL);

        // Calculate average color of touched region
        mBlobColorHsv = Core.sumElems(touchedRegionHsv);
        int pointCount = touchedRect.width * touchedRect.height;
        for (int i = 0; i < mBlobColorHsv.val.length; i++)
            mBlobColorHsv.val[i] /= pointCount;

        mBlobColorRgba = convertScalarHsv2Rgba(mBlobColorHsv);

        LOGGER.i("Touched rgba color: (" + mBlobColorRgba.val[0] + ", " + mBlobColorRgba.val[1] +
                ", " + mBlobColorRgba.val[2] + ", " + mBlobColorRgba.val[3] + ")");

        mDetector.setHsvColor(mBlobColorHsv);

        Imgproc.resize(mDetector.getSpectrum(), mSpectrum, SPECTRUM_SIZE, 0, 0, Imgproc.INTER_LINEAR_EXACT);

        app.setIsColorSelected(true);

        touchedRegionRgba.release();
        touchedRegionHsv.release();
    }

    private Scalar convertScalarHsv2Rgba(Scalar hsvColor) {
        Mat pointMatRgba = new Mat();
        Mat pointMatHsv = new Mat(1, 1, CvType.CV_8UC3, hsvColor);
        Imgproc.cvtColor(pointMatHsv, pointMatRgba, Imgproc.COLOR_HSV2RGB_FULL, 4);

        return new Scalar(pointMatRgba.get(0, 0));
    }

}