using ARCHIE.Data;
using ARCHIE.Utils;
using Firebase.Storage;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace ARCHIE
{
    public class FeedbackController : FeedbackForm.FeedbackListener
    {
        string storage_bucket_ref;
        string userID;

        byte[] frameBytes, rawFrameBytes;
        Texture2D latestFrame;

        byte[] feedbackBytes;
        byte[] cpuBytes, ramBytes, fpsBytes;

        string currentConfigID;

        StorageProgress<UploadState> progressWatcher = new StorageProgress<UploadState>(
            state => { // called periodically during the upload
                ARCHIELogger.debug(String.Format("Progress: {0} of {1} bytes transferred.",
                    state.BytesTransferred, state.TotalByteCount));
            });

        Action<Task<StorageMetadata>> uploadCompletionAction = new Action<Task<StorageMetadata>>(
            (Task<StorageMetadata> task) =>
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    foreach (var innerEx in task.Exception.InnerExceptions)
                    {
                        ARCHIELogger.error(innerEx.ToString());
                    }
                }
                else
                {
                    // Metadata contains file metadata such as size, content-type, and download URL.
                    StorageMetadata metadata = task.Result;
                    StorageReference uploadRef = metadata.Reference;
                    uploadRef.GetDownloadUrlAsync().ContinueWith((Task<Uri> returnTask) =>
                    {
                        ARCHIELogger.debug("Finished uploading!  Download url = "
                            + returnTask.Result.ToString());
                    });
                }
            });

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public FeedbackController(string storage_bucket_ref, string userID)
        {
            this.storage_bucket_ref = storage_bucket_ref;
            this.userID = userID;
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public void updateCurrentConfigID(string configID)
        {
            currentConfigID = configID;
        }

        public void updateRawFrameBytes(byte[] rawFrameBytes)
        {
            this.rawFrameBytes = rawFrameBytes;
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public bool grabbedAugmentedScreenshot()
        {
            collectARScreenshot();
            if (frameBytes == null || frameBytes.Length == 0)
            {
                ARCHIELogger.error("Something went wrong while attempting to collect augmented screenshot!");
                return false;
            }
            else
            {
                return true;
            }
        }

        public void backupResourceLogs(List<string> cpu, List<string> ram, List<string> fps)
        {
            string cpuFullText = String.Join(Environment.NewLine, cpu);
            cpuBytes = System.Text.Encoding.UTF8.GetBytes(cpuFullText);

            string ramFullText = String.Join(Environment.NewLine, ram);
            ramBytes = System.Text.Encoding.UTF8.GetBytes(ramFullText);

            string fpsFullText = String.Join(Environment.NewLine, fps);
            fpsBytes = System.Text.Encoding.UTF8.GetBytes(fpsFullText);
        }

        public void displayFeedbackForm(Canvas canvas)
        {
            FeedbackForm.display(canvas, currentConfigID, this);
        }

        public void feedbackComplete(UserFeedback feedback)
        {
            if (feedback == null)
            {
                ARCHIELogger.error("Something went wrong while collecting user feedback!");
                return;
            }

            // convert feedback object to uploadable format
            string feedbackJson = JsonUtility.ToJson(feedback);
            feedbackBytes = Encoding.ASCII.GetBytes(feedbackJson);
            ARCHIELogger.debug("Encoded feedback byte array with length: " + feedbackBytes.Length);

            // send everything to Firebase!
            FirebaseStorage storage = Firebase.Storage.FirebaseStorage.DefaultInstance;
            StorageReference storage_ref = storage.GetReferenceFromUrl(storage_bucket_ref);
            StorageReference user_bucket_ref = storage_ref.Child(userID);

            string dateTime = DateTime.Now.ToString("yyMMdd_HHmmss");
            upload(user_bucket_ref, dateTime, "_overlay.jpg", frameBytes, "image/jpeg", progressWatcher);
            upload(user_bucket_ref, dateTime, "_raw.jpg", rawFrameBytes, "image/jpeg", progressWatcher);
            upload(user_bucket_ref, dateTime, "_feedback.json", feedbackBytes, "application/json", null);
            // upload(user_bucket_ref, dateTime, "_cpu.csv", cpuBytes, "text/csv", null);
            // upload(user_bucket_ref, dateTime, "_ram.csv", ramBytes, "text/csv", null);
            // upload(user_bucket_ref, dateTime, "_fps.csv", fpsBytes, "text/csv", null);
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        private void collectARScreenshot()
        {
            if (latestFrame == null)
                latestFrame = new Texture2D(Screen.width, Screen.height);

            try
            {
                latestFrame.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
                latestFrame.LoadRawTextureData(latestFrame.GetRawTextureData());
                latestFrame.Apply();

                frameBytes = latestFrame.EncodeToJPG(50);
                ARCHIELogger.debug("Retrieved " + frameBytes.Length + " bytes from screen");
            }
            catch (Exception ex)
            {
                ARCHIELogger.error("Something went wrong while attempting to collect screenshots: " + ex.InnerException);
                frameBytes = new byte[0];
            }

        }

        private void upload(StorageReference bucket_ref, string dateTime, string fileExt,
            byte[] data, string contentType, IProgress<UploadState> progressHandler)
        {
            var filename = (dateTime + fileExt);
            StorageReference file_ref = bucket_ref.Child(filename);
            ARCHIELogger.debug("Attempting to upload data to storage reference: "
                + file_ref.Path + " with bucket: " + file_ref.Bucket);

            var metadata = new MetadataChange();
            metadata.ContentType = contentType;

            var uploadTask = file_ref.PutBytesAsync(data, metadata,
                progressHandler, System.Threading.CancellationToken.None, null);
            uploadTask.ContinueWith(uploadCompletionAction);
        }

    }
}
