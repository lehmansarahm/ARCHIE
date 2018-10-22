package edu.temple.tf_tester.classifiers;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Rect;
import android.graphics.YuvImage;
import android.os.AsyncTask;
import android.util.Log;

import java.io.ByteArrayOutputStream;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.classify.IClassifier;
import edu.temple.tf_tester.TfTesterApp;
import edu.temple.tf_tester.utils.Constants;

public class TFPoetsClassifier extends Activity implements IClassifier {

    private static final String DESIRED_RESULT = "daisy";
    private static final int DESIRED_RESULT_TIME_LIMIT_MIN = 1;         // one minute (60k milliseconds)
    private static final long DESIRED_RESULT_TIME_LIMIT_MS = TimeUnit.MINUTES.toMillis(DESIRED_RESULT_TIME_LIMIT_MIN);
    private static final int DESIRED_RESULT_MATCH_LIMIT = 10;           // should be able to match 10 frames in 1min

    private static final String BUNDLE_KEY_PREVIEW_DATA = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
    private static final String BUNDLE_KEY_PREVIEW_FORMAT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;
    private static final String BUNDLE_KEY_PREPROCESSED_OUTPUT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;
    private static final String BUNDLE_KEY_CLASSIFICATION_RESULT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULT;
    private static final String BUNDLE_KEY_RESPONSE_EVENT = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;
    private static final String BUNDLE_KEY_RESPONSE_TIME = edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_TIME;

    private static final String TIME_LIMIT_REACHED = edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_TIME_LIMIT_REACHED;
    private static final String POSITIVE_MATCH = edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_POSITIVE_MATCH;
    private static final String STILL_BUFFERING = edu.temple.gtc_core.utils.Constants.CLASSIFIER_RESPONSE_STILL_BUFFERING;

    private static final int INPUT_SIZE = 224;
    private static final int IMAGE_MEAN = 128;
    private static final float IMAGE_STD = 128.0f;
    private static final String INPUT_NAME = "input";
    private static final String OUTPUT_NAME = "final_result";

    private static final String MODEL_FILE = "file:///android_asset/graph.pb";
    private static final String LABEL_FILE = "file:///android_asset/labels.txt";

    private static boolean WAIT_FOR_FRAME = true;
    private static boolean PROCESSING_FRAME = false;

    private static BaseTFImageClassifier classifier;
    private static Bitmap preprocessedBitmap;

    private static int currentMatchCount = 0;
    private static long timeOfFirstMatch = 0;

    private static TfTesterApp app;

    /**
     * Default constructor to initialize class properties
     */
    public TFPoetsClassifier() {
        app = (TfTesterApp)getApplication();
        if (app.getAssetManager() != null)
            classifier = BaseTFImageClassifier.create(app.getAssetManager(), MODEL_FILE, LABEL_FILE,
                    INPUT_SIZE, IMAGE_MEAN, IMAGE_STD, INPUT_NAME, OUTPUT_NAME);
    }

    /**
     * Method to perform any necessary pre-processing before classification
     *
     * @param sensorInput
     * @return
     */
    @Override
    public void preprocess(Map<String, Object> sensorInput) {
        if (!WAIT_FOR_FRAME || !PROCESSING_FRAME) {
            final int width = app.getPreviewWidth();
            final int height = app.getPreviewHeight();

            final int previewFormat = (int) sensorInput.get(BUNDLE_KEY_PREVIEW_FORMAT);
            final byte[] previewData = (byte[]) sensorInput.get(BUNDLE_KEY_PREVIEW_DATA);
            if (previewData == null) {
                // can't perform any pre-processing if we have no data to process ...
                // return null so the pipeline for this particular bitmap does not continue
                Log.e(Constants.TAG, "Cannot process a null byte array.");
                app.getGtcController().onClassifierPreprocessComplete(null);
                return;
            }

            AsyncTask.execute(new Runnable() {
                @Override
                public void run() {
                    PROCESSING_FRAME = true;

                    try {
                        ByteArrayOutputStream out = new ByteArrayOutputStream();
                        YuvImage yuv = new YuvImage(previewData, previewFormat, width, height, null);
                        yuv.compressToJpeg(new Rect(0, 0, width, height), 100, out);

                        byte[] bytes = out.toByteArray();
                        Bitmap rawBitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.length);
                        Bitmap scaledBitmap = Bitmap.createScaledBitmap(rawBitmap, INPUT_SIZE, INPUT_SIZE, false);

                        // Okay, we got there!  Return a new data map with the preprocessed image
                        Map<String, Object> preprocessedOutput = new HashMap<>();
                        preprocessedOutput.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, scaledBitmap);
                        app.getGtcController().onClassifierPreprocessComplete(preprocessedOutput);
                    } catch (OutOfMemoryError ex) {
                        Log.e(Constants.TAG, "Ran out of memory to process this image.");
                    } catch (Exception ex) {
                        Log.e(Constants.TAG, "Something went wrong while processing new preview frame.");
                    }

                    // if we get to this point, it means we caught an exception in the
                    // pre-processing ... return null so the pipeline for this particular bitmap
                    // does not continue
                    app.getGtcController().onClassifierPreprocessComplete(null);
                }
            });
        } else if (PROCESSING_FRAME) {
            Log.e(Constants.TAG, "Can't process frame - another frame is being processed.");
        }

        // if we got this far, it means that we failed the "wait for frame" and "processing frame"
        // conditions ... return null so the pipeline for this particular bitmap does not continue
        app.getGtcController().onClassifierPreprocessComplete(null);
    }

    /**
     * Method to perform classification with the initialized classifier and output from the
     * pre-processing stage (passed in manually so GTC Controller can access it)
     *
     * @param preprocessedInput
     * @return
     */
    @Override
    public void classify(final Map<String, Object> preprocessedInput) {
        final Bitmap scaledBitmap = (Bitmap) preprocessedInput.get(BUNDLE_KEY_PREPROCESSED_OUTPUT);
        if (scaledBitmap == null) {
            // can't perform any classification if we have no image to classify ...
            // return null so the pipeline for this particular bitmap does not continue
            Log.e(Constants.TAG, "Cannot classify a null Bitmap.");
            app.getGtcController().onClassifierClassificationComplete(null);
            return;
        }

        AsyncTask.execute(new Runnable() {
            @Override
            public void run() {
                List<BaseTFImageClassifier.Recognition> results = classifier.recognizeImage(scaledBitmap);
                PROCESSING_FRAME = false;

                // Okay, we got there!  Return a new data map with the classification results
                Map<String, Object> classificationOutput = new HashMap<>();
                classificationOutput.put(BUNDLE_KEY_CLASSIFICATION_RESULT, results.get(0).getTitle());
                app.getGtcController().onClassifierClassificationComplete(classificationOutput);
            }
        });
    }

    /**
     * Method to perform response logic / decision-making based on whatever result comes out of the
     * classification phase (passed in manually so GTC Controller can access it)
     *
     * @param classifierInput
     * @return
     */
    @Override
    public void respond(Map<String, Object> classifierInput) {
        String classificationResult = (String) classifierInput.get(BUNDLE_KEY_CLASSIFICATION_RESULT);
        if (classificationResult == null) {
            // can't perform any classification response if we have no result to respond to ...
            // return null so the pipeline for this particular bitmap does not continue
            Log.e(Constants.TAG, "Cannot respond to null classification result.");
            app.getGtcController().onClassifierResponseComplete(null);
            return;
        }

        Map<String, Object> responseOutput = new HashMap<>();
        responseOutput.put(BUNDLE_KEY_CLASSIFICATION_RESULT, classificationResult);

        // WHEN MATCHING - don't log positive result for every frame that returns desired label
        // ... instead, keep track of number of frames which match this result within a certain window of time
        // ... if you match X frames within Y time period, *THEN* send the annotation request
        if (classificationResult.equalsIgnoreCase(DESIRED_RESULT)) {
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
                app.getGtcController().onClassifierResponseComplete(responseOutput);
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
                app.getGtcController().onClassifierResponseComplete(responseOutput);
                return;
            }

            // if we got this far, it means we're still within our time limit but haven't gotten
            // enough result matches to send message to GTC Controller ... keep waiting
        }

        responseOutput.put(BUNDLE_KEY_RESPONSE_EVENT, STILL_BUFFERING);
        app.getGtcController().onClassifierResponseComplete(responseOutput);
    }

}