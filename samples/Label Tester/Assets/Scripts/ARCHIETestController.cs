using UnityEngine;
using UnityEngine.UI;

public class ARCHIETestController : ARCHIE.VuforiaTestController
{

    /* --------------------------------------------------------------------------------
     *     Storage bucket reference should point to your project's FB instance        *
     *                  (ex:  "gs://archie-86718.appspot.com")                        *
     -------------------------------------------------------------------------------- */

    static string storage_bucket = ARCHIE.Utils.Constants.FB_STORAGE_BUCKET;

    /* --------------------------------------------------------------------------------
     * Current ARCHIE implementation assumes email-based authentication for each user *
     *                 (Populate email / password as appropriate)                     *
     -------------------------------------------------------------------------------- */

    static string email = ARCHIE.Utils.Constants.FB_DEFAULT_EMAIL;
    static string password = ARCHIE.Utils.Constants.FB_DEFAULT_PASSWORD;


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    ARCHIETestController() : base(storage_bucket, email, password)
    {
        // empty default constructor ... just need to call base constructor
    }


    public void OnButtonClick()
    {
        /*
         * You are free to control the feedback request conditions however you want (on
         * timer interval, when a certain target is recognized, etc.)
         * 
         * For convenience, this script collects feedback when the user presses a button.
         */
        base.FeedbackRequested();
    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------


    Image labelImage;
    Text labelText;

    /* --------------------------------------------------------------------------------
     *  Required implementation for abstract method handling selection of new config. *
     -------------------------------------------------------------------------------- */

    public override void OnConfigSelected(string configID)
    {
        if (labelImage == null)
        {
            labelImage = GameObject.Find("label_image").GetComponent<Image>();
        }

        if (labelText == null)
        {
            labelText = GameObject.Find("label_text").GetComponent<Text>();
        }

        /*
         * You are free to respond to the newest config ID however you want (switching 
         * between illumination algorithms, avatar characteristics, UI formatting 
         * schemes, etc.)
         * 
         * For this sample app, we are switching between label color options.
         */

        switch (configID)
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
                ARCHIE.Utils.ARCHIELogger.error("Config ID not recognized: " + configID);
                break;
        }
    }


    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

}