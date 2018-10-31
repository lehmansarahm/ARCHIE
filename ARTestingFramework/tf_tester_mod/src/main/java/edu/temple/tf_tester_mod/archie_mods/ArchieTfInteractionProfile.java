package edu.temple.tf_tester_mod.archie_mods;

import android.app.Activity;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.util.TypedValue;

import java.util.List;
import java.util.Map;
import java.util.Vector;

import edu.temple.gtc_core.profiles.IInteractionProfile;
import edu.temple.tf_tester_mod.Classifier;
import edu.temple.tf_tester_mod.ClassifierApplication;
import edu.temple.tf_tester_mod.OverlayView;
import edu.temple.tf_tester_mod.R;
import edu.temple.tf_tester_mod.ResultsView;
import edu.temple.tf_tester_mod.env.BorderedText;
import edu.temple.tf_tester_mod.env.Logger;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREPROCESSED_OUTPUT;

public class ArchieTfInteractionProfile implements IInteractionProfile {

    private static final Logger LOGGER = new Logger();

    private static Activity currentActivity;
    private static Resources resources;

    private static ResultsView resultsView;
    private static BorderedText borderedText;
    private static long lastProcessingTimeMs;
    private static Bitmap cropCopyBitmap;

    @Override
    public void onSensorsReady() {
        if (this.currentActivity != null) {
            LOGGER.i("Profile has been notified that sensors are ready.  Initializing interaction controls.");
            float textSizePx = TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP,
                    Constants.TEXT_SIZE_DIP, resources.getDisplayMetrics());
            borderedText = new BorderedText(textSizePx);
            borderedText.setTypeface(Typeface.MONOSPACE);
            resultsView = currentActivity.findViewById(R.id.results);
            addCallback(
                    new OverlayView.DrawCallback() {
                        @Override
                        public void drawCallback(final Canvas canvas) {
                            renderDebug(canvas);
                        }
                    });
        }
        else LOGGER.e("Unable to handle onSensorsReady() without a valid reference to the current activity!");
    }

    @Override
    public void resumeProfile(Activity currentActivity) {
        LOGGER.i("Profile resumed for activity: " + currentActivity.getComponentName());
        this.currentActivity = currentActivity;
        resources = this.currentActivity.getResources();
    }

    @Override
    public void pauseProfile() {
        LOGGER.i("Profile paused.");
    }

    @Override
    public void onClassifierResultAvailable(Map<String, Object> classifierResult) {
        if (this.currentActivity != null) {
            ClassifierApplication app = (ClassifierApplication) currentActivity.getApplication();
            // TODO - lastProcessingTimeMs = (long) classifierResult.get(BUNDLE_KEY_LAST_PROCESSING_TIME);

            Bitmap croppedBitmap = (Bitmap) classifierResult.get(BUNDLE_KEY_PREPROCESSED_OUTPUT);
            cropCopyBitmap = Bitmap.createBitmap(croppedBitmap);

            List<Classifier.Recognition> results = (List<Classifier.Recognition>)
                    classifierResult.get(BUNDLE_KEY_CLASSIFICATION_RESULTS);
            resultsView.setResults(results);

            requestRender();
            app.setComputing(false);
        }
        else LOGGER.e("Unable to handle onClassifierResultAvailable() without a valid reference to the current activity!");
    }


    // ------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------


    private void requestRender() {
        if (this.currentActivity != null) {
            final OverlayView overlay = currentActivity.findViewById(R.id.debug_overlay);
            if (overlay != null) {
                overlay.postInvalidate();
            }
        }
        else LOGGER.e("Unable to handle requestRender() without a valid reference to the current activity!");
    }

    private void addCallback(final OverlayView.DrawCallback callback) {
        if (this.currentActivity != null) {
            final OverlayView overlay = currentActivity.findViewById(R.id.debug_overlay);
            if (overlay != null) {
                overlay.addCallback(callback);
            }
        }
        else LOGGER.e("Unable to handle addCallback() without a valid reference to the current activity!");
    }

    private void renderDebug(final Canvas canvas) {
        ClassifierApplication app = (ClassifierApplication) currentActivity.getApplication();
        if (!app.isDebug()) return;

        final Bitmap copy = cropCopyBitmap;
        if (copy != null) {
            final Matrix matrix = new Matrix();
            final float scaleFactor = 2;
            matrix.postScale(scaleFactor, scaleFactor);
            matrix.postTranslate(
                    canvas.getWidth() - copy.getWidth() * scaleFactor,
                    canvas.getHeight() - copy.getHeight() * scaleFactor);
            canvas.drawBitmap(copy, matrix, new Paint());

            final Vector<String> lines = new Vector<String>();
            if (app.getClassifier() != null) {
                String statString = app.getClassifier().getStatString();
                String[] statLines = statString.split("\n");
                for (String line : statLines) {
                    lines.add(line);
                }
            }

            int previewWidth = app.getPreviewWidth();
            int previewHeight = app.getPreviewHeight();
            int sensorOrientation = app.getCameraOrientation();

            lines.add("Frame: " + previewWidth + "x" + previewHeight);
            lines.add("Crop: " + copy.getWidth() + "x" + copy.getHeight());
            lines.add("View: " + canvas.getWidth() + "x" + canvas.getHeight());
            lines.add("Rotation: " + sensorOrientation);
            lines.add("Inference time: " + lastProcessingTimeMs + "ms");

            borderedText.drawLines(canvas, 10, canvas.getHeight() - 10, lines);
        }
    }

}