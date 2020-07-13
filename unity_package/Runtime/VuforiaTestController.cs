using ARCHIE.Utils;

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.UI;

using Vuforia;

namespace ARCHIE
{
    public abstract class VuforiaTestController : TestController
    {

        PIXEL_FORMAT mPixelFormat = PIXEL_FORMAT.UNKNOWN_FORMAT;
        bool mAccessCameraImage = true;
        bool mFormatRegistered = false;

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public VuforiaTestController(string storage_bucket, string settings_filepath, string u_email, string u_password) :
            base(storage_bucket, settings_filepath, u_email, u_password)
        {
            // empty
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public void Start()
        {
            #if UNITY_EDITOR
                mPixelFormat = PIXEL_FORMAT.GRAYSCALE; // Need Grayscale for Editor
            #else
                mPixelFormat = PIXEL_FORMAT.RGB888; // Use RGB888 for mobile
            #endif

            // Register Vuforia life-cycle callbacks:
            VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);
            VuforiaARController.Instance.RegisterOnPauseCallback(OnPause);

            base.Start();
        }

        public void FeedbackRequested(Canvas canvas)
        {
            if (mFormatRegistered)
            {
                if (mAccessCameraImage)
                {
                    Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);
                    if (image != null)
                    {
                        ARCHIELogger.debug(
                            "\nImage Format: " + image.PixelFormat +
                            "\nImage Size:   " + image.Width + "x" + image.Height +
                            "\nBuffer Size:  " + image.BufferWidth + "x" + image.BufferHeight +
                            "\nImage Stride: " + image.Stride + "\n"
                        );

                        Texture2D tex = new Texture2D(image.Width, image.Height);
                        image.CopyToTexture(tex);
                        tex.Apply();

                        byte[] pixels = tex.EncodeToJPG(50);
                        fc.updateRawFrameBytes(pixels);
                        Destroy(tex);
                    }
                }
            }

            base.FeedbackRequested(canvas);
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        private void OnVuforiaStarted()
        {
            // Try register camera image format
            if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
            {
                Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());
                mFormatRegistered = true;
            }
            else
            {
                Debug.LogError(
                    "\nFailed to register pixel format: " + mPixelFormat.ToString() +
                    "\nThe format may be unsupported by your device." +
                    "\nConsider using a different pixel format.\n");
                mFormatRegistered = false;
            }
        }

        private void OnPause(bool paused)
        {
            if (paused)
            {
                ARCHIELogger.debug("App was paused");
                UnregisterFormat();
            }
            else
            {
                ARCHIELogger.debug("App was resumed");
                RegisterFormat();
            }
        }

        private void RegisterFormat()
        {
            if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
            {
                ARCHIELogger.debug("Successfully registered camera pixel format " + mPixelFormat.ToString());
                mFormatRegistered = true;
            }
            else
            {
                ARCHIELogger.error("Failed to register camera pixel format " + mPixelFormat.ToString());
                mFormatRegistered = false;
            }
        }

        private void UnregisterFormat()
        {
            ARCHIELogger.debug("Unregistering camera pixel format " + mPixelFormat.ToString());
            CameraDevice.Instance.SetFrameFormat(mPixelFormat, false);
            mFormatRegistered = false;
        }

    }
}
