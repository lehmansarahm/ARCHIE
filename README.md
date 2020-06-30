# ARCHIE

## What is ARCHIE?
ARCHIE is a testing framework for mobile and wearable augmented reality applications, intended to assist researchers and developers in collecting user data from their test participants.  This repository contains the following:

* ARCHIE Unity Package
* ARCHIE pipeline resources (Firebase Cloud Function scripts, back-end server scripts)
* Sample applications

## Updating Your App to Use ARCHIE
* **Setting up back-end server**
  * Update "api/archie" route in "back_end/server_api.py" to implement processing logic
  * Launch, publish Flask server (NGROK version available for quick testing):
    * $ python3 server_api.py
    * $ sh ./run_ngrok.sh
* **Connecting ARCHIE to server with Firebase**
  * Set up Email Authentication, Storage, and Cloud Functions services for your project in Firebase
    * Ensure that you have at least the "Blaze" tier payment plan (will not work for free tier)
    * Storage rules should allow authenticated users to upload files
  * Install Firebase CLI tools:  https://firebase.google.com/docs/cli 
  * Connect "cloud_functions" directory to your Firebase instance:
    * $ firebase login  
    * $ firebase use --add
    * $ firebase --project <alias_or_project_id> 
  * Update "exports.processImage" in "cloud_functions/index.js" to point to your server instance
  * Export the updated function to Firebase
    * $ firebase deploy
* **Adding ARCHIE to Unity**
  * Import ARCHIE package to Unity
  * Add "AppController" script to camera
  * Add "SendToFB" script to **(???)**, update to connect with your Firebase storage instance (user login and storage bucket URL)
