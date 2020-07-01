using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using UnityEngine;
using UnityEngine.UI;

public class AppController : MonoBehaviour
{
    private static byte[] LATEST_FRAME_PIXELS;
    private static Texture2D LATEST_FRAME;

    private static bool copyingFrame = false;

    public void Update()
    {
        if (LATEST_FRAME == null)
            LATEST_FRAME = new Texture2D(Screen.width, Screen.height);

        if (copyingFrame)
        {
            Logger.debug("Frame is being copied ... skipping.");
        }
        else
        {
            LATEST_FRAME.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
            LATEST_FRAME.Apply();

            LATEST_FRAME_PIXELS = LATEST_FRAME.EncodeToJPG(50);
            Logger.debug("Frame update... pixels read.");
        }
    }

    public static byte[] getLatestFrame()
    {
        copyingFrame = true;
        byte[] frameBytes = new byte[LATEST_FRAME_PIXELS.Length];
        LATEST_FRAME_PIXELS.CopyTo(frameBytes, 0);

        copyingFrame = false;
        return frameBytes;
    }

}