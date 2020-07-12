# ARCHIE

## What is ARCHIE?

ARCHIE is a testing framework for mobile and wearable augmented reality applications, intended to assist researchers and developers in collecting user data from their test participants.  This repository contains the following:

* ARCHIE Unity Package
* ARCHIE pipeline resources (Firebase Cloud Function scripts, back-end server scripts)
* Sample applications

## Updating Your App to Use ARCHIE

* **Add Firebase SDK to Unity**
  * Download the Firebase SDK for Unity
  * Import the following packages into your app environment:  
    https://firebase.google.com/docs/unity/setup#manual_installation
    * Storage (includes Auth by default)
* **Create ARCHIE project on Firebase** (only if doesn't already exist)
  * Set up new Unity project in Firebase with your app's bundle ID
  * Ensure that you have at least the "Blaze" tier payment plan (will not work for free tier)
  * Enable the following products for your project on the Firebase console:
    * Authentication:  https://firebase.google.com/docs/auth/unity/start 
    * Storage:  https://firebase.google.com/docs/storage/unity/start 
    * Cloud Functions:  https://firebase.google.com/docs/functions/get-started
      * Don't have to actually deploy anything yet ... will take care of this in another step
  * Install Firebase CLI tools:  https://firebase.google.com/docs/cli 
* **Deploy ARCHIE cloud function**
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
  * Add "SendToFB" script to **(???)**, update to authenticate with your Firebase storage instance and upload to appropriate storage bucket
