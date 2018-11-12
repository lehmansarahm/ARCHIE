package edu.temple.gtc_core.buffers;

import android.content.Context;
import android.graphics.Bitmap;
import android.util.Log;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.List;

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.FileUtil;

public class AudioBuffer {

    // --------------------------------------------------------------------------------
    //      Private class representing an individual HAR result from tester app
    // --------------------------------------------------------------------------------
    //          ... in future, buffer entries could be any data type
    //          ... but for now, just focusing on image classification results
    // --------------------------------------------------------------------------------
    class BufferEntry {
        private String timestamp;
        private float[] audio;
        private String label;

        public BufferEntry(float[] audio, String label) {
            this.timestamp = FileUtil.getFormattedTimestamp();
            this.audio = audio;
            this.label = label;
        }

        public String getFilename() {
            return (timestamp + "_" + label + ".txt");
        }

        public float[] getAudio() {
            return audio;
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
        Log.i(Constants.TAG, "Initializing Audio Buffer.");
        this.context = context;
        primaryBuffer = new ArrayList<>();
        backupBuffer = new ArrayList<>();
    }

    public void insert(float[] audio, String label) {
        Log.i(Constants.TAG, "Inserting new Bitmap into Audio Buffer.");
        primaryBuffer.add(new BufferEntry(audio, label));
    }

    public void backup(String label) {
        Log.i(Constants.TAG, "Backing up Audio Buffer.");
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
            String filename = outputDir.getAbsolutePath() + "/" + bufferEntry.getFilename();
            FileOutputStream out = null;
            OutputStreamWriter writer = null;

            try {
                out = new FileOutputStream(filename);
                writer = new OutputStreamWriter(out);
                float[] audio = bufferEntry.getAudio();
                for (float audioVal : audio) { writer.append(audioVal + "\n"); }
            } catch (Exception e) {
                Log.e(Constants.TAG, "Something went wrong while trying to write audio "
                    + "buffer to file: " + filename);
                e.printStackTrace();
            } finally {
                try {
                    if (writer != null)
                        writer.close();
                    if (out != null) {
                        out.flush();
                        out.close();
                    }
                } catch (IOException e) {
                    Log.e(Constants.TAG, "Something went wrong while trying to write audio "
                            + "buffer to file: " + filename);
                }
            }
        }

        // storage dump complete ... trash-collect backup buffer / label
        backupBufferLabel = null;
        backupBuffer.clear();
    }

}