package com.archie.tf_speech_mod;

import android.app.Activity;
import android.widget.ListView;

import com.archie.case_study_core.BaseGtcApplication;

import java.util.List;

public class SpeechApplication extends BaseGtcApplication {

    public void onPause(Activity activity) {
        super.onPause(activity);
    }

    public void onResume() {
        super.onResume();
    }

    public boolean onDestroy() {
        return super.onDestroy();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static List<String> labels;

    public void setLabels(List<String> labels) {
        synchronized (LOCK) {
            SpeechApplication.labels = labels;
        }
    }

    public List<String> getLabels() {
        synchronized (LOCK) {
            return SpeechApplication.labels;
        }
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private static ListView labelsListView;

    public void setLabelsListView(ListView labelsListView) {
        synchronized (LOCK) {
            SpeechApplication.labelsListView = labelsListView;
        }
    }

    public ListView getLabelsListView() {
        synchronized (LOCK) {
            return SpeechApplication.labelsListView;
        }
    }

}