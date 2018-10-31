package edu.temple.tf_tester_mod.archie_mods;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.media.Image;
import android.os.Trace;

import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.classify.IClassifier;
import edu.temple.tf_tester_mod.Classifier;
import edu.temple.tf_tester_mod.ClassifierApplication;
import edu.temple.tf_tester_mod.TensorFlowImageClassifier;
import edu.temple.tf_tester_mod.env.ImageUtils;
import edu.temple.tf_tester_mod.env.Logger;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_TOP_RESULT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_TIME;

public class ArchieTfClassifier implements IClassifier {

    private static final Logger LOGGER = new Logger();

    private static final String TIME_LIMIT_REACHED =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_TIME_LIMIT_REACHED;

    private static final String POSITIVE_MATCH =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_POSITIVE_MATCH;

    private static final String STILL_BUFFERING =
            edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_STILL_BUFFERING;

    private static final String DESIRED_RESULT = "daisy";
    private static final int DESIRED_RESULT_TIME_LIMIT_MIN = 1;         // one minute (60k milliseconds)
    private static final long DESIRED_RESULT_TIME_LIMIT_MS =
            TimeUnit.MINUTES.toMillis(DESIRED_RESULT_TIME_LIMIT_MIN);
    private static final int DESIRED_RESULT_MATCH_LIMIT = 10;           // should be able to match 10 frames in 1min

    private Activity initActivity;
    private int previewWidth, previewHeight;
    private byte[][] yuvBytes;
    private int[] rgbBytes;

    private Bitmap rgbFrameBitmap, croppedBitmap;
    private Matrix frameToCropTransform, cropToFrameTransform;

    private static int currentMatchCount = 0;
    private static long timeOfFirstMatch = 0;

    /**
     * ANY SORT OF INIT LOGIC THAT WE NEED TO WAIT ON INPUT SENSORS (CAMERA) TO PROVIDE
     */
    @Override
    public void onSensorsReady(Activity currentActivity) {
        initActivity = currentActivity;
        ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        if (app.getAssetManager() != null) {
            Classifier classifier = TensorFlowImageClassifier.create(app.getAssetManager(),
                    Constants.MODEL_FILE, Constants.LABEL_FILE,
                    Constants.INPUT_SIZE, Constants.IMAGE_MEAN,
                    Constants.IMAGE_STD, Constants.INPUT_NAME,
                    Constants.OUTPUT_NAME);
            app.setClassifier(classifier);
        }

        previewHeight = app.getPreviewHeight();
        previewWidth = app.getPreviewWidth();

        LOGGER.i("Initializing at size %dx%d", previewWidth, previewHeight);
        rgbBytes = new int[previewWidth * previewHeight];
        yuvBytes = new byte[3][];

        rgbFrameBitmap = Bitmap.createBitmap(previewWidth, previewHeight, Bitmap.Config.ARGB_8888);
        croppedBitmap = Bitmap.createBitmap(Constants.INPUT_SIZE, Constants.INPUT_SIZE, Bitmap.Config.ARGB_8888);

        frameToCropTransform = ImageUtils.getTransformationMatrix(
                previewWidth, previewHeight,
                Constants.INPUT_SIZE, Constants.INPUT_SIZE,
                app.getCameraOrientation(), Constants.MAINTAIN_ASPECT);

        cropToFrameTransform = new Matrix();
        frameToCropTransform.invert(cropToFrameTransform);
    }

    @Override
    public void preprocess(Map<String, Object> sensorInput) {
        ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        if (!sensorInput.containsKey(Constants.KEY_IMAGE_TO_PREPROCESS)) {
            LOGGER.e("Cannot pre-process image if none is provided.");
            app.getGtcController().onClassifierPreprocessComplete(null);
            return;
        }

        LOGGER.i("New image received!  Beginning pre-processing phase.");
        app.setComputing(true);
        Image image = (Image)sensorInput.get(Constants.KEY_IMAGE_TO_PREPROCESS);
        final Image.Plane[] planes = image.getPlanes();

        try {
            fillBytes(planes, yuvBytes);
            final int yRowStride = planes[0].getRowStride();
            final int uvRowStride = planes[1].getRowStride();
            final int uvPixelStride = planes[1].getPixelStride();

            ImageUtils.convertYUV420ToARGB8888(yuvBytes[0], yuvBytes[1], yuvBytes[2],
                    previewWidth, previewHeight, yRowStride, uvRowStride, uvPixelStride,
                    rgbBytes);
            image.close();
        } catch (final Exception e) {
            if (image != null) image.close();
            LOGGER.e(e, "Exception!");
            Trace.endSection();
            return;
        }

        LOGGER.i("Relevant data extracted from image.  Preparing cropped version for classification.");
        rgbFrameBitmap.setPixels(rgbBytes, 0, previewWidth, 0, 0, previewWidth, previewHeight);
        final Canvas canvas = new Canvas(croppedBitmap);
        canvas.drawBitmap(rgbFrameBitmap, frameToCropTransform, null);

        // For examining the actual TF input  (default value = false)
        if (Constants.SAVE_PREVIEW_BITMAP) ImageUtils.saveBitmap(croppedBitmap);

        LOGGER.i("Pre-processing complete!  Moving to next phase...");
        sensorInput.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, croppedBitmap);
        app.getGtcController().onClassifierPreprocessComplete(sensorInput);
    }

    @Override
    public void classify(final Map<String, Object> preprocessedInput) {
        final ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        if (!preprocessedInput.containsKey(BUNDLE_KEY_PREPROCESSED_OUTPUT)) {
            LOGGER.e("Cannot classify image if none is provided.");
            app.getGtcController().onClassifierClassificationComplete(null);
            return;
        }

        LOGGER.i("Received new image to classify!  Running classification task in background.");
        final Bitmap croppedBitmap = (Bitmap) preprocessedInput.get(BUNDLE_KEY_PREPROCESSED_OUTPUT);
        app.runInBackground(
                new Runnable() {
                    @Override
                    public void run() {
                        List<Classifier.Recognition> results =
                                app.getClassifier().recognizeImage(croppedBitmap);
                        LOGGER.i("Classification complete!  Moving to next phase...");
                        preprocessedInput.put(BUNDLE_KEY_CLASSIFICATION_RESULTS, results);
                        preprocessedInput.put(BUNDLE_KEY_CLASSIFICATION_TOP_RESULT, results.get(0).getTitle());
                        app.getGtcController().onClassifierClassificationComplete(preprocessedInput);
                    }
                });
    }

    @Override
    public void evaluate(Map<String, Object> classifierInput) {
        ClassifierApplication app = (ClassifierApplication) initActivity.getApplication();
        if (!classifierInput.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("Cannot evaluate classification results if none are provided.");
            return;
        }

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