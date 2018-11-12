package com.archie.tf_speech_mod.archie_mods;

import android.animation.AnimatorInflater;
import android.animation.AnimatorSet;
import android.app.Activity;
import android.view.View;
import android.widget.ListView;

import com.archie.tf_speech_mod.R;
import com.archie.tf_speech_mod.RecognizeCommands;
import com.archie.tf_speech_mod.SpeechApplication;
import com.archie.tf_speech_mod.env.Logger;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import edu.temple.gtc_core.profiles.IInteractionProfile;

import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;

public class ArchieSpeechInteractionProfile implements IInteractionProfile {

    private static final Logger LOGGER = new Logger();

    private Activity initActivity;
    private ListView labelsListView;
    private List<String> labels = new ArrayList<>();

    @Override
    public void onSensorsReady() {
        LOGGER.e("GTC Controller called 'onSensorsReady' for interaction profile: "
                + this.getClass().getSimpleName());
    }

    @Override
    public void resumeProfile(Activity currentActivity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for interaction profile: "
                + this.getClass().getSimpleName());

        initActivity = currentActivity;
        SpeechApplication app = (SpeechApplication) initActivity.getApplication();
        labels = app.getLabels();
        labelsListView = app.getLabelsListView();
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for interaction profile: "
                + this.getClass().getSimpleName());
    }

    @Override
    public void onClassifierResultAvailable(Map<String, Object> map) {
        LOGGER.e("GTC Controller called 'onClassifierResultAvailable' for interaction profile: "
                + this.getClass().getSimpleName());

        if (!map.containsKey(BUNDLE_KEY_CLASSIFICATION_RESULTS)) {
            LOGGER.e("CANNOT EVALUATE CLASSIFICATION RESULTS IF NONE ARE PROVIDED.");
            return;
        }

        final RecognizeCommands.RecognitionResult result =
                (RecognizeCommands.RecognitionResult) map.get(BUNDLE_KEY_CLASSIFICATION_RESULTS);

        initActivity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                LOGGER.i("Finding the matching UI element to highlight for result: " + result.foundCommand);

                // If we do have a new command, highlight the right list entry.
                if (!result.foundCommand.startsWith("_") && result.isNewCommand) {
                    int labelIndex = -1;
                    for (int i = 0; i < labels.size(); ++i) {
                        if (labels.get(i).equals(result.foundCommand)) {
                            labelIndex = i;
                        }
                    }

                    final View labelView = labelsListView.getChildAt(labelIndex - 2);
                    AnimatorSet colorAnimation = (AnimatorSet) AnimatorInflater.loadAnimator
                            (initActivity, R.animator.color_animation);
                    colorAnimation.setTarget(labelView);
                    colorAnimation.start();
                }
            }
        });
    }

}