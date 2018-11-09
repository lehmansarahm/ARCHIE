package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.graphics.Typeface;
import android.util.TypedValue;

import com.archie.tf_classify_mod.Classifier;
import com.archie.tf_classify_mod.OverlayView;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.ResultsView;
import com.archie.tf_classify_mod.env.BorderedText;
import com.archie.tf_classify_mod.env.Logger;

import java.util.List;
import java.util.Map;

import edu.temple.gtc_core.profiles.IInteractionProfile;

import static com.archie.tf_classify_mod.archie_mods.Constants.TEXT_SIZE_DIP;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;

public class ArchieTfInteractionProfile implements IInteractionProfile {

    private static final Logger LOGGER = new Logger();

    private static Activity initActivity;

    private static ResultsView resultsView;
    private static BorderedText borderedText;

    @Override
    public void onSensorsReady() {
        LOGGER.e("GTC Controller called 'onSensorsReady' for interaction profile: "
                + this.getClass().getSimpleName());

        final float textSizePx = TypedValue.applyDimension(
                TypedValue.COMPLEX_UNIT_DIP, TEXT_SIZE_DIP,
                initActivity.getResources().getDisplayMetrics());

        borderedText = new BorderedText(textSizePx);
        borderedText.setTypeface(Typeface.MONOSPACE);
    }

    @Override
    public void onClassifierResultAvailable(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'onClassifierResultAvailable' for interaction profile: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        List<Classifier.Recognition> results =
                (List<Classifier.Recognition>) map.get(BUNDLE_KEY_CLASSIFICATION_RESULTS);
        if (resultsView == null)
            resultsView = initActivity.findViewById(R.id.results);
        resultsView.setResults(results);
    }

    @Override
    public void resumeProfile(Activity activity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for interaction profile: "
                + this.getClass().getSimpleName());
        initActivity = activity;
        resultsView = initActivity.findViewById(R.id.results);
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for interaction profile: "
                + this.getClass().getSimpleName());
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          OUTPUT, UI UPDATER METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    // TODO - debug the overlay
    private void requestRender() {
        final OverlayView overlay = initActivity.findViewById(R.id.debug_overlay);
        if (overlay != null) {
            overlay.postInvalidate();
        }
    }

    // TODO - debug the callback
    private void addCallback(final OverlayView.DrawCallback callback) {
        final OverlayView overlay = initActivity.findViewById(R.id.debug_overlay);
        if (overlay != null) {
            overlay.addCallback(callback);
        }
    }

    // TODO - debug the debug
    /*
    private boolean debug = false;
    private void renderDebug(final Canvas canvas) {
        // only display the debug overlay if the property is explicitly set
        if (!debug) return;

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
            if (classifier != null) {
                String statString = classifier.getStatString();
                String[] statLines = statString.split("\n");
                for (String line : statLines) {
                    lines.add(line);
                }
            }

            lines.add("Frame: " + previewWidth + "x" + previewHeight);
            lines.add("Crop: " + copy.getWidth() + "x" + copy.getHeight());
            lines.add("View: " + canvas.getWidth() + "x" + canvas.getHeight());
            lines.add("Rotation: " + sensorOrientation);
            lines.add("Inference time: " + lastProcessingTimeMs + "ms");

            borderedText.drawLines(canvas, 10, canvas.getHeight() - 10, lines);
        }
    }*/

}