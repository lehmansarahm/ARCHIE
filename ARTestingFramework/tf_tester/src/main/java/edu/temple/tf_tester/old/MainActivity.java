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
import android.os.Handler;
import android.os.HandlerThread;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.util.Size;
import android.view.Surface;
import android.view.TextureView;

import java.util.ArrayList;
import java.util.List;

import edu.temple.tf_tester.R;
import edu.temple.tf_tester.utils.Constants;

public class MainActivity extends AppCompatActivity {

    private CameraManager cameraManager;
    private CameraDevice cameraDevice;
    private int cameraDirection;
    private String cameraId;

    private TextureView.SurfaceTextureListener surfaceTextureListener;
    private TextureView textureView;
    private Size previewSize;

    private CameraDevice.StateCallback stateCallback;
    private CameraCaptureSession cameraCaptureSession;
    private CaptureRequest.Builder captureRequestBuilder;
    private CaptureRequest captureRequest;

    private ImageReader imageReader;
    private ImageReader.OnImageAvailableListener imageReaderListener;

    private HandlerThread cameraThread, imageReaderThread;
    private Handler cameraHandler, imageReaderHandler;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textureView = findViewById(R.id.texture_view);

        boolean hasPermissions = true;
        for (int i = 0; i < Constants.REQUIRED_PERMISSIONS.length; i++)
            hasPermissions &= (ActivityCompat.checkSelfPermission(this, Constants.REQUIRED_PERMISSIONS[i]) == PackageManager.PERMISSION_GRANTED);

        if (hasPermissions) {
            Log.d(Constants.TAG, "All permissions have been provided!  Continue to camera view!");
            initializeCameraView();
        } else {
            Log.d(Constants.TAG, "Some permissions are missing ... continue to permission request!");
            ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS, Constants.PERMISSIONS_REQUEST);
        }
    }

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case Constants.PERMISSIONS_REQUEST: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted) initializeCameraView();
                else ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS, Constants.PERMISSIONS_REQUEST);
            }
        }
    }

    private void initializeCameraView() {
        cameraManager = (CameraManager) getSystemService(Context.CAMERA_SERVICE);
        cameraDirection = CameraCharacteristics.LENS_FACING_BACK;

        surfaceTextureListener = new TextureView.SurfaceTextureListener() {
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

        stateCallback = new CameraDevice.StateCallback() {
            @Override
            public void onOpened(CameraDevice cameraDevice) {
                Log.d(Constants.TAG, "Camera has been opened!");
                MainActivity.this.cameraDevice = cameraDevice;
                createPreviewSession();
            }

            @Override
            public void onDisconnected(CameraDevice cameraDevice) {
                Log.d(Constants.TAG, "Camera has been closed!");
                cameraDevice.close();
                MainActivity.this.cameraDevice = null;
            }

            @Override
            public void onError(CameraDevice cameraDevice, int error) {
                Log.d(Constants.TAG, "Camera has been closed due to error!");
                cameraDevice.close();
                MainActivity.this.cameraDevice = null;
            }
        };

        imageReaderListener = new ImageReader.OnImageAvailableListener() {
            @Override
            public void onImageAvailable(ImageReader reader) {
                Log.d(Constants.TAG, "New image available!");
            }
        };
    }

    private void setUpCamera() {
        try {
            for (String cameraId : cameraManager.getCameraIdList()) {
                CameraCharacteristics cameraCharacteristics = cameraManager.getCameraCharacteristics(cameraId);
                if (cameraCharacteristics.get(CameraCharacteristics.LENS_FACING) == cameraDirection) {
                    Log.d(Constants.TAG, "Back-facing camera found!  Set the preview size and camera ID.");
                    StreamConfigurationMap streamConfigurationMap =
                            cameraCharacteristics.get(CameraCharacteristics.SCALER_STREAM_CONFIGURATION_MAP);
                    previewSize = streamConfigurationMap.getOutputSizes(SurfaceTexture.class)[0];
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
                imageReader = ImageReader.newInstance(previewSize.getWidth(), previewSize.getHeight(),
                        ImageFormat.YUV_420_888, 3);
                imageReader.setOnImageAvailableListener(imageReaderListener, imageReaderHandler);
                //imageReader.setOnImageAvailableListener(new ImageReaderListener(MainActivity.this,
                //        previewSize.getHeight(), previewSize.getWidth(), Constants.ROTATION), cameraHandler);
                imageReader.acquireNextImage();

                Log.d(Constants.TAG, "Image Reader initialized ... ready to open camera!");
                cameraManager.openCamera(cameraId, stateCallback, cameraHandler);
            }
        } catch (CameraAccessException e) {
            Log.e(Constants.TAG, "Error encountered while trying to open the camera!");
            e.printStackTrace();
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        openBackgroundThreads();

        if (textureView.isAvailable()) {
            setUpCamera();
            openCamera();
        } else {
            textureView.setSurfaceTextureListener(surfaceTextureListener);
        }
    }

    private void openBackgroundThreads() {
        cameraThread = new HandlerThread("camera_background_thread");
        cameraThread.start();
        cameraHandler = new Handler(cameraThread.getLooper());

        imageReaderThread = new HandlerThread("image_reader_background_thread");
        imageReaderThread.start();
        imageReaderHandler = new Handler(imageReaderThread.getLooper());

        Log.d(Constants.TAG, "Background threads and handlers opened!");
    }

    @Override
    protected void onStop() {
        super.onStop();
        closeCamera();
        closeBackgroundThreads();
    }

    private void closeCamera() {
        if (cameraCaptureSession != null) {
            cameraCaptureSession.close();
            cameraCaptureSession = null;
        }

        if (cameraDevice != null) {
            cameraDevice.close();
            cameraDevice = null;
        }
    }

    private void closeBackgroundThreads() {
        if (cameraHandler != null) {
            cameraThread.quitSafely();
            cameraThread = null;
            cameraHandler = null;
        }
        if (imageReaderHandler != null) {
            imageReaderThread.quitSafely();
            imageReaderThread = null;
            imageReaderHandler = null;
        }
        Log.d(Constants.TAG, "Background threads and handlers closed!");
    }

    private void createPreviewSession() {
        try {
            SurfaceTexture surfaceTexture = textureView.getSurfaceTexture();
            surfaceTexture.setDefaultBufferSize(previewSize.getWidth(), previewSize.getHeight());
            Surface previewSurface = new Surface(surfaceTexture);

            captureRequestBuilder = cameraDevice.createCaptureRequest(CameraDevice.TEMPLATE_PREVIEW);
            captureRequestBuilder.addTarget(previewSurface);
            // captureRequestBuilder.addTarget(imageReader.getSurface());

            List<Surface> surfaceList = new ArrayList<>();
            surfaceList.add(previewSurface);
            // surfaceList.add(imageReader.getSurface());

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
                                MainActivity.this.cameraCaptureSession = cameraCaptureSession;
                                MainActivity.this.cameraCaptureSession.setRepeatingRequest(captureRequest,
                                        null, cameraHandler);
                                Log.d(Constants.TAG, "Capture request set!");
                            } catch (CameraAccessException e) {
                                e.printStackTrace();
                                Log.e(Constants.TAG, "Failed to set camera capture request...", e);
                            }
                        }

                        @Override
                        public void onConfigureFailed(CameraCaptureSession cameraCaptureSession) { /* empty */ }
                    }, cameraHandler);
        } catch (CameraAccessException e) {
            e.printStackTrace();
        }
    }

}