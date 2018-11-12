package com.archie.tf_speech_mod.archie_mods;

import android.app.Activity;

import com.archie.tf_speech_mod.RecognizeCommands;
import com.archie.tf_speech_mod.SpeechApplication;
import com.archie.tf_speech_mod.env.Logger;

import org.tensorflow.contrib.android.TensorFlowInferenceInterface;

import java.util.HashMap;
import java.util.Map;

import edu.temple.gtc_core.classify.IClassifier;

import static com.archie.tf_speech_mod.archie_mods.Constants.AVERAGE_WINDOW_DURATION_MS;
import static com.archie.tf_speech_mod.archie_mods.Constants.DETECTION_THRESHOLD;
import static com.archie.tf_speech_mod.archie_mods.Constants.INPUT_DATA_NAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.MINIMUM_COUNT;
import static com.archie.tf_speech_mod.archie_mods.Constants.MINIMUM_TIME_BETWEEN_SAMPLES_MS;
import static com.archie.tf_speech_mod.archie_mods.Constants.MODEL_FILENAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.OUTPUT_SCORES_NAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.RECORDING_LENGTH;
import static com.archie.tf_speech_mod.archie_mods.Constants.SAMPLE_RATE;
import static com.archie.tf_speech_mod.archie_mods.Constants.SAMPLE_RATE_NAME;
import static com.archie.tf_speech_mod.archie_mods.Constants.SUPPRESSION_MS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_FORMAT;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_RESPONSE_EVENT;

public class ArchieSpeechClassifier implements IClassifier {

    private static final Logger LOGGER = new Logger();

    private Activity initActivity;
    private RecognizeCommands recognizeCommands = null;
    private TensorFlowInferenceInterface inferenceInterface;

    boolean shouldContinueRecognition = true, shouldContinueSmoothing = true;
    private Thread recognitionThread, smoothingThread;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    /**
     * ANY SORT OF INIT LOGIC THAT WE NEED TO WAIT ON INPUT SENSORS (MICROPHONE) TO PROVIDE
     */
    @Override
    public void onSensorsReady(Activity currentActivity) {
        LOGGER.e("GTC Controller called 'onSensorsReady' for classifier: "
                + this.getClass().getSimpleName());

        initActivity = currentActivity;
        SpeechApplication app = (SpeechApplication) initActivity.getApplication();

        inferenceInterface = new TensorFlowInferenceInterface(initActivity.getAssets(), MODEL_FILENAME);
        recognizeCommands = new RecognizeCommands(app.getLabels(), AVERAGE_WINDOW_DURATION_MS,
                DETECTION_THRESHOLD, SUPPRESSION_MS, MINIMUM_COUNT, MINIMUM_TIME_BETWEEN_SAMPLES_MS);
    }

    @Override
    public void preprocess(final Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'preprocess' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREVIEW_DATA)) {
            LOGGER.e("CANNOT PRE-PROCESS DATA WITHOUT DATA TO PRE-PROCESS.");
            return;
        }

        // if (recognitionThread != null) return;

        final SpeechApplication app = (SpeechApplication) initActivity.getApplication();
        final short[] inputBuffer = (short[]) map.get(BUNDLE_KEY_PREVIEW_DATA);

        shouldContinueRecognition = true;
        recognitionThread = new Thread(new Runnable() {
            @Override
            public void run() {
                LOGGER.i("Running recognition thread.");
                float[] outputScores = recognize(app, inputBuffer);
                map.put(BUNDLE_KEY_PREPROCESSED_OUTPUT, outputScores);
                map.put("bundle_key_preprocessed_format", "FloatArray");
                app.getGtcController().onClassifierPreprocessComplete(map);
            }
        });

        // recognitionThread.start();
        recognitionThread.run();
    }

    @Override
    public void classify(final Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'classify' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_PREPROCESSED_OUTPUT)) {
            LOGGER.e("CANNOT CLASSIFY OUTPUT FROM PRE-PROCESSING IF THERE IS NONE.");
            return;
        }

        stopRecognition();
        if (smoothingThread != null) return;
        shouldContinueSmoothing = true;

        final float[] outputScores = (float[]) map.get(BUNDLE_KEY_PREPROCESSED_OUTPUT);
        smoothingThread = new Thread(new Runnable() {
            @Override
            public void run() {
                LOGGER.i("Initializing smoothing thread.");
                SpeechApplication app = (SpeechApplication) initActivity.getApplication();

                // Use the smoother to figure out if we've had a real recognition event.
                long currentTime = System.currentTimeMillis();
                final RecognizeCommands.RecognitionResult result =
                        recognizeCommands.processLatestResults(outputScores, currentTime);

                // Consolidate results and return data to the GTC Controller
                LOGGER.i("Sending classification result: " + result);
                map.put(BUNDLE_KEY_CLASSIFICATION_RESULTS, result);
                app.getGtcController().onClassifierClassificationComplete(map);
            }
        });

        smoothingThread.start();
    }

    @Override
    public void evaluate(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'evaluate' for classifier: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        stopSmoothing();

        map.put(BUNDLE_KEY_RESPONSE_EVENT, "speech");
        SpeechApplication app = (SpeechApplication) initActivity.getApplication();
        app.getGtcController().onClassifierEvaluationComplete(map);
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private synchronized void stopRecognition() {
        if (recognitionThread == null) return;
        shouldContinueRecognition = false;
        recognitionThread = null;
    }

    private synchronized void stopSmoothing() {
        if (smoothingThread == null) return;
        shouldContinueSmoothing = false;
        smoothingThread = null;
    }

    private float[] recognize(SpeechApplication app, short[] inputBuffer) {
        LOGGER.i("Start recognition");

        int[] sampleRateList = new int[] {SAMPLE_RATE};
        float[] outputScores = new float[app.getLabels().size()];
        float[] floatInputBuffer = new float[RECORDING_LENGTH];
        String[] outputScoresNames = new String[] {OUTPUT_SCORES_NAME};

        // Loop, grabbing recorded data and running the recognition model on it.
        // while (shouldContinueRecognition) {
            // LOGGER.i("Continue recognition flag is true ... Continuing with loop.");

            // We need to feed in float values between -1.0f and 1.0f, so divide the
            // signed 16-bit inputs.
            for (int i = 0; i < RECORDING_LENGTH; ++i) {
                floatInputBuffer[i] = inputBuffer[i] / 32767.0f;
            }

            // Run the model.
            inferenceInterface.feed(SAMPLE_RATE_NAME, sampleRateList);
            inferenceInterface.feed(INPUT_DATA_NAME, floatInputBuffer, RECORDING_LENGTH, 1);
            inferenceInterface.run(outputScoresNames);
            inferenceInterface.fetch(OUTPUT_SCORES_NAME, outputScores);

            /*try {
                // We don't need to run too frequently, so snooze for a bit.
                Thread.sleep(MINIMUM_TIME_BETWEEN_SAMPLES_MS);
            } catch (InterruptedException e) {
                // Ignore
            }*/
        // }

        LOGGER.i("End recognition");
        return outputScores;
    }

}