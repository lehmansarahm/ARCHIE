package edu.temple.gtc_annotator.wearable;

import android.os.Bundle;
import android.support.wearable.activity.WearableActivity;

import edu.temple.gtc_annotator.R;

public class SampleActivity extends WearableActivity {

    private static final Boolean TESTING_BAD_SAMPLE = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        if (TESTING_BAD_SAMPLE) setContentView(R.layout.activity_sample_bad);
        else setContentView(R.layout.activity_sample_good);
    }

}