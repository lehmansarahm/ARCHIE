package edu.temple.archie_core;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;
import java.util.List;

public abstract class BaseActivity extends AppCompatActivity implements UIConfigController.UIConfigListener {

    protected static final String LOG_TAG = "ARCHIE_BaseActivity";

    protected UIConfigController configController;

    protected abstract View getLabelBackgroundView();
    protected abstract List<TextView> getLabelTextViews();

    @Override
    protected void onCreate(final Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.i(LOG_TAG, "onCreate called");
        configController = new UIConfigController(this);
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.i(LOG_TAG, "onResume called");
        configController.start();
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.i(LOG_TAG, "onPause called");
        configController.stop();
    }

    @Override
    public void onConfigUpdated(UIConfig currentConfig) {
        Log.e(LOG_TAG, "onConfigUpdated called");

        View labelBackgroundView = getLabelBackgroundView();
        if (labelBackgroundView != null) {
            runOnUiThread(() -> {
                labelBackgroundView.setBackgroundColor(currentConfig.getBkgdColor());
                labelBackgroundView.setAlpha(currentConfig.getBkgdOpacity());
            });
        }

        List<TextView> labelTextViews = getLabelTextViews();
        if (labelTextViews.size() !=  0) {
            runOnUiThread(() -> {
                for (TextView labelTV : labelTextViews) {
                    labelTV.setTextColor(currentConfig.getFontColor());
                    labelTV.setTextSize(currentConfig.getFontSize());
                }
            });
        }
    }

}
