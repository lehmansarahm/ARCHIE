package edu.temple.tf_tester.old;

import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Rect;
import android.graphics.SurfaceTexture;
import android.graphics.YuvImage;
import android.hardware.Camera;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v4.app.ActivityCompat;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.TextureView;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.List;
import java.util.concurrent.TimeUnit;

import edu.temple.gtc_core.GtcController;
import edu.temple.gtc_core.ConfigFileReader;
import edu.temple.tf_tester.R;
import edu.temple.tf_tester.classifiers.BaseTFImageClassifier;
import edu.temple.tf_tester.utils.Constants;

// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
//
//          HEAR YE, HEAR YE!!!!!
//
//          THIS APP USES THE ORIGINAL V1 CAMERA API BECAUSE THAT'S WHAT WORKS WITH
//          OUR HARDWARE ...
//
//          ... YES IT SUCKS, I KNOW.  DON'T HATE ME.
//
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------

public class OldCameraActivity { // extends AppCompatActivity implements Camera.PreviewCallback, IGtcCallbackListener {

    /*// --------------------------------------------------------------------------------------------
    //      Constants
    // --------------------------------------------------------------------------------------------
    private static final int CAMERA_DIRECTION = Camera.CameraInfo.CAMERA_FACING_BACK;

    private static final String DESIRED_RESULT = "daisy";
    private static final int DESIRED_RESULT_TIME_LIMIT_MIN = 1;         // one minute (60k milliseconds)
    private static final long DESIRED_RESULT_TIME_LIMIT_MS = TimeUnit.MINUTES.toMillis(DESIRED_RESULT_TIME_LIMIT_MIN);
    private static final int DESIRED_RESULT_MATCH_LIMIT = 10;           // should be able to match 10 frames in 1min
    // --------------------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------------------
    //      Pseudo-constants
    // --------------------------------------------------------------------------------------------
    private static boolean WAIT_FOR_FRAME = true;
    private static boolean PROCESSING_FRAME = false;
    private static boolean HAS_PERMISSIONS;
    // --------------------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------------------
    //      Class properties
    // --------------------------------------------------------------------------------------------
    private static Camera mCamera;
    private static int mCameraID;
    private static byte[] previewData;
    private static Camera previewCamera;

    private static TextureView mPreviewTextureView;
    private static TextureView.SurfaceTextureListener mPreviewTextureListener;

    private static int currentMatchCount = 0;
    private static long timeOfFirstMatch = 0;
    // --------------------------------------------------------------------------------------------


    // --------------------------------------------------------------------------------------------
    //      GTC, TensorFlow-specific properties
    // --------------------------------------------------------------------------------------------
    private static final String PROC_NAME = "TF_Tester";
    private static final String EVENT_LABEL = "Image Classification";

    private static GtcController gtcController;
    private static BaseTFImageClassifier classifier;
    private static String classificationResult = "ERROR";

    private static int PREVIEW_WIDTH;       // set in "onTestProfileReady()"
    private static int PREVIEW_HEIGHT;      // set in "onTestProfileReady()"
    // --------------------------------------------------------------------------------------------


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      ACTIVITY LIFE CYCLE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mPreviewTextureView = findViewById(R.id.texture_view);

        HAS_PERMISSIONS = true;
        for (int i = 0; i < Constants.REQUIRED_PERMISSIONS.length; i++)
            HAS_PERMISSIONS &= (ActivityCompat.checkSelfPermission(this,
                    Constants.REQUIRED_PERMISSIONS[i]) == PackageManager.PERMISSION_GRANTED);

        if (HAS_PERMISSIONS) {
            Log.d(Constants.TAG, "All permissions have been provided!  Initialize GTC Controller and continue to camera view!");
            initializePreview();
        } else {
            Log.d(Constants.TAG, "Some permissions are missing ... continue to permission request!");
            ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS, Constants.PERMISSIONS_REQUEST);
        }
    }

    @Override
    public void onResume() {
        super.onResume();
        initializePreview();
    }

    @Override
    public void onPause() {
        if (gtcController != null)
            gtcController.stopServices();
        if (mCamera != null) {
            mCamera.release();
            mCamera = null;
        }
        super.onPause();
    }

    @Override
    public void onRequestPermissionsResult(final int requestCode, final String[] permissions, final int[] grantResults) {
        switch (requestCode) {
            case Constants.PERMISSIONS_REQUEST: {
                boolean permissionGranted = (grantResults.length > 0);
                for (int i = 0; i < grantResults.length; i++)
                    permissionGranted &= (grantResults[i] == PackageManager.PERMISSION_GRANTED);

                if (permissionGranted) {
                    HAS_PERMISSIONS = true;
                    initializePreview();
                }
                else ActivityCompat.requestPermissions(this, Constants.REQUIRED_PERMISSIONS, Constants.PERMISSIONS_REQUEST);
            }
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      CAMERA V1 API LISTENER METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    @Override
    public void onPreviewFrame(final byte[] data, final Camera camera) {
        // Log.e(Constants.TAG, "RECEIVED PREVIEW FRAME IN FORMAT: "
        //         + (camera.getParameters().getPreviewFormat() == ImageFormat.NV21 ? "NV" : "Other"));
        // Log.d(Constants.TAG, "Ready to classify preview frame!\n\n");

        if (!WAIT_FOR_FRAME || !PROCESSING_FRAME) {
            previewData = data;
            previewCamera = camera;

            // received a preview frame, and app is not currently processing another frame ...
            // inform the GTC controller that we're ready to begin classification
            gtcController.logClassification(EVENT_LABEL);
        } else if (PROCESSING_FRAME) {
            Log.e(Constants.TAG, "Can't process frame - another frame is being processed.");
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      GTC CONTROLLER LISTENER METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    public String onClassificationClockStart(String eventLabel) {
        if (eventLabel.equalsIgnoreCase(EVENT_LABEL)) {
            AsyncTask.execute(new Runnable() {
                @Override
                public void run() {
                    OldCameraActivity.PROCESSING_FRAME = true;

                    try {
                        Camera.Parameters parameters = previewCamera.getParameters();
                        int width = parameters.getPreviewSize().width;
                        int height = parameters.getPreviewSize().height;
                        ByteArrayOutputStream out = new ByteArrayOutputStream();

                        YuvImage yuv = new YuvImage(previewData, parameters.getPreviewFormat(), width, height, null);
                        yuv.compressToJpeg(new Rect(0, 0, width, height), 100, out);

                        byte[] bytes = out.toByteArray();
                        final Bitmap rawBitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.length);
                        final Bitmap scaledBitmap = null; // Bitmap.createScaledBitmap(rawBitmap, Constants.INPUT_SIZE, Constants.INPUT_SIZE, false);

                        List<BaseTFImageClassifier.Recognition> results = classifier.recognizeImage(scaledBitmap);
                        classificationResult = results.get(0).getTitle();
                        processTopResult(scaledBitmap, classificationResult);
                    } catch (OutOfMemoryError ex) {
                        Log.e(Constants.TAG, "Ran out of memory to process this image.");
                    } catch (Exception ex) {
                        Log.e(Constants.TAG, "Something went wrong while processing new preview frame.");
                    }

                    OldCameraActivity.PROCESSING_FRAME = false;
                }
            });
        } else {
            Log.e(Constants.TAG, "Unrecognized event label received!");
        }

        return classificationResult;
    }

    public void onTestProfileReady(final ConfigFileReader.TestingProfile currentProfile) {
        Log.e(Constants.TAG, "RECEIVED NEW TEST PROFILE: " + currentProfile.name);
        PREVIEW_HEIGHT = currentProfile.preview_height;     // default value = 640
        PREVIEW_WIDTH = currentProfile.preview_width;       // default value = 480

        mPreviewTextureListener = new TextureView.SurfaceTextureListener() {
            @Override
            public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int width, int height) {
                Log.d(Constants.TAG, "Surface texture available!");
                mCameraID = findCameraID(CAMERA_DIRECTION);
                if (mCameraID < 0) Log.e(Constants.TAG, "No back-facing camera found!");
                else {
                    try {
                        mCamera = Camera.open(mCameraID);
                        Camera.Parameters parameters = mCamera.getParameters();

                        // possible that camera will display preview on its size (landscape mode)
                        // ... but we want it in portrait mode!  Flip dimensions if necessary
                        Camera.Size previewSize = parameters.getPreviewSize();
                        boolean isLandscape = (previewSize.width > previewSize.height);

                        // update the display based on landscape vs. portrait mode
                        if (isLandscape) {
                            surfaceTexture.setDefaultBufferSize(PREVIEW_HEIGHT, PREVIEW_WIDTH);
                            parameters.setPreviewSize(PREVIEW_HEIGHT, PREVIEW_WIDTH);
                            mCamera.setDisplayOrientation(90);
                        } else {
                            surfaceTexture.setDefaultBufferSize(PREVIEW_WIDTH, PREVIEW_HEIGHT);
                            parameters.setPreviewSize(PREVIEW_WIDTH, PREVIEW_HEIGHT);
                        }

                        Log.e(Constants.TAG, "Using test profile values to start new camera preview with height: "
                                + PREVIEW_HEIGHT + ", and width: " + PREVIEW_WIDTH);

                        mCamera.setPreviewCallback(OldCameraActivity.this);
                        mCamera.setPreviewTexture(mPreviewTextureView.getSurfaceTexture());
                        mCamera.startPreview();
                    } catch (IOException ex) {
                        Log.e(Constants.TAG, "Something went wrong while trying to set camera preview texture!", ex);
                    }
                }
            }

            @Override
            public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int width, int height) {  }

            @Override
            public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) { return false; }

            @Override
            public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {  }
        };

        mPreviewTextureView.setSurfaceTextureListener(mPreviewTextureListener);
        if (mPreviewTextureView.isAvailable()) {
            Log.i(Constants.TAG,"Surface texture is already available!  Calling availability method directly.");
            mPreviewTextureListener.onSurfaceTextureAvailable(mPreviewTextureView.getSurfaceTexture(),
                    mPreviewTextureView.getWidth(), mPreviewTextureView.getHeight());
        }
    }


    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    //
    //      PRIVATE REFERENCE METHODS
    //
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --
    // --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --  --


    private void initializePreview() {
        // init TensorFlow image classifier
        classifier = null; // BaseTFImageClassifier.create(this.getAssets(), Constants.MODEL_FILE,
                // Constants.LABEL_FILE, Constants.INPUT_SIZE, Constants.IMAGE_MEAN,
                // Constants.IMAGE_STD, Constants.INPUT_NAME, Constants.OUTPUT_NAME);

        // init GTC controller
        if (gtcController == null)
            gtcController = new GtcController(this, this, android.os.Process.myPid(),
                    PROC_NAME, null); // Constants.CONFIG_FILE);

        // start up GTC services and data collection
        gtcController.startServices();
        gtcController.scheduleAsyncDataCollection(DESIRED_RESULT);
    }

    private int findCameraID(int facingIndex) {
        int numberOfCameras = Camera.getNumberOfCameras();
        for (int i = 0; i < numberOfCameras; i++) {
            Camera.CameraInfo info = new Camera.CameraInfo();
            Camera.getCameraInfo(i, info);
            if (info.facing == facingIndex) {
                return i;
            }
        }
        return -1;
    }

    private void processTopResult(Bitmap collectedImage, String imageLabel) {
        // All images / top result labels should be added to the buffer, regardless of higher order matching
        Log.d(Constants.TAG, "Received TOP 1 result of: " + imageLabel + ".  Adding to buffer.\n");
        gtcController.addToBuffer(collectedImage, imageLabel);

        // WHEN MATCHING - don't log positive result for every frame that returns desired label
        // ... instead, keep track of number of frames which match this result within a certain window of time
        // ... if you match X frames within Y time period, *THEN* send the annotation request
        if (imageLabel.equalsIgnoreCase(DESIRED_RESULT)) {
            // check current match counter value (zero means we should start new round of matching)
            if (currentMatchCount == 0) {
                // new round started!  log the time we found the first result in this set
                timeOfFirstMatch = System.currentTimeMillis();
            }

            // increase the match counter
            currentMatchCount++;

            // double check time elapsed since we found the first result
            long timeSinceFirstResult = System.currentTimeMillis() - timeOfFirstMatch;
            if (timeSinceFirstResult >= DESIRED_RESULT_TIME_LIMIT_MS) {
                // if we've gone over the time limit, reset properties and wait for the next match
                currentMatchCount = 0;
                timeOfFirstMatch = 0;
                return;
            }

            // if we got this far, it means we're still within our time limit ...
            // time to check the match limit
            if (currentMatchCount >= DESIRED_RESULT_MATCH_LIMIT) {
                // we've hit the desired number of matches within the provided time limit ...
                // send the result to the GTC Controller and then reset properties for new round of matching
                gtcController.logEventMatch(imageLabel, DESIRED_RESULT_TIME_LIMIT_MIN);
                currentMatchCount = 0;
                timeOfFirstMatch = 0;
                return;
            }

            // if we got this far, it means we're still within our time limit but haven't gotten
            // enough result matches to send message to GTC Controller ... keep waiting
        }
    }*/

}