package edu.temple.tf_tester;

import android.app.Application;
import android.content.res.AssetManager;
import android.hardware.Camera;
import android.view.TextureView;

import edu.temple.gtc_core.GtcController;

public class TfTesterApp extends Application {

    private static final Object lock = new Object();

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static TfTesterApp app;

    public static TfTesterApp getInstance() {
        synchronized (lock) {
            if (app == null) app = new TfTesterApp();
            return TfTesterApp.app;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static AssetManager assetManager;

    public static void setAssetManager(AssetManager assetManager) {
        synchronized (lock) {
            TfTesterApp.assetManager = assetManager;
        }
    }

    public static AssetManager getAssetManager() {
        synchronized (lock) {
            return TfTesterApp.assetManager;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static GtcController gtcController;

    public static void setGtcController(GtcController gtcController) {
        synchronized (lock) {
            TfTesterApp.gtcController = gtcController;
        }
    }

    public static GtcController getGtcController() {
        synchronized (lock) {
            return TfTesterApp.gtcController;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static Camera mainCamera;

    public static void setMainCamera(Camera mainCamera) {
        synchronized (lock) {
            TfTesterApp.mainCamera = mainCamera;
        }
    }

    public static Camera getMainCamera() {
        synchronized (lock) {
            return TfTesterApp.mainCamera;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static int mainCameraId;

    public static void setMainCameraId(int mainCameraId) {
        synchronized (lock) {
            TfTesterApp.mainCameraId = mainCameraId;
        }
    }

    public static int getMainCameraId() {
        synchronized (lock) {
            return TfTesterApp.mainCameraId;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static int previewWidth;

    public static void setPreviewWidth(int previewWidth) {
        synchronized (lock) {
            TfTesterApp.previewWidth = previewWidth;
        }
    }

    public static int getPreviewWidth() {
        synchronized (lock) {
            return TfTesterApp.previewWidth;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static int previewHeight;

    public static void setPreviewHeight(int previewHeight) {
        synchronized (lock) {
            TfTesterApp.previewHeight = previewHeight;
        }
    }

    public static int getPreviewHeight() {
        synchronized (lock) {
            return TfTesterApp.previewHeight;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static boolean previewOrientationLandscape;

    public static void setPreviewOrientationLandscape(boolean previewOrientationLandscape) {
        synchronized (lock) {
            TfTesterApp.previewOrientationLandscape = previewOrientationLandscape;
        }
    }

    public static boolean getPreviewOrientationLandscape() {
        synchronized (lock) {
            return TfTesterApp.previewOrientationLandscape;
        }
    }

    // ----------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------

    private static TextureView previewTextureView;

    public static void setPreviewTextureView(TextureView previewTextureView) {
        synchronized (lock) {
            TfTesterApp.previewTextureView = previewTextureView;
        }
    }

    public static TextureView getPreviewTextureView() {
        synchronized (lock) {
            return TfTesterApp.previewTextureView;
        }
    }

}