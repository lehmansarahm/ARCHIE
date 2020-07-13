using ARCHIE.Data;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace ARCHIE.Utils
{
    public class FeedbackForm
    {

        private const int BUTTON_HEIGHT = 100;
        private const int BUTTON_WIDTH = 500;
        private const int FONT_SIZE = 48;

        private static int HALF_SCREEN_WIDTH;
        private static int QUARTER_SCREEN_WIDTH;

        private static UnityEngine.Events.UnityAction submitClickListener;

        private static GameObject feedbackFormGO;
        private static UserFeedback userFeedback;


        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------


        public static void display(Canvas canvas, string currentConfigID, UnityEngine.Events.UnityAction listener)
        {
            HALF_SCREEN_WIDTH = (Screen.width / 2);
            QUARTER_SCREEN_WIDTH = (Screen.width / 4);

            userFeedback = new UserFeedback();
            userFeedback.current_config_id = currentConfigID;

            submitClickListener = listener;

            // create the feedback form game object and center on screen
            feedbackFormGO = addPlaceholderGO(canvas.gameObject, "feedback_form");
            feedbackFormGO.transform.localPosition = new Vector3(0, 0, 0);

            // display the form components
            displayFormBackground(feedbackFormGO);
            displayUsabilityOptions(feedbackFormGO);
            displayIssueList(feedbackFormGO);
            displaySubmitButton(feedbackFormGO);
        }


        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------


        private static void displayFormBackground(GameObject parent)
        {
            // create a game object for the form background (size of screen, centered)
            var backgroundGO = addPlaceholderGO(parent, "feedback_form_background");

            RawImage backgroundImage = backgroundGO.AddComponent<RawImage>();
            backgroundImage.color = new Color(0, 0, 0, 0.85f);

            RectTransform backgroundTrans = backgroundImage.GetComponent<RectTransform>();
            backgroundTrans.localPosition = new Vector3(0, 0, 0);
            backgroundTrans.sizeDelta = new Vector2(Screen.width, Screen.height);
        }


        private static void displayUsabilityOptions(GameObject parent)
        {
            // create a game object to hold the usability portion of the feedback form
            var usabilityGO = addPlaceholderGO(parent, "usability");
            usabilityGO.transform.localPosition = new Vector3(0, 0, 0);

            // ----------------------------------------------------------------------------

            // create a game object to hold the usability instructions 
            var usabilityInstructionsGO = addPlaceholderGO(usabilityGO, "instructions");
            Text instructionsText = addText(usabilityInstructionsGO, "Please rate your experience so far:", 60);

            RectTransform rectTransform = instructionsText.GetComponent<RectTransform>();
            rectTransform.localPosition = new Vector3(-QUARTER_SCREEN_WIDTH, 300, 0);
            rectTransform.sizeDelta = new Vector2(HALF_SCREEN_WIDTH, 500);

            // ----------------------------------------------------------------------------

            // create a game object to hold the usability rating options
            var optionsGO = addPlaceholderGO(usabilityGO, "options");
            optionsGO.transform.localPosition = new Vector3(0, 0, 0);

            int xOffset = -QUARTER_SCREEN_WIDTH;

            // create the option buttons
            var excellentButton = addButton(optionsGO, "excellent", xOffset, 150,
                "[ ] Excellent", FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var goodButton = addButton(optionsGO, "good", xOffset, 50,
                "[ ] Good", FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var fairButton = addButton(optionsGO, "fair", xOffset, -50,
                "[ ] Fair", FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var poorButton = addButton(optionsGO, "poor", xOffset, -150,
                "[ ] Poor", FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var badButton = addButton(optionsGO, "bad", xOffset, -250,
                "[ ] Bad", FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);

            // ----------------------------------------------------------------------------
            // ----------------------------------------------------------------------------

            // Update the button listeners to toggle selection indicators

            excellentButton.onClick.AddListener(() =>
            {
                excellentButton.gameObject.GetComponent<Text>().text = "[X] Excellent";
                goodButton.gameObject.GetComponent<Text>().text = "[ ] Good";
                fairButton.gameObject.GetComponent<Text>().text = "[ ] Fair";
                poorButton.gameObject.GetComponent<Text>().text = "[ ] Poor";
                badButton.gameObject.GetComponent<Text>().text = "[ ] Bad";

                userFeedback.usability_score = 5;
                ARCHIELogger.debug("Usability score updated to: " + userFeedback.usability_score);
            });

            goodButton.onClick.AddListener(() =>
            {
                excellentButton.gameObject.GetComponent<Text>().text = "[ ] Excellent";
                goodButton.gameObject.GetComponent<Text>().text = "[X] Good";
                fairButton.gameObject.GetComponent<Text>().text = "[ ] Fair";
                poorButton.gameObject.GetComponent<Text>().text = "[ ] Poor";
                badButton.gameObject.GetComponent<Text>().text = "[ ] Bad";

                userFeedback.usability_score = 4;
                ARCHIELogger.debug("Usability score updated to: " + userFeedback.usability_score);
            });

            fairButton.onClick.AddListener(() =>
            {
                excellentButton.gameObject.GetComponent<Text>().text = "[ ] Excellent";
                goodButton.gameObject.GetComponent<Text>().text = "[ ] Good";
                fairButton.gameObject.GetComponent<Text>().text = "[X] Fair";
                poorButton.gameObject.GetComponent<Text>().text = "[ ] Poor";
                badButton.gameObject.GetComponent<Text>().text = "[ ] Bad";

                userFeedback.usability_score = 3;
                ARCHIELogger.debug("Usability score updated to: " + userFeedback.usability_score);
            });

            poorButton.onClick.AddListener(() =>
            {
                excellentButton.gameObject.GetComponent<Text>().text = "[ ] Excellent";
                goodButton.gameObject.GetComponent<Text>().text = "[ ] Good";
                fairButton.gameObject.GetComponent<Text>().text = "[ ] Fair";
                poorButton.gameObject.GetComponent<Text>().text = "[X] Poor";
                badButton.gameObject.GetComponent<Text>().text = "[ ] Bad";

                userFeedback.usability_score = 2;
                ARCHIELogger.debug("Usability score updated to: " + userFeedback.usability_score);
            });

            badButton.onClick.AddListener(() =>
            {
                excellentButton.gameObject.GetComponent<Text>().text = "[ ] Excellent";
                goodButton.gameObject.GetComponent<Text>().text = "[ ] Good";
                fairButton.gameObject.GetComponent<Text>().text = "[ ] Fair";
                poorButton.gameObject.GetComponent<Text>().text = "[ ] Poor";
                badButton.gameObject.GetComponent<Text>().text = "[X] Bad";

                userFeedback.usability_score = 1;
                ARCHIELogger.debug("Usability score updated to: " + userFeedback.usability_score);
            });
        }


        private static void displayIssueList(GameObject parent)
        {
            // create a game object to hold the issue list portion of the feedback form
            var issueListGO = addPlaceholderGO(parent, "issue_list");
            issueListGO.transform.localPosition = new Vector3(0, 0, 0);

            // ----------------------------------------------------------------------------
            // ----------------------------------------------------------------------------

            // create a game object to hold the issue list instructions 
            var issueInstructionsGO = addPlaceholderGO(issueListGO, "instructions");
            Text instructionsText = addText(issueInstructionsGO, "Issues encountered:", 60);

            RectTransform rectTransform = instructionsText.GetComponent<RectTransform>();
            rectTransform.localPosition = new Vector3(QUARTER_SCREEN_WIDTH, 300, 0);
            rectTransform.sizeDelta = new Vector2(HALF_SCREEN_WIDTH, 500);

            // ----------------------------------------------------------------------------
            // ----------------------------------------------------------------------------

            // create a game object to hold the issue list options
            var optionsGO = addPlaceholderGO(issueListGO, "options");
            optionsGO.transform.localPosition = new Vector3(0, 0, 0);

            int xOffset = QUARTER_SCREEN_WIDTH;

            // create the option buttons
            var contrastButton = addButton(optionsGO, "poor_contrast", xOffset, 150,
                userFeedback.getContrastString(), FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var placementButton = addButton(optionsGO, "poor_placement", xOffset, 50,
                userFeedback.getPlacementString(), FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var sizeButton = addButton(optionsGO, "wrong_size", xOffset, -50,
                userFeedback.getSizeString(), FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var distractingButton = addButton(optionsGO, "distracting", xOffset, -150,
                userFeedback.getDistractingString(), FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);
            var otherButton = addButton(optionsGO, "other", xOffset, -250,
                userFeedback.getOtherString(), FONT_SIZE, BUTTON_WIDTH, BUTTON_HEIGHT);

            // ----------------------------------------------------------------------------
            // ----------------------------------------------------------------------------

            // Update the button listeners to toggle selection indicators

            contrastButton.onClick.AddListener(() =>
            {
                userFeedback.poor_contrast = !userFeedback.poor_contrast;
                var text = contrastButton.gameObject.GetComponent<Text>();
                text.text = userFeedback.getContrastString();
            });

            placementButton.onClick.AddListener(() =>
            {
                userFeedback.poor_placement = !userFeedback.poor_placement;
                var text = placementButton.gameObject.GetComponent<Text>();
                text.text = userFeedback.getPlacementString();
            });

            sizeButton.onClick.AddListener(() =>
            {
                userFeedback.wrong_size = !userFeedback.wrong_size;
                var text = sizeButton.gameObject.GetComponent<Text>();
                text.text = userFeedback.getSizeString();
            });

            distractingButton.onClick.AddListener(() =>
            {
                userFeedback.distracting = !userFeedback.distracting;
                var text = distractingButton.gameObject.GetComponent<Text>();
                text.text = userFeedback.getDistractingString();
            });

            otherButton.onClick.AddListener(() =>
            {
                userFeedback.other = !userFeedback.other;
                var text = otherButton.gameObject.GetComponent<Text>();
                text.text = userFeedback.getOtherString();
            });
        }


        private static void displaySubmitButton(GameObject parent)
        {
            // create a game object to hold the feedback form submit button
            var submitButton = addButton(parent, "submit_button", 0, -350, "Submit Feedback", 48, 400, 100);
            submitButton.onClick.AddListener(submitClickListener);
        }


        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------


        private static GameObject addPlaceholderGO(GameObject parent, string name)
        {
            var go = new GameObject();
            go.transform.parent = parent.transform;
            go.name = name;
            go.layer = 5; // UI
            return go;
        }


        private static Button addButton(GameObject parent, string name, int pos_x, int pos_y,
            string text, int fontSize, int width, int height)
        {
            var buttonGO = addPlaceholderGO(parent, name);
            buttonGO.transform.localPosition = new Vector3(pos_x, pos_y, 0);

            Text buttonText = addText(buttonGO, text, fontSize);
            buttonText.alignment = TextAnchor.MiddleCenter;

            RectTransform buttonRectTrans = buttonGO.GetComponent<RectTransform>();
            buttonRectTrans.sizeDelta = new Vector2(width, height);

            Button button = buttonGO.AddComponent<Button>();
            return button;
        }

        private static Toggle addToggle(GameObject parent, ToggleGroup group, string descText, int x, int y, int fontSize)
        {
            var toggleGO = new GameObject();
            toggleGO.transform.parent = parent.gameObject.transform;
            toggleGO.layer = 5; // UI

            var toggle = toggleGO.AddComponent<Toggle>();
            toggle.group = group;

            var rectTrans = toggle.GetComponent<RectTransform>();
            rectTrans.localPosition = new Vector3(x, y, 0);
            rectTrans.sizeDelta = new Vector2(HALF_SCREEN_WIDTH, 100);

            addText(toggleGO, descText, fontSize);
            return toggle;
        }


        private static Text addText(GameObject parent, string descText, int fontSize)
        {
            var font = (Font)Resources.GetBuiltinResource(typeof(Font), "Arial.ttf");
            var text = parent.AddComponent<Text>();

            text.alignment = TextAnchor.MiddleCenter;
            text.text = descText;
            text.font = font;
            text.fontSize = fontSize;
            text.material = font.material;

            return text;
        }

    }
}
