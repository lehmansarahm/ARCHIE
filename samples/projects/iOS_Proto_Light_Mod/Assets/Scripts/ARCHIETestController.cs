using ARCHIE.Utils;
using System;
using System.Collections;
using UnityEngine;

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

    static string storage_bucket = Constants.FB_STORAGE_BUCKET;

    // by default, ARCHIE looks for this file under Assets > Resources
    static string settings_filepath = Constants.FB_CONFIG_SETTINGS_FILEPATH;

    /* --------------------------------------------------------------------------------
     * Current ARCHIE implementation assumes email-based authentication for each user 
     *                 (Populate email / password as appropriate)                     
     -------------------------------------------------------------------------------- */

    static string email = Constants.FB_DEFAULT_EMAIL;
    static string password = Constants.FB_DEFAULT_PASSWORD;


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    Canvas canvas;

    ARCHIETestController() : base(storage_bucket, settings_filepath, email, password)
    {
        // empty default constructor ... just need to call base constructor
    }

    public new void Start()
    {
        // get a reference to the HUD
        canvas = GameObject.Find("hud_canvas").GetComponent<Canvas>();

        // kick off the feedback request loop
        StartCoroutine(RequestFeedback());

        // IF YOU IMPLEMENT A CUSTOM 'START' METHOD, BE SURE TO EXPLICITLY INVOKE THE BASE METHOD TOO
        base.Start();
    }

    public void Update()
    {
        if (respondToSwitch)
        {
            switch (currentConfigID)
            {
                case "dark_label":  // "big_text" ... didn't feel like changing it
                    ARCHIELogger.debug("Setting big text!");
                    foreach (GameObject child in GameObject.FindGameObjectsWithTag("archie_text"))
                        child.transform.localScale = Vector3.one;
                    break;

                case "light_label": // "small_text" ... didn't feel like changing it
                    ARCHIELogger.debug("Setting small text!");
                    foreach (GameObject child in GameObject.FindGameObjectsWithTag("archie_text"))
                        child.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
                    break;

                default:
                    ARCHIELogger.error("Config ID not recognized: " + currentConfigID);
                    break;
            }

            respondToSwitch = false;
        }
    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    /* --------------------------------------------------------------------------------
     *  REQUIRED implementation for abstract method handling selection of new config. 
     -------------------------------------------------------------------------------- */

    string currentConfigID;
    bool respondToSwitch = false;
    bool completedFirstInterval = false;

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

        ARCHIELogger.debug("New config selected: " + configID);
        currentConfigID = configID;
        respondToSwitch = true;
    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    private IEnumerator RequestFeedback()
    {
        while (true)
        {
            /* --------------------------------------------------------------------------------
             *  Devs are REQUIRED to explicitly request feedback from ARCHIE.
             *  
             *  You are free to control the feedback request conditions however you want (on
             *  timer interval, when a certain target is recognized, etc.)
             * 
             *  For convenience, this script collects feedback when the user presses a button.
             -------------------------------------------------------------------------------- */

            if (completedFirstInterval)
            {
                try
                {
                    ARCHIELogger.debug("Requesting feedback!");
                    base.FeedbackRequested(canvas);     // MUST PROVIDE ACCESS TO A FULL-SCREEN CANVAS OBJECT
                }
                catch (Exception ex)
                {
                    ARCHIELogger.error("Something went wrong while trying to "
                        + "gather user feedback: " + ex.Message);
                }
            }
            else
            {
                ARCHIELogger.debug("Not requesting feedback during first "
                    + "interval ... giving app time to spool up.");
                completedFirstInterval = true;
            }

            // give user time to submit feedback form and play around a little
            // more before we display the form again
            yield return new WaitForSeconds(30);
        }
    }

}