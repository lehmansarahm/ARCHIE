using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class FPSMonitor : MonoBehaviour
{
    private const int SAMPLE_INTERVAL_SEC = 1;  // sample rate 1 Hz
    private const int SAMPLE_LIMIT = 5;         // dump to file after 5sec

    private List<string> fps = new List<string>();
    private int frameCounter = 0;
    private int timeCounter = 0;

    void Start()
    {
        // Start is called before the first frame update
        StartCoroutine(MonitorFPS());
    }

    void Update()
    {
        // Update is called once per frame
        frameCounter++;
    }

    IEnumerator MonitorFPS()
    {
        while (true)
        {
            // log FPS and update counter
            fps.Add(timeCounter + "," + frameCounter);
            frameCounter = 0;

            if (timeCounter % SAMPLE_LIMIT == 0)
            {
                WriteToFile();
            }

            // progress time counter and wait for sampling interval
            timeCounter++;
            yield return new WaitForSeconds(SAMPLE_INTERVAL_SEC);
        }
    }

    void WriteToFile()
    {
        string filepath = Application.persistentDataPath + "/fps.csv";
        string output = String.Join("\n", fps);
        output += "\n";
        fps.Clear();

        try
        {
            Debug.Log("Attempting to commit to file: " + filepath);
            Debug.Log("Attempting to write data: " + output);
            File.AppendAllText(filepath, output);
        }
        catch (Exception ex)
        {
            Debug.LogError("Something went wrong while attempting to write to filepath: " + filepath);
            Debug.LogError(ex.StackTrace);
        }
    }
}
