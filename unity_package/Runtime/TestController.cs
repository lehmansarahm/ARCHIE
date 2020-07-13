using ARCHIE.Utils;

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using UnityEngine;

namespace ARCHIE
{
    public abstract class TestController : MonoBehaviour, ConfigController.ConfigListener
    {
        private string storageBucket;
        private string settings_filepath;
        private string email;
        private string password;

        private Firebase.Auth.FirebaseAuth auth;
        private bool initialLogin = true;

        protected ConfigController cc;
        protected FeedbackController fc;

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public TestController(string storage_bucket, string settings_filepath, string u_email, string u_password)
        {
            this.storageBucket = storage_bucket;
            this.settings_filepath = settings_filepath;
            this.email = u_email;
            this.password = u_password;
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        public void Start()
        {
            login();

            cc = new ConfigController(settings_filepath, this);
            fc = new FeedbackController(storageBucket);

            StartCoroutine(cc.selectNextConfig());
        }

        public void FeedbackRequested()
        {
            if (fc.wasDataCollectionSuccessful())
            {
                fc.sendToFirebase(auth.CurrentUser.UserId);
            }
        }

        public void newConfigSelected(string configID)
        {
            fc.updateCurrentConfigID(configID);
            OnConfigSelected(configID);
        }

        public abstract void OnConfigSelected(string configID);

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        private void login()
        {
            if (auth == null)
            {
                auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
            }

            if (initialLogin || auth.CurrentUser == null)
            {
                auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
                {
                    if (task.IsCanceled)
                    {
                        ARCHIELogger.error("SignInWithEmailAndPasswordAsync was canceled.");
                        return;
                    }

                    if (task.IsFaulted)
                    {
                        ARCHIELogger.error("SignInWithEmailAndPasswordAsync encountered an error: "
                            + task.Exception);
                        return;
                    }

                    Firebase.Auth.FirebaseUser newUser = task.Result;
                    ARCHIELogger.debugFormat("User signed in successfully: {0} ({1})",
                        newUser.DisplayName, newUser.UserId);
                });

                initialLogin = false;
            }
            else
            {
                ARCHIELogger.debug("User already logged in!");
            }

            ARCHIELogger.debug("User email: " + auth.CurrentUser.Email);
            ARCHIELogger.debug("User ID: " + auth.CurrentUser.UserId);
        }

    }
}
