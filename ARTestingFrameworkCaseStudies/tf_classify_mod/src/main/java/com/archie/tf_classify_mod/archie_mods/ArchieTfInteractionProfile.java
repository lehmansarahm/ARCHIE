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

    private static final Logger     LOGGER = new Logger();

    private Activity                initActivity;
    private ResultsView             resultsView;
    private BorderedText            borderedText;
    private boolean                 initialized = false;

    @Override
    public void onSensorsReady() {
        LOGGER.e("GTC Controller called 'onSensorsReady' for interaction profile: "
                + this.getClass().getSimpleName());

        if (borderedText == null && initActivity != null) {
            final float textSizePx = TypedValue.applyDimension(
                    TypedValue.COMPLEX_UNIT_DIP, TEXT_SIZE_DIP,
                    initActivity.getResources().getDisplayMetrics());

            borderedText = new BorderedText(textSizePx);
            borderedText.setTypeface(Typeface.MONOSPACE);
        }
    }

    @Override
    public void onClassifierResultAvailable(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'onClassifierResultAvailable' for interaction profile: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        if (!initialized) {
            LOGGER.e("\n\nCANNOT DISPLAY CLASSIFICATION RESULT IF INTERACTION VIEW IS NOT INITIALIZED.\n\n");
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
        initialized = true;
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for interaction profile: "
                + this.getClass().getSimpleName());
    }

}