package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.app.Fragment;
import android.content.Context;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.hardware.Camera;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraCharacteristics;
import android.hardware.camera2.CameraManager;
import android.hardware.camera2.params.StreamConfigurationMap;
import android.media.Image;
import android.media.ImageReader;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.SystemClock;
import android.os.Trace;
import android.util.Size;
import android.util.TypedValue;
import android.view.Surface;
import android.view.WindowManager;
import android.widget.Toast;

import com.archie.tf_classify_mod.CameraConnectionFragment;
import com.archie.tf_classify_mod.Classifier;
import com.archie.tf_classify_mod.ClassifierApplication;
import com.archie.tf_classify_mod.LegacyCameraConnectionFragment;
import com.archie.tf_classify_mod.OverlayView;
import com.archie.tf_classify_mod.R;
import com.archie.tf_classify_mod.ResultsView;
import com.archie.tf_classify_mod.TensorFlowImageClassifier;
import com.archie.tf_classify_mod.env.BorderedText;
import com.archie.tf_classify_mod.env.ImageUtils;
import com.archie.tf_classify_mod.env.Logger;

import java.nio.ByteBuffer;
import java.util.List;
import java.util.Vector;

import edu.temple.gtc_core.GtcController;

import static com.archie.tf_classify_mod.archie_mods.Constants.DESIRED_PREVIEW_SIZE;
import static com.archie.tf_classify_mod.archie_mods.Constants.EXTRA_TIMED_TEST;
import static com.archie.tf_classify_mod.archie_mods.Constants.EXTRA_TESTING_LABEL;
import static com.archie.tf_classify_mod.archie_mods.Constants.IMAGE_MEAN;
import static com.archie.tf_classify_mod.archie_mods.Constants.IMAGE_STD;
import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_NAME;
import static com.archie.tf_classify_mod.archie_mods.Constants.INPUT_SIZE;
import static com.archie.tf_classify_mod.archie_mods.Constants.LABEL_FILE;
import static com.archie.tf_classify_mod.archie_mods.Constants.MAINTAIN_ASPECT;
import static com.archie.tf_classify_mod.archie_mods.Constants.MODEL_FILE;
import static com.archie.tf_classify_mod.archie_mods.Constants.OUTPUT_NAME;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSIONS_REQUEST;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_CAMERA;
import static com.archie.tf_classify_mod.archie_mods.Constants.PERMISSION_STORAGE;
import static com.archie.tf_classify_mod.archie_mods.Constants.SAVE_PREVIEW_BITMAP;
import static com.archie.tf_classify_mod.archie_mods.Constants.TEXT_SIZE_DIP;

public class ModifiedClassifierActivity extends Activity
        implements ImageReader.OnImageAvailableListener, Camera.PreviewCallback {

    // ----------------------------------------------------------------------------------------
    //          general class properties
    // ----------------------------------------------------------------------------------------
    private static final Logger LOGGER = new Logger();
    private boolean isProcessingFrame = false;

    // ----------------------------------------------------------------------------------------
    //          background thread properties
    // ----------------------------------------------------------------------------------------
    private Handler handler;
    private HandlerThread handlerThread;

    // ----------------------------------------------------------------------------------------
    //          camera connection properties
    // ----------------------------------------------------------------------------------------
    private boolean useCamera2API;
    protected int previewWidth = 0;
    protected int previewHeight = 0;
    private Integer sensorOrientation;

    // ----------------------------------------------------------------------------------------
    //          camera frame pre-processing properties
    // ----------------------------------------------------------------------------------------
    private Matrix frameToCropTransform;
    private Matrix cropToFrameTransform;
    private Bitmap rgbFrameBitmap = null;
    private Bitmap croppedBitmap = null;
    private Bitmap cropCopyBitmap = null;
    private byte[] lastPreviewFrame;
    private byte[][] yuvBytes = new byte[3][];
    private int[] rgbBytes = null;
    private int yRowStride;

    // ----------------------------------------------------------------------------------------
    //          classifier properties
    // ----------------------------------------------------------------------------------------
    private Classifier classifier;
    private Runnable postInferenceCallback;
    private Runnable imageConverter;

    // ----------------------------------------------------------------------------------------
    //          output / app view properties
    // ----------------------------------------------------------------------------------------
    private ResultsView resultsView;
    private BorderedText borderedText;
    private boolean debug = false;
    private long lastProcessingTimeMs;


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          ACTIVITY LIFE CYCLE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    protected void onCreate(final Bundle savedInstanceState) {
        LOGGER.d("onCreate " + this);
        super.onCreate(null);

        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setContentView(R.layout.activity_camera);

        if (getIntent().hasExtra(EXTRA_TIMED_TEST)) {
            Boolean isTesting = getIntent().getBooleanExtra(EXTRA_TIMED_TEST, false);
            LOGGER.i("RECEIVED NOTICE TO QUIT AFTER TEST TIME LIMIT EXPIRES: " + isTesting);
            ((ClassifierApplication) getApplication()).setTesting(isTesting);
        }

        if (getIntent().hasExtra(EXTRA_TESTING_LABEL)) {
            String testingLabel = getIntent().getStringExtra(EXTRA_TESTING_LABEL);
            LOGGER.i("RECEIVED NOTICE TO USE TESTING LABEL: " + testingLabel);
            ((ClassifierApplication) getApplication()).setTestingLabel(testingLabel);
        }

        if (hasPermission()) setFragment();
        else requestPermission();
    }

    @Override
    public synchronized void onStart() {
        LOGGER.d("onStart " + this);
        super.onStart();
    }

    @Override
    public synchronized void onResume() {
        LOGGER.d("onResume " + this);
        ((ClassifierApplication)getApplication()).onResume();
        super.onResume();

        handlerThread = new HandlerThread("inference");
        handlerThread.start();
        handler = new Handler(handlerThread.getLooper());
    }

    @Override
    public synchronized void onPause() {
        LOGGER.d("onPause " + this);
        ((ClassifierApplication)getApplication()).onPause(this);

        if (!isFinishing()) {
            LOGGER.d("Requesting finish");
            finish();
        }

        handlerThread.quitSafely();
        try {
            handlerThread.join();
            handlerThread = null;
            handler = null;
        } catch (final InterruptedException e) {
            LOGGER.e(e, "Exception!");
        }

        super.onPause();
    }

    @Override
    public synchronized void onStop() {
        LOGGER.d("onStop " + this);
        super.onStop();
    }

    @Override
    public synchronized void onDestroy() {
        LOGGER.d("onDestroy " + this);
        ((ClassifierApplication)getApplication()).onDestroy();
        super.onDestroy();
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          PERMISSIONS HANDLING METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions,
                                           final int[] grantResults) {
        if (requestCode == PERMISSIONS_REQUEST) {
            if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED) {
                initializeGtcController();
                setFragment();
            } else {
                requestPermission();
            }
        }
    }

    private boolean hasPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            return checkSelfPermission(PERMISSION_CAMERA) == PackageManager.PERMISSION_GRANTED &&
                    checkSelfPermission(PERMISSION_STORAGE) == PackageManager.PERMISSION_GRANTED;
        } else {
            return true;
        }
    }

    private void requestPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (shouldShowRequestPermissionRationale(PERMISSION_CAMERA) ||
                    shouldShowRequestPermissionRationale(PERMISSION_STORAGE)) {
                Toast.makeText(ModifiedClassifierActivity.this,
                        "Camera AND storage permission are required for this demo", Toast.LENGTH_LONG).show();
            }
            requestPermissions(new String[] {PERMISSION_CAMERA, PERMISSION_STORAGE}, PERMISSIONS_REQUEST);
        }
    }

    private void initializeGtcController() {
        LOGGER.i("All permissions received!  Initializing GTC Controller.");
        GtcController gtcController = new GtcController(ModifiedClassifierActivity.this,
                android.os.Process.myPid(), Constants.PROC_NAME, Constants.CONFIG_FILENAME);
        ((ClassifierApplication)getApplication()).setGtcController(gtcController);

        // NOTE!!  Don't need to start GTC Services because our configuration profile takes care of
        // that for us, once all of the necessary sensors are initialized
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          CAMERA INITIALIZATION METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    protected void setFragment() {
        String cameraId = chooseCamera();
        if (cameraId == null) {
            Toast.makeText(this, "No Camera Detected", Toast.LENGTH_SHORT).show();
            finish();
        }

        final ClassifierApplication app = (ClassifierApplication) getApplication();
        Fragment fragment;
        if (useCamera2API) {
            CameraConnectionFragment camera2Fragment = CameraConnectionFragment.newInstance(
                    new CameraConnectionFragment.ConnectionCallback() {
                        @Override
                        public void onPreviewSizeChosen(final Size size, final int rotation) {
                            previewHeight = size.getHeight();
                            previewWidth = size.getWidth();
                            ModifiedClassifierActivity.this.onPreviewSizeChosen(size, rotation);
                        }
                    },
                    this,
                    getLayoutId(),
                    app.getDesiredPreviewSize());
            camera2Fragment.setCamera(cameraId);
            fragment = camera2Fragment;
        } else {
            fragment = new LegacyCameraConnectionFragment(this,
                    getLayoutId(), DESIRED_PREVIEW_SIZE);
        }

        getFragmentManager()
                .beginTransaction()
                .replace(R.id.container, fragment)
                .commit();
    }

    private String chooseCamera() {
        final CameraManager manager = (CameraManager) getSystemService(Context.CAMERA_SERVICE);
        try {
            for (final String cameraId : manager.getCameraIdList()) {
                final CameraCharacteristics characteristics = manager.getCameraCharacteristics(cameraId);

                // We don't use a front facing camera in this sample.
                final Integer facing = characteristics.get(CameraCharacteristics.LENS_FACING);
                if (facing != null && facing == CameraCharacteristics.LENS_FACING_FRONT) {
                    continue;
                }

                final StreamConfigurationMap map =
                        characteristics.get(CameraCharacteristics.SCALER_STREAM_CONFIGURATION_MAP);

                if (map == null) {
                    continue;
                }

                // Fallback to camera1 API for internal cameras that don't have full support.
                // This should help with legacy situations where using the camera2 API causes
                // distorted or otherwise broken previews.
                useCamera2API = (facing == CameraCharacteristics.LENS_FACING_EXTERNAL)
                        || isHardwareLevelSupported(characteristics,
                        CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL_FULL);
                LOGGER.i("Camera API lv2?: %s", useCamera2API);
                return cameraId;
            }
        } catch (CameraAccessException e) {
            LOGGER.e(e, "Not allowed to access camera");
        }

        return null;
    }

    private void onPreviewSizeChosen(final Size size, final int rotation) {
        final float textSizePx = TypedValue.applyDimension(
                TypedValue.COMPLEX_UNIT_DIP, TEXT_SIZE_DIP, getResources().getDisplayMetrics());
        borderedText = new BorderedText(textSizePx);
        borderedText.setTypeface(Typeface.MONOSPACE);

        classifier = TensorFlowImageClassifier.create(getAssets(), MODEL_FILE, LABEL_FILE,
                INPUT_SIZE, IMAGE_MEAN, IMAGE_STD, INPUT_NAME, OUTPUT_NAME);

        previewWidth = size.getWidth();
        previewHeight = size.getHeight();

        sensorOrientation = rotation - getScreenOrientation();
        LOGGER.i("Camera orientation relative to screen canvas: %d", sensorOrientation);

        LOGGER.i("Initializing at size %dx%d", previewWidth, previewHeight);
        rgbFrameBitmap = Bitmap.createBitmap(previewWidth, previewHeight, Bitmap.Config.ARGB_8888);
        croppedBitmap = Bitmap.createBitmap(INPUT_SIZE, INPUT_SIZE, Bitmap.Config.ARGB_8888);

        frameToCropTransform = ImageUtils.getTransformationMatrix(previewWidth, previewHeight,
                INPUT_SIZE, INPUT_SIZE, sensorOrientation, MAINTAIN_ASPECT);

        cropToFrameTransform = new Matrix();
        frameToCropTransform.invert(cropToFrameTransform);

        addCallback(new OverlayView.DrawCallback() {
            @Override
                public void drawCallback(final Canvas canvas) {
                    renderDebug(canvas);
                }
            });
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          CAMERA EVENT / INTERFACE LISTENERS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    @Override
    public void onPreviewFrame(final byte[] bytes, final Camera camera) {
        if (isProcessingFrame) {
            LOGGER.w("Dropping frame!");
            return;
        }

        try {
            // Initialize the storage bitmaps once when the resolution is known.
            if (rgbBytes == null) {
                Camera.Size previewSize = camera.getParameters().getPreviewSize();
                previewHeight = previewSize.height;
                previewWidth = previewSize.width;
                rgbBytes = new int[previewWidth * previewHeight];
                onPreviewSizeChosen(new Size(previewSize.width, previewSize.height), 90);
            }
        } catch (final Exception e) {
            LOGGER.e(e, "Exception!");
            return;
        }

        isProcessingFrame = true;
        lastPreviewFrame = bytes;
        yuvBytes[0] = bytes;
        yRowStride = previewWidth;

        imageConverter = new Runnable() {
            @Override
            public void run() {
                ImageUtils.convertYUV420SPToARGB8888(bytes, previewWidth, previewHeight, rgbBytes);
            }
        };

        postInferenceCallback = new Runnable() {
            @Override
            public void run() {
                camera.addCallbackBuffer(bytes);
                isProcessingFrame = false;
            }
        };

        processImage();
    }

    /**
     * Callback for Camera2 API
     */
    @Override
    public void onImageAvailable(final ImageReader reader) {
        //We need wait until we have some size from onPreviewSizeChosen
        if (previewWidth == 0 || previewHeight == 0) return;

        if (rgbBytes == null)
            rgbBytes = new int[previewWidth * previewHeight];

        try {
            final Image image = reader.acquireLatestImage();
            if (image == null) return;

            if (isProcessingFrame) {
                image.close();
                return;
            }

            isProcessingFrame = true;
            ((ClassifierApplication)getApplication()).onPreprocessStart();
            Trace.beginSection("imageAvailable");

            final Image.Plane[] planes = image.getPlanes();
            fillBytes(planes, yuvBytes);
            yRowStride = planes[0].getRowStride();
            final int uvRowStride = planes[1].getRowStride();
            final int uvPixelStride = planes[1].getPixelStride();

            imageConverter = new Runnable() {
                @Override
                public void run() {
                    ImageUtils.convertYUV420ToARGB8888(yuvBytes[0], yuvBytes[1], yuvBytes[2],
                            previewWidth, previewHeight, yRowStride, uvRowStride,
                            uvPixelStride, rgbBytes);
                }
            };

            postInferenceCallback = new Runnable() {
                @Override
                public void run() {
                    image.close();
                    isProcessingFrame = false;
                }};

            processImage();
        } catch (final Exception e) {
            LOGGER.e(e, "Exception!");
            Trace.endSection();
            return;
        }

        Trace.endSection();
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          CLASSIFICATION METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    protected void processImage() {
        rgbFrameBitmap.setPixels(getRgbBytes(), 0, previewWidth, 0, 0, previewWidth, previewHeight);
        final Canvas canvas = new Canvas(croppedBitmap);
        canvas.drawBitmap(rgbFrameBitmap, frameToCropTransform, null);

        // For examining the actual TF input.
        if (SAVE_PREVIEW_BITMAP) {
            ImageUtils.saveBitmap(croppedBitmap);
        }

        ((ClassifierApplication)getApplication()).onPreprocessComplete();
        runInBackground(new Runnable() {
            @Override
            public void run() {
                final long startTime = SystemClock.uptimeMillis();
                final List<Classifier.Recognition> results =
                        classifier.recognizeImage(ModifiedClassifierActivity.this, croppedBitmap);
                lastProcessingTimeMs = SystemClock.uptimeMillis() - startTime;
                LOGGER.i("Detect: %s", results);
                cropCopyBitmap = Bitmap.createBitmap(croppedBitmap);
                if (resultsView == null) {
                    resultsView = (ResultsView) findViewById(R.id.results);
                }
                resultsView.setResults(results);
                requestRender();
                readyForNextImage();
            }
        });
    }

    private void readyForNextImage() {
        if (postInferenceCallback != null) {
            postInferenceCallback.run();
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          OUTPUT, UI UPDATER METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    private void requestRender() {
        final OverlayView overlay = (OverlayView) findViewById(R.id.debug_overlay);
        if (overlay != null) {
            overlay.postInvalidate();
        }
    }

    private void addCallback(final OverlayView.DrawCallback callback) {
        final OverlayView overlay = (OverlayView) findViewById(R.id.debug_overlay);
        if (overlay != null) {
            overlay.addCallback(callback);
        }
    }

    private void renderDebug(final Canvas canvas) {
        // only display the debug overlay if the property is explicitly set
        if (!debug) return;

        final Bitmap copy = cropCopyBitmap;
        if (copy != null) {
            final Matrix matrix = new Matrix();
            final float scaleFactor = 2;
            matrix.postScale(scaleFactor, scaleFactor);
            matrix.postTranslate(
                    canvas.getWidth() - copy.getWidth() * scaleFactor,
                    canvas.getHeight() - copy.getHeight() * scaleFactor);
            canvas.drawBitmap(copy, matrix, new Paint());

            final Vector<String> lines = new Vector<String>();
            if (classifier != null) {
                String statString = classifier.getStatString();
                String[] statLines = statString.split("\n");
                for (String line : statLines) {
                    lines.add(line);
                }
            }

            lines.add("Frame: " + previewWidth + "x" + previewHeight);
            lines.add("Crop: " + copy.getWidth() + "x" + copy.getHeight());
            lines.add("View: " + canvas.getWidth() + "x" + canvas.getHeight());
            lines.add("Rotation: " + sensorOrientation);
            lines.add("Inference time: " + lastProcessingTimeMs + "ms");

            borderedText.drawLines(canvas, 10, canvas.getHeight() - 10, lines);
        }
    }


    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------
    //          GENERAL GETTERS, SETTERS, AND REFERENCE METHODS
    // ----------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------


    // Returns true if the device supports the required hardware level, or better.
    private boolean isHardwareLevelSupported(
            CameraCharacteristics characteristics, int requiredLevel) {
        int deviceLevel = characteristics.get(CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL);
        if (deviceLevel == CameraCharacteristics.INFO_SUPPORTED_HARDWARE_LEVEL_LEGACY) {
            return requiredLevel == deviceLevel;
        }
        // deviceLevel is not LEGACY, can use numerical sort
        return requiredLevel <= deviceLevel;
    }

    private int getLayoutId() {
        return R.layout.camera_connection_fragment;
    }

    private int getScreenOrientation() {
        switch (getWindowManager().getDefaultDisplay().getRotation()) {
            case Surface.ROTATION_270:
                return 270;
            case Surface.ROTATION_180:
                return 180;
            case Surface.ROTATION_90:
                return 90;
            default:
                return 0;
        }
    }

    private void fillBytes(final Image.Plane[] planes, final byte[][] yuvBytes) {
        // Because of the variable row stride it's not possible to know in
        // advance the actual necessary dimensions of the yuv planes.
        for (int i = 0; i < planes.length; ++i) {
            final ByteBuffer buffer = planes[i].getBuffer();
            if (yuvBytes[i] == null) {
                LOGGER.d("Initializing buffer %d at size %d", i, buffer.capacity());
                yuvBytes[i] = new byte[buffer.capacity()];
            }
            buffer.get(yuvBytes[i]);
        }
    }

    private int[] getRgbBytes() {
        imageConverter.run();
        return rgbBytes;
    }

    private synchronized void runInBackground(final Runnable r) {
        if (handler != null) {
            handler.post(r);
        }
    }

}