package edu.temple.tf_tester.old;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.media.ImageReader;
import android.util.Log;
import android.view.Display;

import edu.temple.tf_tester.classifiers.BaseTFImageClassifier;
import edu.temple.tf_tester.utils.Constants;
import edu.temple.tf_tester.utils.ImageUtils;

public class ImageReaderListener implements ImageReader.OnImageAvailableListener {

    private Activity currentActivity;
    private BaseTFImageClassifier classifier;

    private int previewWidth;
    private int previewHeight;

    private byte[][] yuvBytes;
    private int[] rgbBytes;

    private Bitmap rgbFrameBitmap;
    private Bitmap croppedBitmap;

    private Matrix cropToFrameTransform;
    private Matrix frameToCropTransform;

    private long lastProcessingTimeMs;

    public ImageReaderListener(Activity currentActivity, int previewHeight, int previewWidth, int rotation) {
        this.currentActivity = currentActivity;
        this.previewHeight = previewHeight;
        this.previewWidth = previewWidth;

        /*classifier = BaseTFImageClassifier.create(currentActivity.getAssets(), Constants.MODEL_FILE, Constants.LABEL_FILE,
                Constants.INPUT_SIZE, Constants.IMAGE_MEAN, Constants.IMAGE_STD, Constants.INPUT_NAME, Constants.OUTPUT_NAME);

        final Display display = currentActivity.getWindowManager().getDefaultDisplay();
        final int screenOrientation = display.getRotation();
        int sensorOrientation = rotation + screenOrientation;

        yuvBytes = new byte[3][];
        rgbBytes = new int[previewWidth * previewHeight];

        rgbFrameBitmap = Bitmap.createBitmap(previewWidth, previewHeight, Bitmap.Config.ARGB_8888);
        croppedBitmap = Bitmap.createBitmap(Constants.INPUT_SIZE, Constants.INPUT_SIZE, Bitmap.Config.ARGB_8888);

        cropToFrameTransform = new Matrix();
        frameToCropTransform = ImageUtils.getTransformationMatrix(previewWidth, previewHeight,
                Constants.INPUT_SIZE, Constants.INPUT_SIZE, sensorOrientation, true);
        frameToCropTransform.invert(cropToFrameTransform);*/
    }

    @Override
    public void onImageAvailable(ImageReader reader) {
        Log.d(Constants.TAG, "New input available!");
        /*Image image = null;

        try {
            image = reader.acquireLatestImage();
            if (image == null) return;

            final Image.Plane[] planes = image.getPlanes();
            ImageUtils.fillBytes(planes, yuvBytes);

            final int yRowStride = planes[0].getRowStride();
            final int uvRowStride = planes[1].getRowStride();
            final int uvPixelStride = planes[1].getPixelStride();

            ImageUtils.convertYUV420ToARGB8888(
                    yuvBytes[0],
                    yuvBytes[1],
                    yuvBytes[2],
                    previewWidth,
                    previewHeight,
                    yRowStride,
                    uvRowStride,
                    uvPixelStride,
                    rgbBytes);

            image.close();
        } catch (final Exception e) {
            if (image != null) image.close();
            return;
        }

        rgbFrameBitmap.setPixels(rgbBytes, 0, previewWidth, 0, 0, previewWidth, previewHeight);
        final Canvas canvas = new Canvas(croppedBitmap);
        canvas.drawBitmap(rgbFrameBitmap, frameToCropTransform, null);

        Log.d(Constants.TAG, "Image cropped and converted ... ready to classify!");
        AsyncTask.execute(new Runnable() {
            @Override
            public void run() {
                final long startTime = SystemClock.uptimeMillis();
                final List<Recognition> results = classifier.recognizeImage(croppedBitmap);

                String output = "Results returned: ";
                if (results.size() == 0) output += "NONE";
                else {
                    for (int i = 0; i < results.size(); i++)
                        output += (results.get(i).getTitle() + ", ");
                }
                Log.d(Constants.TAG, "Results returned: " + output);

                lastProcessingTimeMs = SystemClock.uptimeMillis() - startTime;
                if (results.get(0).getTitle().equals("daisy")) {
                    // play a noise
                    ToneGenerator toneGen1 = new ToneGenerator(AudioManager.STREAM_MUSIC, 100);
                    toneGen1.startTone(ToneGenerator.TONE_CDMA_PIP,150);
                }
            }
        });*/
    }

}