package edu.temple.gtc_core.buffers;

import android.content.Context;
import android.util.Log;

import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.SortedSet;
import java.util.TreeSet;

import edu.temple.gtc_core.utils.Constants;
import edu.temple.gtc_core.utils.FileUtil;

public class StatsMap {

    private Map<String,String> singleStatsMap = new HashMap<>();
    private Map<String,String[]> multiStatsMap = new HashMap<>();
    private Map<String,List<String[]>> listMultiStatsMap = new HashMap<>();

    public enum Type { Single, Multi, ListMulti }
    private Type mapType;
    private String header;

    public StatsMap(Type mapType, String header) {
        this.mapType = mapType;
        this.header = header;
    }

    public void clear() {
        singleStatsMap.clear();
        multiStatsMap.clear();
        listMultiStatsMap.clear();
        mapType = null;
        header = null;
    }

    public void insert(String value) {
        singleStatsMap.put(FileUtil.getFormattedTimestamp(), value);
    }

    public void insert(String[] value) {
        multiStatsMap.put(FileUtil.getFormattedTimestamp(), value);
    }

    public void insert(List<String[]> value) {
        listMultiStatsMap.put(FileUtil.getFormattedTimestamp(), value);
    }

    public void printToFile(Context context, String outputFileName) {
        Log.i(Constants.TAG, "Writing new stats map to file: " + outputFileName);
        List<String> output = new ArrayList<>();
        output.add(header);

        switch (mapType) {
            case Single:
                SortedSet<String> keys = new TreeSet<>(singleStatsMap.keySet());
                for (String key : keys) {
                    String value = singleStatsMap.get(key);
                    String line = (key + "," + value);
                    output.add(line);
                }
                break;
            case Multi:
                SortedSet<String> multiKeys = new TreeSet<>(multiStatsMap.keySet());
                for (String key : multiKeys) {
                    String[] value = multiStatsMap.get(key);
                    String line = key;
                    for (String valuePart : value) line += ("," + valuePart);
                    output.add(line);
                }
                break;
            case ListMulti:
                SortedSet<String> listMultiKeys = new TreeSet<>(listMultiStatsMap.keySet());
                for (String key : listMultiKeys) {
                    List<String[]> value = listMultiStatsMap.get(key);
                    String line = key;
                    for (String[] valuePart : value)
                        for (String valuePartPart : valuePart)
                            line += ("," + valuePartPart);
                    output.add(line);
                }
                break;
        }

        File outputFile = new File(context.getExternalFilesDir(null),
                FileUtil.getFormattedTimestamp(outputFileName));
        FileUtil.writeContentToFile(outputFile, output);
    }

}