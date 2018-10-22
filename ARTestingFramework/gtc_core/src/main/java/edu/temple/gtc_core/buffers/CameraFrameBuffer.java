package edu.temple.gtc_core.buffers;

import android.content.Context;
import android.graphics.Bitmap;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.FileUtil;

public class CameraFrameBuffer {

    // --------------------------------------------------------------------------------
    //      Private class representing an individual HAR result from tester app
    // --------------------------------------------------------------------------------
    //          ... in future, buffer entries could be any data type
    //          ... but for now, just focusing on image classification results
    // --------------------------------------------------------------------------------
    class BufferEntry {
        private String timestamp;
        private Bitmap collectedImage;
        private String label;

        public BufferEntry(Bitmap collectedImage, String label) {
            this.timestamp = FileUtil.getFormattedTimestamp();
            this.collectedImage = collectedImage;
            this.label = label;
        }

        public String getFilename() {
            return (timestamp + "_" + label + ".png");
        }

        public Bitmap getCollectedImage() {
            return collectedImage;
        }
    }
    // --------------------------------------------------------------------------------

    private static Context context;
    private static List<BufferEntry> primaryBuffer, backupBuffer;
    private static String backupBufferLabel;

    public String getBackupBufferLabel() {
        return backupBufferLabel;
    }

    public void initializeBuffer(Context context) {
        Log.i(Constants.TAG, "Initializing Camera Frame Buffer.");
        this.context = context;
        primaryBuffer = new ArrayList<>();
        backupBuffer = new ArrayList<>();
    }

    public void insert(Bitmap collectedImage, String label) {
        Log.i(Constants.TAG, "Inserting new Bitmap into Camera Frame Buffer.");
        primaryBuffer.add(new BufferEntry(collectedImage, label));
    }

    public void backup(String label) {
        Log.i(Constants.TAG, "Backing up Camera Frame Buffer.");
        backupBuffer = (ArrayList<BufferEntry>)((ArrayList<BufferEntry>)primaryBuffer).clone();
        backupBufferLabel = label;
        primaryBuffer.clear();
    }

    public void dumpBuffer(String outputDirName) {
        Log.i(Constants.TAG, "Dumping Camera Frame Buffer to file.");
        String formattedOutputDirName = FileUtil.getFormattedTimestamp(outputDirName);
        File outputDir = new File(context.getExternalFilesDir(null), formattedOutputDirName);
        outputDir.mkdir();

        Log.i(Constants.TAG, "Output directory created at: " + outputDir.getAbsolutePath());
        Log.i(Constants.TAG, "Writing " + backupBuffer.size() + " buffer entries to file.");

        // write all images from backup buffer to this output folder
        for (BufferEntry bufferEntry : backupBuffer) {
            FileOutputStream out = null;
            Bitmap image = bufferEntry.getCollectedImage();
            String filename = outputDir.getAbsolutePath() + "/" + bufferEntry.getFilename();
            try {
                out = new FileOutputStream(filename);
                image.compress(Bitmap.CompressFormat.PNG, 100, out);
            } catch (Exception e) {
                e.printStackTrace();
            } finally {
                try {
                    if (out != null) out.close();
                } catch (IOException e) {
                    Log.e(Constants.TAG, "Something went wrong while trying to write image from buffer: "
                            + filename);
                }
            }
        }

        // storage dump complete ... trash-collect backup buffer / label
        backupBufferLabel = null;
        backupBuffer.clear();
    }

}