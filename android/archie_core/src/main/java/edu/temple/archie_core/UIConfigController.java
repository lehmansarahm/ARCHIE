package edu.temple.archie_core;

import android.graphics.Color;

import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.TimeUnit;

public class UIConfigController {

    public interface UIConfigListener {
        void onConfigUpdated(UIConfig currentConfig);
    }

    private static final long CONFIG_UPDATE_INTERVAL =
            TimeUnit.SECONDS.toMillis(2); // TimeUnit.MINUTES.toMillis(1);

    private UIConfig[] configs = new UIConfig[] {
            new UIConfig(Color.BLACK, 10f, Color.WHITE, 1.0f),
            new UIConfig(Color.YELLOW, 20f, Color.BLUE, 0.5f)
    };

    private UIConfigListener listener;

    private Timer configTimer = new Timer();
    private int configIndex = 0;

    public UIConfigController(final UIConfigListener listener) {
        this.listener = listener;
    }

    public void start() {
        TimerTask configTask = new TimerTask () {
            @Override
            public void run () {
                listener.onConfigUpdated(configs[configIndex]);
                configIndex++;
                if (configIndex == configs.length) configIndex = 0;
            }
        };

        configTimer.scheduleAtFixedRate(configTask, 0,
                CONFIG_UPDATE_INTERVAL);
    }

    public void stop() {
        configTimer.cancel();
    }

}
