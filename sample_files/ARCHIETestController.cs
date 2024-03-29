﻿using UnityEngine;
using UnityEngine.UI;

/* --------------------------------------------------------------------------------
 *  Local script should extend one of the provided test controllers.  In order to 
 *  capture original camera frames without augmentation, please use the test      
 *  controller that matches your AR library of choice.  (Currently, ARCHIE only   
 *  supports Vuforia ... more library-specific controllers coming soon)           
 *                                                                                
 *  For all other systems, feel free to use the base "TestController" class.      
 *  (Only augmented screenshots will be captured).                                
 -------------------------------------------------------------------------------- */
public class ARCHIETestController : ARCHIE.VuforiaTestController
{

    /* --------------------------------------------------------------------------------
     *     Storage bucket reference should point to your project's FB instance        
     *                  (ex:  "gs://archie-86718.appspot.com")                        
     -------------------------------------------------------------------------------- */

    static string storage_bucket = ARCHIE.Utils.Constants.FB_STORAGE_BUCKET;

    // by default, ARCHIE looks for this file under Assets > Resources
    static string settings_filepath = ARCHIE.Utils.Constants.FB_CONFIG_SETTINGS_FILEPATH;

    /* --------------------------------------------------------------------------------
     * Current ARCHIE implementation assumes email-based authentication for each user 
     *                 (Populate email / password as appropriate)                     
     -------------------------------------------------------------------------------- */

    static string email = ARCHIE.Utils.Constants.FB_DEFAULT_EMAIL;
    static string password = ARCHIE.Utils.Constants.FB_DEFAULT_PASSWORD;


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    Canvas canvas;
    Image labelImage;
    Text labelText;


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    ARCHIETestController() : base(storage_bucket, settings_filepath, email, password)
    {
        // empty default constructor ... just need to call base constructor
    }

    public void Start()
    {
        canvas = GameObject.Find("hud_canvas").GetComponent<Canvas>();
        labelImage = GameObject.Find("label_image").GetComponent<Image>();
        labelText = GameObject.Find("label_text").GetComponent<Text>();

        // IF YOU IMPLEMENT A CUSTOM 'START' METHOD, BE SURE TO EXPLICITLY INVOKE THE BASE METHOD TOO
        base.Start();
    }

    public void Update()
    {
        if (respondToSwitch)
        {
            switch (currentConfigID)
            {
                case "dark_label":
                    labelImage.color = new Color32(0, 0, 0, 0);
                    labelText.color = new Color32(212, 59, 59, 255);
                    break;

                case "light_label":
                    labelImage.color = new Color32(85, 55, 183, 100);
                    labelText.color = new Color32(255, 255, 0, 255);
                    break;

                default:
                    ARCHIE.Utils.ARCHIELogger.error("Config ID not recognized: " + currentConfigID);
                    break;
            }

            respondToSwitch = false;
        }
    }

    public void OnButtonClick()
    {

        /* --------------------------------------------------------------------------------
         *  Devs are REQUIRED to explicitly request feedback from ARCHIE.
         *  
         *  You are free to control the feedback request conditions however you want (on
         *  timer interval, when a certain target is recognized, etc.)
         * 
         *  For convenience, this script collects feedback when the user presses a button.
         -------------------------------------------------------------------------------- */

        base.FeedbackRequested(canvas);     // MUST PROVIDE ACCESS TO A FULL-SCREEN CANVAS OBJECT

    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    /* --------------------------------------------------------------------------------
     *  REQUIRED implementation for abstract method handling selection of new config. 
     -------------------------------------------------------------------------------- */

    string currentConfigID;
    bool respondToSwitch = false;

    public override void OnConfigSelected(string configID)
    {

        /* --------------------------------------------------------------------------------
         *  You are free to respond to the newest config ID however you want (switching 
         *  between illumination algorithms, avatar characteristics, UI formatting 
         *  schemes, etc.)
         * 
         *  For this sample app, we are switching between label color options.
         *  
         *                              === NOTE !!! ===
         *                              
         *  THE RESULT OF THIS FUNCTION CALL COMES BACK ON A DIFFERENT THREAD. WE RECOMMEND
         *  SETTING A COUPLE BASIC PROPERTIES, THEN LETTING "UPDATE" METHOD HANDLE THE ACTUAL
         *  RESPONSE LOGIC.
         -------------------------------------------------------------------------------- */

        ARCHIE.Utils.ARCHIELogger.debug("New config selected: " + configID);
        currentConfigID = configID;
        respondToSwitch = true;
    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

}