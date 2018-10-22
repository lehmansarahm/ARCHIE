package edu.temple.gtc_core.utils;

import android.util.Log;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.List;

public class FileUtil {

    public static void writeContentToFile(File outputFile, List<String> content) {
        try {
            Log.d(Constants.TAG, "Writing resource stats to file: " + outputFile.getPath());
            if (!outputFile.exists()) outputFile.createNewFile();

            FileOutputStream stream = new FileOutputStream(outputFile);
            OutputStreamWriter writer = new OutputStreamWriter(stream);
            for (String line : content) { writer.append(line + "\n"); }

            writer.close();
            stream.flush();
            stream.close();
        } catch(FileNotFoundException ex) {
            Log.e(Constants.TAG, "Unable to access output file.  Cannot write results to file.", ex);
        } catch (IOException ex) {
            Log.e(Constants.TAG, "Unable to write to output file, or close output stream.", ex);
        }
    }

    public static String getFormattedTimestamp() {
        return getFormattedTimestamp(null);
    }

    public static String getFormattedTimestamp(String label) {
        Date currentTime = Calendar.getInstance().getTime();
        DateFormat df = new SimpleDateFormat(Constants.CLASSIFIER_OUTPUT_TIMESTAMP_FORMAT);
        if (label != null && !label.isEmpty()) return (df.format(currentTime) + "_" + label);
        else return df.format(currentTime);
    }

}