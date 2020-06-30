using System;
using System.Collections;
using System.IO;

using UnityEngine;
using Vuforia;


/**
 * SOURCE:  https://library.vuforia.com/articles/Solution/Working-with-the-Camera#How-To-Access-the-Camera-Image-in-Unity
 */
public class CameraImageAccess : MonoBehaviour
{
    #region PUBLIC_MEMBERS

    public static byte[] LATEST_FRAME_PIXELS;
    public static Texture2D LATEST_FRAME;

    public static int FRAME_HEIGHT;
    public static int FRAME_WIDTH;

    #endregion // PUBLIC_MEMBERS


    // ---------------------------------------------------------------------------------------------------------
    // ---------------------------------------------------------------------------------------------------------


    #region PRIVATE_MEMBERS

    private PIXEL_FORMAT mPixelFormat = PIXEL_FORMAT.UNKNOWN_FORMAT;
    private bool mAccessCameraImage = true;
    private bool mFormatRegistered = false;

    #endregion // PRIVATE_MEMBERS


    // ---------------------------------------------------------------------------------------------------------
    // ---------------------------------------------------------------------------------------------------------


    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        #if UNITY_EDITOR
        mPixelFormat = PIXEL_FORMAT.GRAYSCALE; // Need Grayscale for Editor
        #else
        mPixelFormat = PIXEL_FORMAT.RGB888; // Use RGB888 for mobile
        #endif

        // Register Vuforia life-cycle callbacks:
        VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        VuforiaARController.Instance.RegisterTrackablesUpdatedCallback(OnTrackablesUpdated);
        VuforiaARController.Instance.RegisterOnPauseCallback(OnPause);
    }

    #endregion // MONOBEHAVIOUR_METHODS


    // ---------------------------------------------------------------------------------------------------------
    // ---------------------------------------------------------------------------------------------------------


    #region PRIVATE_METHODS

    private void OnVuforiaStarted()
    {
        // Vuforia has started, now register camera image format  
        if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
        {
            Logger.debug("Successfully registered pixel format " + mPixelFormat.ToString());
            mFormatRegistered = true;
        }
        else
        {
            Logger.error("Failed to register pixel format " + mPixelFormat.ToString()
                + " the format may be unsupported by your device;"
                + " consider using a different pixel format.");
            mFormatRegistered = false;
        }
    }

    /// 
    /// Called each time the Vuforia state is updated
    /// 
    void OnTrackablesUpdated()
    {
        if (mFormatRegistered)
        {
            if (mAccessCameraImage)
            {
                Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);
                if (image != null)
                {
                    Logger.debug("Image Format: " + image.PixelFormat                           // RGB 888
                        + ", Image Size:   " + image.Width + "x" + image.Height                 // 1920 x 1080
                        + ", Buffer Size:  " + image.BufferWidth + "x" + image.BufferHeight     // 1920 x 1080
                        + ", Image Stride: " + image.Stride);                                   // 5760

                    if (LATEST_FRAME == null)
                    {
                        LATEST_FRAME = new Texture2D(image.Width, image.Height);
                    }

                    image.CopyToTexture(LATEST_FRAME);
                    FRAME_HEIGHT = image.Height;
                    FRAME_WIDTH = image.Width;
                }
            }
        }
    }

    public static string getLatestFrame(string filename)
    {
        string filepath = Application.persistentDataPath + "/" + filename;

        try
        {
            byte[] frameBytes = LATEST_FRAME_PIXELS;
            File.WriteAllBytes(filepath, frameBytes);
            Logger.debug(frameBytes.Length + " bytes written to file: " + filepath);
            return filepath;
        }
        catch (Exception ex)
        {
            Logger.error("Something went wrong while attempting to write latest frame to path: " + filepath);
            Logger.error(ex.ToString());
            return "";
        }
    }

    /// 
    /// Called when app is paused / resumed
    /// 
    void OnPause(bool paused)
    {
        if (paused)
        {
            Logger.debug("App was paused");
            UnregisterFormat();
        }
        else
        {
            Logger.debug("App was resumed");
            RegisterFormat();
        }
    }

    /// 
    /// Register the camera pixel format
    /// 
    void RegisterFormat()
    {
        if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
        {
            Logger.debug("Successfully registered camera pixel format " + mPixelFormat.ToString());
            mFormatRegistered = true;
        }
        else
        {
            Logger.error("Failed to register camera pixel format " + mPixelFormat.ToString());
            mFormatRegistered = false;
        }
    }

    /// 
    /// Unregister the camera pixel format (e.g. call this when app is paused)
    /// 
    void UnregisterFormat()
    {
        Logger.debug("Unregistering camera pixel format " + mPixelFormat.ToString());
        CameraDevice.Instance.SetFrameFormat(mPixelFormat, false);
        mFormatRegistered = false;
    }

    #endregion //PRIVATE_METHODS
}