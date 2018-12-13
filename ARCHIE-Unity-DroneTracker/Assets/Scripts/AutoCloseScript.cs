using UnityEngine;
using System.Collections;
using System;
using System.IO;
using System.Collections.Generic;

public class AutoCloseScript : MonoBehaviour
{
    private const string EXTRA_TIMED_TEST = "quitAfterTimeLimit";
    private const string EXTRA_TESTING_LABEL = "testingLabel";
    private const string EXTRA_TRIAL_TIME = "trialTime";

    DroneTrackerLog dtLog = new DroneTrackerLog();

    int m_frameCounter = 0;
    float m_timeCounter = 0.0f;
    float m_refreshTime = 0.5f;

    List<string> framerates = new List<string>();
    string filename = "frames.csv", header = "Record, Frame Rate";
    float totalFrameRate = 0.0f;
    int frameCount = 0;

    // -------------------------------------------------------------------------
    // -------------------------------------------------------------------------

    // Use this for initialization
    void Start()
    {
        // GET LOGCAT OUTPUT BY RUNNING THE FOLLOWING TERMINAL COMMAND:
        // adb logcat -s Unity ActivityManager PackageManager dalvikvm DEBUG


        dtLog.Post("AutoClose Script started ...");
        bool isTesting = false;
        long trialTimeSec = 0;

        AndroidJavaClass UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject intent = currentActivity.Call<AndroidJavaObject>("getIntent");

        if (intent.Call<bool>("hasExtra", EXTRA_TIMED_TEST))
        {
            string rawIsTesting = intent.Call<string>("getStringExtra", EXTRA_TIMED_TEST);
            isTesting = bool.Parse(rawIsTesting);
            dtLog.Post("Received testing flag: " + isTesting);
        }
        else dtLog.Post("RUNTIME PARAM NOT RECEIVED: " + EXTRA_TIMED_TEST);

        if (intent.Call<bool>("hasExtra", EXTRA_TRIAL_TIME))
        {
            string rawTrialTime = intent.Call<string>("getStringExtra", EXTRA_TRIAL_TIME);
            int trialTimeMin = Int32.Parse(rawTrialTime);
            dtLog.Post("Received trial time (minutes): " + trialTimeMin);
            trialTimeSec = (trialTimeMin * 60);
            dtLog.Post("Calculated trial time (seconds): " + trialTimeSec);
        }
        else dtLog.Post("RUNTIME PARAM NOT RECEIVED: " + EXTRA_TRIAL_TIME);

        if (isTesting && (trialTimeSec != 0))
        {
            dtLog.Post("Received notice to auto-close current activity after delay (seconds): " + trialTimeSec);
            StartCoroutine(ExecuteAfterTime(trialTimeSec));
        }

        dtLog.Post("Finished retrieving intent params from: " +
            "\n\t Current activity: " + currentActivity.Call<string>("getLocalClassName") +
            "\n\t Current component: " + currentActivity
                    .Call<AndroidJavaObject>("getComponentName")
                    .Call<string>("flattenToString"));
    }

    // Update is called once per frame
    void Update()
    {
        if (m_timeCounter < m_refreshTime)
        {
            m_timeCounter += Time.deltaTime;
            m_frameCounter++;
        }
        else
        {
            //This code will break if you set your m_refreshTime to 0, which makes no sense.
            float frameRate = (float)m_frameCounter / m_timeCounter;
            m_frameCounter = 0;
            m_timeCounter = 0.0f;

            totalFrameRate += frameRate;
            framerates.Add(++frameCount + "," + frameRate.ToString());
        }
    }

    // -------------------------------------------------------------------------
    // -------------------------------------------------------------------------

    IEnumerator ExecuteAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        string filepath = (Application.persistentDataPath + "/" + filename);
        dtLog.Post("Auto-close delay complete.  Writing frame rate results to file: " + filepath);
        FileInfo t = new FileInfo(filepath);
        StreamWriter _writer;

        if (!t.Exists)
        {
            _writer = t.CreateText();
        }
        else
        {
            t.Delete();
            _writer = t.CreateText();
        }

        _writer.WriteLine(header);
        foreach (string line in framerates) _writer.WriteLine(line);
        _writer.WriteLine("Average," + (totalFrameRate / frameCount));
        _writer.Close();

        dtLog.Post("Results writing complete.  Finishing current activity.");
        AndroidJavaClass UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        currentActivity.Call("finishAffinity");
    }

}