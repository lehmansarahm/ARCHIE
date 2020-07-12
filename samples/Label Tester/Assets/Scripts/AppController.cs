using Firebase.Extensions;

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.UI;

public class AppController : MonoBehaviour
{
    private static byte[] LATEST_FRAME_PIXELS;
    private static Texture2D LATEST_FRAME;

    private static bool copyingFrame = false;
    private static string topic = "ARCHIE";


    // ----------------------------------------------------------------------------------------------------------------
    //      CLOUD MESSAGING
    // ----------------------------------------------------------------------------------------------------------------

    public void Start()
    {
        Firebase.Messaging.FirebaseMessaging.TokenReceived += OnTokenReceived;
        Firebase.Messaging.FirebaseMessaging.MessageReceived += OnMessageReceived;

        Firebase.Messaging.FirebaseMessaging.SubscribeAsync(topic).ContinueWithOnMainThread(task => {
            Logger.debug("SubscribeAsync");
        });

        Firebase.Messaging.FirebaseMessaging.RequestPermissionAsync().ContinueWithOnMainThread(task => {
            Logger.debug("RequestPermissionAsync");
        }
      );
    }

    public void OnTokenReceived(object sender, Firebase.Messaging.TokenReceivedEventArgs token)
    {
        Logger.debug("Received Registration Token: " + token.Token);
    }

    public void OnMessageReceived(object sender, Firebase.Messaging.MessageReceivedEventArgs e)
    {
        Logger.debug("Received a new message from: " + e.Message.From);
    }

    // ----------------------------------------------------------------------------------------------------------------


    // ----------------------------------------------------------------------------------------------------------------
    //      COLLECTING FRAMES FOR STORAGE
    // ----------------------------------------------------------------------------------------------------------------

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
            // Logger.debug("Frame update... pixels read.");
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

    // ----------------------------------------------------------------------------------------------------------------

}