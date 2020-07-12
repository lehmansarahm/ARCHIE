using Firebase.Storage;

using System;
using System.IO;
using System.Threading.Tasks;

using UnityEngine;
using UnityEngine.UI;


public class SendToFbBehavior : MonoBehaviour
{
    [SerializeField] string storage_bucket_ref = "gs://archie-86718.appspot.com";
    [SerializeField] string email = "smlehman@temple.edu";
    [SerializeField] string password = "password";

    Firebase.Auth.FirebaseAuth auth;
    bool initialLogin = true;

    byte[] frameBytes;
    string filename;
    string filepath;

    Image labelImage;
    Text labelText;
    bool toggle;

    StorageProgress<UploadState> progressWatcher = new StorageProgress<UploadState>(
        state => {
            // called periodically during the upload
            Logger.debug(String.Format("Progress: {0} of {1} bytes transferred.",
                state.BytesTransferred, state.TotalByteCount));
        });

    public void OnButtonClick()
    {
        Logger.debug("SendToFB button was pressed");

        init();
        login();
        sendToFb(); 
        toggleLabel();
    }

    private void init()
    {
        if (labelImage == null)
        {
            labelImage = GameObject.Find("label_image").GetComponent<Image>();
        }

        if (labelText == null)
        {
            labelText = GameObject.Find("label_text").GetComponent<Text>();
        }

        if (auth == null)
        {
            auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
        }
    }

    private void login()
    {
        if (initialLogin || auth.CurrentUser == null)
        {
            auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
            {
                if (task.IsCanceled)
                {
                    Logger.error("SignInWithEmailAndPasswordAsync was canceled.");
                    labelText.text = "Login canceled";
                    return;
                }

                if (task.IsFaulted)
                {
                    Logger.error("SignInWithEmailAndPasswordAsync encountered an error: " + task.Exception);
                    labelText.text = "Login failed";
                    return;
                }

                Firebase.Auth.FirebaseUser newUser = task.Result;
                Logger.debugFormat("User signed in successfully: {0} ({1})", newUser.DisplayName, newUser.UserId);
                labelText.text = "Login complete";
            });

            initialLogin = false;
        }
        else
        {
            labelText.text = "User already logged in!";
        }

        Logger.debug("User email: " + auth.CurrentUser.Email);
        Logger.debug("User ID: " + auth.CurrentUser.UserId);
    }

    private void sendToFb()
    {
        filename = (auth.CurrentUser.UserId + "_" + DateTime.Now.ToString("yyMMdd_HHmmss") + ".jpg");
        frameBytes = AppController.getLatestFrame();
        Logger.debug("Copied " + frameBytes.Length + " bytes for filename: " + filename);

        FirebaseStorage storage = Firebase.Storage.FirebaseStorage.DefaultInstance;
        StorageReference storage_ref = storage.GetReferenceFromUrl(storage_bucket_ref);
        StorageReference screenshot_ref = storage_ref.Child(filename);
        Logger.debug("Attempting to save screenshot to storage reference: " + screenshot_ref.Path
            + " with bucket: " + screenshot_ref.Bucket);

        var screenshot_metadata = new MetadataChange();
        screenshot_metadata.ContentType = "image/jpeg";

        var uploadTask = screenshot_ref.PutBytesAsync(frameBytes, screenshot_metadata,
            progressWatcher, System.Threading.CancellationToken.None, null);

        uploadTask.ContinueWith((Task<StorageMetadata> task) => {
            if (task.IsFaulted || task.IsCanceled)
            {
                labelText.text = "Error!";
                foreach (var innerEx in task.Exception.InnerExceptions)
                {
                    Logger.error(innerEx.ToString());
                }
            }
            else
            {
                // Metadata contains file metadata such as size, content-type, and download URL.
                StorageMetadata metadata = task.Result;
                StorageReference uploadRef = metadata.Reference;
                uploadRef.GetDownloadUrlAsync().ContinueWith((Task<Uri> returnTask) =>
                {
                    labelText.text = "Success!";
                    Logger.debug("Finished uploading!  Download url = " + returnTask.Result.ToString());
                });
            }
        });
    }

    private void toggleLabel()
    {
        if (toggle)
        {
            labelImage.color = new Color32(0, 0, 0, 0);
            labelText.color = new Color32(212, 59, 59, 255);
        }
        else
        {
            labelImage.color = new Color32(85, 55, 183, 100);
            labelText.color = new Color32(255, 255, 0, 255);
        }

        toggle = !toggle;
    }

}