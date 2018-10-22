package edu.temple.tf_tester;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.TextureView;

import edu.temple.gtc_core.GtcController;

public class MainActivity extends AppCompatActivity {

    private static final String PROC_NAME = "TF_Tester";
    private static final String CONFIG_FILE = "file:///android_asset/config.json";
    private static TfTesterApp app;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        app = (TfTesterApp)getApplication();
        app.setAssetManager(this.getAssets());

        TextureView previewTextureView = findViewById(R.id.texture_view);
        app.setPreviewTextureView(previewTextureView);

        GtcController gtcController = new GtcController(this,
                android.os.Process.myPid(), PROC_NAME, CONFIG_FILE);
        app.setGtcController(gtcController);

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }

    @Override
    public void onResume() {
        super.onResume();
        app.getGtcController().resumeProfiles();
    }

    @Override
    public void onPause() {
        app.getGtcController().pauseProfiles();
        super.onPause();
    }

    @Override
    public void onDestroy() {
        app.getGtcController().stopServices();
        super.onDestroy();
    }

}