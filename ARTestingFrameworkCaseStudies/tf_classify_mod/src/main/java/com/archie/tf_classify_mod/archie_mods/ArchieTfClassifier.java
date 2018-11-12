package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.media.Image;
import android.os.SystemClock;
import android.os.Trace;
import android.view.Surface;

import com.archie.tf_classify_mod.Classifier;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.TensorFlowImageClassifier;
import com.archie.tf_classify_mod.env.ImageUtils;
import com.archie.tf_classify_mod.env.Logger;

import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.classify.IClassifier;

import static com.archie.tf_classify_mod.archie_mods.Constants.IMAGE_MEAN;
import static com.archie.tf_classify_mod.archie_mods.Constants.IMAGE_STD;
import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_NAME;
import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_SIZE;
import static com.archie.tf_classify_mod.archie_mods.Constants.LABEL_FILE;
import static com.archie.tf_classify_mod.archie_mods.Constants.MAINTAIN_ASPECT;
import static com.archie.tf_classify_mod.archie_mods.Constants.MODEL_FILE;
import static com.archie.tf_classify_mod.archie_mods.Constants.OUTPUT_NAME;
import static com.archie.tf_classify_mod.archie_mods.Constants.SAVE_PREVIEW_BITMAP;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_TOP_RESULT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_TIME;

public class ArchieTfClassifier implements IClassifier {

    private static final Logger LOGGER = new Logger();

    private Activity initActivity;

    protected int previewWidth = 0;
    protected int previewHeight = 0;
    private Integer sensorOrientation;

    // ----------------------------------------------------------------------------------------
    //          classifier pre-processing properties
    // ----------------------------------------------------------------------------------------
    private Matrix frameToCropTransform;
    private Matrix cropToFrameTransform;
    private Bitmap rgbFrameBitmap = null;
    private Bitmap croppedBitmap = null;

    private byte[][] yuvBytes = new byte[3][];
    private int[] rgbBytes = null;
    private int yRowStride;

    private long lastProcessingTimeMs;

    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          ARCHIE INTERFACE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    public void onSensorsReady(Activity activity) {
        LOGGER.e("GTC Controller called 'onSensorsReady' for classifier: "
                + this.getClass().getSimpleName());
        initActivity = activity;
        initClassifier();
    }

    @Override
    public void preprocess(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'preprocess' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREVIEW_DATA)) {
            LOGGER.e("CANNOT PRE-PROCESS DATA WITHOUT DATA TO PRE-PROCESS.");
            return;
        }

        if (!map.containsKey(BUNDLE_KEY_PREVIEW_FORMAT)) {
            LOGGER.e("CANNOT PRE-PROCESS DATA WITHOUT KNOWING WHAT FORMAT IT'S IN.");
            return;
        }

        rgbBytes = new int[previewWidth * previewHeight];
        String previewFormat = map.get(BUNDLE_KEY_PREVIEW_FORMAT).toString();
        if (previewFormat.equals(Constants.INPUT_FORMAT_LEGACY)) preprocessPreviewFrame(map);
        else preprocessImage(map);
    }

    @Override
    public void classify(final Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'classify' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREPROCESSED_OUTPUT)) {
            LOGGER.e("CANNOT CLASSIFY OUTPUT FROM PRE-PROCESSING IF THERE IS NONE.");
            return;
        }

        final ClassifierApplication app = (ClassifierApplication)initActivity.getApplication();
        app.runInBackground(new Runnable() {
            @Override
            public void run() {
                final long startTime = SystemClock.uptimeMillis();
                final List<Classifier.Recognition> results =
                        app.getClassifier().recognizeImage(initActivity, croppedBitmap);
                lastProcessingTimeMs = SystemClock.uptimeMillis() - startTime;
                LOGGER.i("Detect: %s", results);

                app.setComputing(false);
                Trace.endSection();

                if (results != null) {
                    map.put(BUNDLE_KEY_CLASSIFICATION_RESULTS, results);
                    if (results.size() > 0) {
                        LOGGER.e("\n\nRECEIVED CLASSIFICATION RESULTS: \n" + results + "\n\n.");
                        map.put(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT, results.get(0).getTitle());
                    }
                }

                app.getGtcController().onClassifierClassificationComplete(map);
            }
        });
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          ONCE WE HAVE THE CLASSIFICATION RESULT, WHAT DO WE DO WITH IT??
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    private static final String TIME_LIMIT_REACHED =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_TIME_LIMIT_REACHED;

    private static final String POSITIVE_MATCH =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_POSITIVE_MATCH;

    private static final String STILL_BUFFERING =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_STILL_BUFFERING;

    private static final String DESIRED_RESULT = "prayer rug";
    private static final int DESIRED_RESULT_TIME_LIMIT_MIN = 1;         // one minute (60k milliseconds)
    private static final long DESIRED_RESULT_TIME_LIMIT_MS =
            TimeUnit.MINUTES.toMillis(DESIRED_RESULT_TIME_LIMIT_MIN);
    private static final int DESIRED_RESULT_MATCH_LIMIT = 10;           // should be able to match 10 frames in 1min

    private static int currentMatchCount = 0;
    private static long timeOfFirstMatch = 0;

    // ----------------------------------------------------------------------------------------

    @Override
    public void evaluate(Map<String, Object> classifierInput) {
        LOGGER.e("GTC Controller called 'evaluate' for classifier: "
                + this.getClass().getSimpleName());

        if (!classifierInput.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        final ClassifierApplication app = (ClassifierApplication)initActivity.getApplication();
        Bitmap croppedBitmap = null;
        List<Classifier.Recognition> results = null;
        String topResult = null;

        try {
            croppedBitmap = (Bitmap) classifierInput.get(BUNDLE_KEY_PREPROCESSED_OUTPUT);
            results = (List<Classifier.Recognition>) classifierInput.get(BUNDLE_KEY_CLASSIFICATION_RESULTS);
            topResult = classifierInput.get(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT).toString();
        } catch (Exception ex) {
            LOGGER.e("Could not cast classification results to expected format.");
            app.getGtcController().onClassifierEvaluationComplete(null);
            return;
        }

        Map<String, Object> responseOutput = new HashMap<>();
        responseOutput.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, croppedBitmap);
        responseOutput.put(BUNDLE_KEY_CLASSIFICATION_RESULTS, results);
        responseOutput.put(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT, topResult);
        LOGGER.i("Received classification result to evaluate: " + topResult
                + "\nRunning extra checks to make sure we don't send too many notifications to the annotator.");

        // WHEN MATCHING - don't log positive result for every frame that returns desired label
        // ... instead, keep track of number of frames which match this result within a certain window of time
        // ... if you match X frames within Y time period, *THEN* send the annotation request
        if (topResult.equalsIgnoreCase(DESIRED_RESULT)) {
            // check current match counter value (zero means we should start new round of matching)
            if (currentMatchCount == 0) {
                // new round started!  log the time we found the first result in this set
                timeOfFirstMatch = System.currentTimeMillis();
            }

            // increase the match counter
            currentMatchCount++;

            // double check time elapsed since we found the first result
            long timeSinceFirstResult = System.currentTimeMillis() - timeOfFirstMatch;
            if (timeSinceFirstResult >= DESIRED_RESULT_TIME_LIMIT_MS) {
                // if we've gone over the time limit, reset properties and wait for the next match
                currentMatchCount = 0;
                timeOfFirstMatch = 0;
                responseOutput.put(BUNDLE_KEY_RESPONSE_EVENT, TIME_LIMIT_REACHED);
                app.getGtcController().onClassifierEvaluationComplete(responseOutput);
                return;
            }

            // if we got this far, it means we're still within our time limit ...
            // time to check the match limit
            if (currentMatchCount >= DESIRED_RESULT_MATCH_LIMIT) {
                // we've hit the desired number of matches within the provided time limit ...
                // send the result to the GTC Controller and then reset properties for new round of matching
                currentMatchCount = 0;
                timeOfFirstMatch = 0;
                responseOutput.put(BUNDLE_KEY_RESPONSE_EVENT, POSITIVE_MATCH);
                responseOutput.put(BUNDLE_KEY_RESPONSE_TIME, DESIRED_RESULT_MATCH_LIMIT);
                app.getGtcController().onClassifierEvaluationComplete(responseOutput);
                return;
            }

            // if we got this far, it means we're still within our time limit but haven't gotten
            // enough result matches to send message to GTC Controller ... keep waiting
        }

        responseOutput.put(BUNDLE_KEY_RESPONSE_EVENT, STILL_BUFFERING);
        app.getGtcController().onClassifierEvaluationComplete(responseOutput);
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          PRIVATE REFERENCE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    private void initClassifier() {
        final ClassifierApplication app = (ClassifierApplication)initActivity.getApplication();
        Classifier classifier =
                TensorFlowImageClassifier.create(
                        initActivity.getAssets(), MODEL_FILE, LABEL_FILE,
                        INPUT_SIZE, IMAGE_MEAN, IMAGE_STD, INPUT_NAME, OUTPUT_NAME);
        app.setClassifier(classifier);

        previewWidth = app.getPreviewWidth();
        previewHeight = app.getPreviewHeight();

        sensorOrientation = app.getRotation() - getScreenOrientation();
        app.setCameraOrientation(sensorOrientation);
        LOGGER.i("Camera orientation relative to screen canvas: %d", sensorOrientation);

        LOGGER.i("Initializing at size %dx%d", previewWidth, previewHeight);
        rgbFrameBitmap = Bitmap.createBitmap(previewWidth, previewHeight, Bitmap.Config.ARGB_8888);
        croppedBitmap = Bitmap.createBitmap(INPUT_SIZE, INPUT_SIZE, Bitmap.Config.ARGB_8888);

        frameToCropTransform = ImageUtils.getTransformationMatrix(
                previewWidth, previewHeight,
                INPUT_SIZE, INPUT_SIZE,
                sensorOrientation, MAINTAIN_ASPECT);

        cropToFrameTransform = new Matrix();
        frameToCropTransform.invert(cropToFrameTransform);

        // TODO - debug the debug callback
        /*app.addInteractionCallback(new OverlayView.DrawCallback() {
            @Override
            public void drawCallback(final Canvas canvas) {
                renderDebug(canvas);
            }
        });*/
    }

    private void preprocessPreviewFrame(Map<String, Object> map) {
        final ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        final byte[] bytes = (byte[])map.get(BUNDLE_KEY_PREVIEW_DATA);

        // TODO - debug the preview size setting below
        /*try {
            // Initialize the storage bitmaps once when the resolution is known.
            if (rgbBytes == null) {
                Camera.Size previewSize = camera.getParameters().getPreviewSize();
                previewHeight = previewSize.height;
                previewWidth = previewSize.width;
                app.setRgbBytes(new int[previewWidth * previewHeight]);
                onPreviewSizeChosen(new Size(previewSize.width, previewSize.height), 90);
            }
        } catch (final Exception e) {
            LOGGER.e(e, "Exception!");
            return;
        }*/

        app.setComputing(true);
        app.setLastPreviewFrame(bytes);
        Trace.beginSection("previewFrameAvailable");

        yuvBytes[0] = bytes;
        yRowStride = previewWidth;

        ImageUtils.convertYUV420SPToARGB8888(bytes, previewWidth, previewHeight, rgbBytes);
        rgbFrameBitmap.setPixels(rgbBytes, 0, previewWidth, 0, 0, previewWidth, previewHeight);
        final Canvas canvas = new Canvas(croppedBitmap);
        canvas.drawBitmap(rgbFrameBitmap, frameToCropTransform, null);

        // For examining the actual TF input.
        if (SAVE_PREVIEW_BITMAP) ImageUtils.saveBitmap(croppedBitmap);

        // Let the GTC Controller know we're done pre-processing, and are ready to classify
        map.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, croppedBitmap);
        map.put("bundle_key_preprocessed_format", "Bitmap");
        app.getGtcController().onClassifierPreprocessComplete(map);
    }

    private void preprocessImage(Map<String, Object> map) {
        final ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        final Image image = (Image)map.get(BUNDLE_KEY_PREVIEW_DATA);

        app.setComputing(true);
        Trace.beginSection("imageAvailable");

        final Image.Plane[] planes = image.getPlanes();
        fillBytes(planes, yuvBytes);
        yRowStride = planes[0].getRowStride();
        final int uvRowStride = planes[1].getRowStride();
        final int uvPixelStride = planes[1].getPixelStride();

        ImageUtils.convertYUV420ToARGB8888(yuvBytes[0], yuvBytes[1], yuvBytes[2],
                previewWidth, previewHeight, yRowStride, uvRowStride,
                uvPixelStride, rgbBytes);

        rgbFrameBitmap.setPixels(rgbBytes, 0, previewWidth, 0, 0, previewWidth, previewHeight);
        final Canvas canvas = new Canvas(croppedBitmap);
        canvas.drawBitmap(rgbFrameBitmap, frameToCropTransform, null);

        // For examining the actual TF input.
        if (SAVE_PREVIEW_BITMAP) ImageUtils.saveBitmap(croppedBitmap);

        // Let the GTC Controller know we're done pre-processing, and are ready to classify
        map.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, croppedBitmap);
        app.getGtcController().onClassifierPreprocessComplete(map);
    }

    private int getScreenOrientation() {
        switch (initActivity.getWindowManager().getDefaultDisplay().getRotation()) {
            case Surface.ROTATION_270:
                return 270;
            case Surface.ROTATION_180:
                return 180;
            case Surface.ROTATION_90:
                return 90;
            default:
                return 0;
        }
    }

    private void fillBytes(final Image.Plane[] planes, final byte[][] yuvBytes) {
        // Because of the variable row stride it's not possible to know in
        // advance the actual necessary dimensions of the yuv planes.
        for (int i = 0; i < planes.length; ++i) {
            final ByteBuffer buffer = planes[i].getBuffer();
            if (yuvBytes[i] == null) {
                LOGGER.d("Initializing buffer %d at size %d", i, buffer.capacity());
                yuvBytes[i] = new byte[buffer.capacity()];
            }
            buffer.get(yuvBytes[i]);
        }
    }

}