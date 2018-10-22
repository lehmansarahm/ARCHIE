package edu.temple.tf_tester.profiles_int;

import android.app.Activity;
import android.graphics.SurfaceTexture;
import android.hardware.Camera;
import android.util.Log;
import android.view.TextureView;

import java.io.IOException;

import edu.temple.gtc_core.profiles.IInteractionProfile;
import edu.temple.tf_tester.TfTesterApp;
import edu.temple.tf_tester.utils.Constants;

public abstract class BaseInteractionProfile extends Activity implements IInteractionProfile {

    private static TextureView.SurfaceTextureListener previewTextureListener;

    private static TfTesterApp app;

    public BaseInteractionProfile() {
        app = (TfTesterApp)getApplication();
    }

    /**
     * anything that needs to be done to init the profile, resume from suspension, etc.
     */
    @Override
    public void resumeProfile() {
        // tah dah
    }

    /**
     * anything needed to suspend execution
     */
    @Override
    public void pauseProfile() {
        // tah dah
        previewTextureListener = null;
    }

    /**
     * Any GUI updates that needs to happen once we have access to all of the sensors
     */
    @Override
    public void onSensorsReady() {
        final Camera mainCamera = app.getMainCamera();
        final TextureView previewTextureView = app.getPreviewTextureView();
        final boolean isLandscape = app.getPreviewOrientationLandscape();

        final int previewHeight = app.getPreviewHeight();
        final int previewWidth = app.getPreviewWidth();

        previewTextureListener = new TextureView.SurfaceTextureListener() {
            @Override
            public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int width, int height) {
                try {
                    if (isLandscape) surfaceTexture.setDefaultBufferSize(previewHeight, previewWidth);
                    else surfaceTexture.setDefaultBufferSize(previewWidth, previewHeight);

                    mainCamera.setPreviewTexture(previewTextureView.getSurfaceTexture());
                    mainCamera.startPreview();
                } catch (IOException ex) {
                    Log.e(Constants.TAG, "Something went wrong when initializing the Preview Texture Listener.", ex);
                }
            }

            @Override
            public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int width, int height) { /* empty */ }

            @Override
            public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) { return false; }

            @Override
            public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) { /* empty */ }
        };

        previewTextureView.setSurfaceTextureListener(previewTextureListener);
        if (previewTextureView.isAvailable()) {
            Log.i(Constants.TAG,"Surface texture is already available!  Calling availability method directly.");
            previewTextureListener.onSurfaceTextureAvailable(previewTextureView.getSurfaceTexture(),
                    previewTextureView.getWidth(), previewTextureView.getHeight());
        }
    }

}