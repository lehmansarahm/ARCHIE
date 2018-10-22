package edu.temple.tf_tester.old;

import android.content.Context;
import android.content.pm.PackageManager;
import android.graphics.ImageFormat;
import android.graphics.SurfaceTexture;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCaptureSession;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraDevice;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.CaptureRequest;
import android.hardware.camera2.params.StreamConfigurationMap;
import android.media.ImageReader;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.util.Size;
import android.view.Surface;
import android.view.TextureView;

import java.util.ArrayList;
import java.util.List;

import edu.temple.tf_tester.utils.Constants;
import edu.temple.tf_tester.R;

public abstract class CameraPreviewActivity extends AppCompatActivity {

    private static final int CAMERA_DIRECTION = CameraCharacteristics.LENS_FACING_BACK;

    protected CameraManager cameraManager;
    private CameraDevice cameraDevice;
    private String cameraId;

    private Size previewSize;
    protected TextureView textureView;

    private TextureView.SurfaceTextureListener surfaceTextureListener = new TextureView.SurfaceTextureListener() {
        @Override
        public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int width, int height) {
            Log.d(Constants.TAG, "Surface texture available!  Open the camera!");
            setUpCamera();
            openCamera();
        }

        @Override
        public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int width, int height) { /* empty */ }

        @Override
        public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) { return false; }

        @Override
        public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) { /* empty */ }
    };

    private CameraCaptureSession cameraCaptureSession;
    private CaptureRequest.Builder captureRequestBuilder;
    private CaptureRequest captureRequest;

    private ImageReader imageReader;
    private ImageReader.OnImageAvailableListener imageAvailableListener;

    private HandlerThread backgroundThread;
    private Handler backgroundHandler;

    private CameraDevice.StateCallback stateCallback = new CameraDevice.StateCallback() {
        @Override
        public void onOpened(CameraDevice cameraDevice) {
            Log.d(Constants.TAG, "Camera has been opened!");
            CameraPreviewActivity.this.cameraDevice = cameraDevice;
            createPreviewSession();
        }

        @Override
        public void onDisconnected(CameraDevice cameraDevice) {
            Log.d(Constants.TAG, "Camera has been closed!");
            cameraDevice.close();
            CameraPreviewActivity.this.cameraDevice = null;
        }

        @Override
        public void onError(CameraDevice cameraDevice, int error) {
            Log.d(Constants.TAG, "Camera has been closed due to error!");
            cameraDevice.close();
            CameraPreviewActivity.this.cameraDevice = null;
        }
    };

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        textureView = findViewById(R.id.texture_view);

        boolean hasPermissions = true;
        for (int i = 0; i < Constants.REQUIRED_PERMISSIONS.length; i++)
            hasPermissions &= (ActivityCompat.checkSelfPermission(this, Constants.REQUIRED_PERMISSIONS[i]) == PackageManager.PERMISSION_GRANTED);

        if (hasPermissions) {
            Log.d(Constants.TAG, "All permissions have been provided!  Access Camera Manager.");
            cameraManager = (CameraManager) getSystemService(Context.CAMERA_SERVICE);
        } else {
            Log.d(Constants.TAG, "Some permissions are missing ... continue to permission request!");
            ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS, Constants.PERMISSIONS_REQUEST);
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        openBackgroundThread();
        updateTextureView();
    }

    @Override
    protected void onStop() {
        Log.d(Constants.TAG, "App has stopped!");
        super.onStop();
        closeCamera();
        closeBackgroundThread();
    }

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case Constants.PERMISSIONS_REQUEST: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted)
                    cameraManager = (CameraManager) getSystemService(Context.CAMERA_SERVICE);
                else {
                    ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS,
                            Constants.PERMISSIONS_REQUEST);
                }
            }
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    protected void openBackgroundThread() {
        backgroundThread = new HandlerThread("camera_background_thread");
        backgroundThread.start();
        backgroundHandler = new Handler(backgroundThread.getLooper());
        Log.d(Constants.TAG, "Background thread and handler opened!");
    }

    protected void closeBackgroundThread() {
        if (backgroundHandler != null) {
            backgroundThread.quitSafely();
            backgroundThread = null;
            backgroundHandler = null;
            Log.d(Constants.TAG, "Background thread and handler closed!");
        }
    }

    protected void updateTextureView() {
        if (textureView.isAvailable()) {
            setUpCamera();
            openCamera();
        } else {
            textureView.setSurfaceTextureListener(surfaceTextureListener);
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private void setUpCamera() {
        try {
            for (String cameraId : cameraManager.getCameraIdList()) {
                CameraCharacteristics cameraCharacteristics = cameraManager.getCameraCharacteristics(cameraId);
                if (cameraCharacteristics.get(CameraCharacteristics.LENS_FACING) == CAMERA_DIRECTION) {
                    Log.d(Constants.TAG, "Back-facing camera found!  Set the preview size and camera ID.");
                    StreamConfigurationMap streamConfigurationMap =
                            cameraCharacteristics.get(CameraCharacteristics.SCALER_STREAM_CONFIGURATION_MAP);

                    Size[] possiblePreviewSizes = streamConfigurationMap.getOutputSizes(SurfaceTexture.class);
                    for (Size possiblePreviewSize : possiblePreviewSizes) {
                        Log.e(Constants.TAG, "Possible preview size found..."
                            + "\t\t Height: " + possiblePreviewSize.getHeight()
                            + "\t\t Width: " + possiblePreviewSize.getWidth());
                    }

                    previewSize = possiblePreviewSizes[0];  // take the first one by default for now
                    this.cameraId = cameraId;
                }
            }
        } catch (CameraAccessException e) {
            Log.e(Constants.TAG, "Error encountered while trying to set up the camera!");
            e.printStackTrace();
        }
    }

    private void openCamera() {
        try {
            if (ActivityCompat.checkSelfPermission(this, android.Manifest.permission.CAMERA) == PackageManager.PERMISSION_GRANTED) {
                Log.d(Constants.TAG, "Camera permissions obtained ... ready to init Image Reader!");
                imageAvailableListener = null; //new ImageReaderListener(CameraPreviewActivity.this,
                        // previewSize.getHeight(), previewSize.getWidth(), Constants.ROTATION);
                imageReader = ImageReader.newInstance(previewSize.getWidth(), previewSize.getHeight(),
                        ImageFormat.YUV_420_888, 3);
                imageReader.setOnImageAvailableListener(imageAvailableListener, backgroundHandler);
                imageReader.acquireNextImage();

                Log.d(Constants.TAG, "Image Reader initialized ... ready to open camera!");
                cameraManager.openCamera(cameraId, stateCallback, backgroundHandler);
            }
        } catch (CameraAccessException e) {
            Log.e(Constants.TAG, "Error encountered while trying to open the camera!");
            e.printStackTrace();
        }
    }

    protected void closeCamera() {
        if (cameraCaptureSession != null) {
            cameraCaptureSession.close();
            cameraCaptureSession = null;
        }

        if (cameraDevice != null) {
            cameraDevice.close();
            cameraDevice = null;
        }
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private void createPreviewSession() {
        try {
            SurfaceTexture surfaceTexture = textureView.getSurfaceTexture();
            surfaceTexture.setDefaultBufferSize(previewSize.getWidth(), previewSize.getHeight());
            Surface previewSurface = new Surface(surfaceTexture);

            captureRequestBuilder = cameraDevice.createCaptureRequest(CameraDevice.TEMPLATE_PREVIEW);
            captureRequestBuilder.addTarget(previewSurface);
            captureRequestBuilder.addTarget(imageReader.getSurface());

            List<Surface> surfaceList = new ArrayList<>();
            surfaceList.add(previewSurface);
            surfaceList.add(imageReader.getSurface());

            cameraDevice.createCaptureSession(surfaceList,
                    new CameraCaptureSession.StateCallback() {
                        @Override
                        public void onConfigured(CameraCaptureSession cameraCaptureSession) {
                            if (cameraDevice == null) {
                                Log.e(Constants.TAG, "No camera device!  Cannot start capture request.");
                                return;
                            }

                            try {
                                captureRequest = captureRequestBuilder.build();
                                CameraPreviewActivity.this.cameraCaptureSession = cameraCaptureSession;
                                CameraPreviewActivity.this.cameraCaptureSession.setRepeatingRequest(captureRequest,
                                        null, backgroundHandler);
                                Log.d(Constants.TAG, "Capture request set!");
                            } catch (CameraAccessException e) {
                                e.printStackTrace();
                                Log.e(Constants.TAG, "Failed to set camera capture request...", e);
                            }
                        }

                        @Override
                        public void onConfigureFailed(CameraCaptureSession cameraCaptureSession) { /* empty */ }
                    }, backgroundHandler);
        } catch (CameraAccessException e) {
            e.printStackTrace();
        }
    }

}