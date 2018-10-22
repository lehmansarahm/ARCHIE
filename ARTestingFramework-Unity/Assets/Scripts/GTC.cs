using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class GTC : MonoBehaviour, ITrackableEventHandler
{
    TrackableBehaviour mTrackableBehaviour;
    Text mFeedbackText;

    AndroidJavaObject _gtcController;

    int procID = 99999;     // set in "Start()"
    readonly int annoCollectionInterval = 2, uxCollectionInterval = 2, resultTimeLimit = 1;
    readonly string procName = "Unity Tester", desiredResult = "Pikachu";

    /// <summary>
    /// Start this instance.
    /// </summary>
    void Start()
    {
        mFeedbackText = GameObject.Find("feedbackText").GetComponent<Text>();
        procID = Process.GetCurrentProcess().Id;

#if UNITY_ANDROID
        mFeedbackText.text = "Please locate the marker.";
        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
        {
            UnityEngine.Debug.Log("Registering tracker listener and grabbing reference to current activity.");
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
            AndroidJavaClass jclass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject activity = jclass.GetStatic<AndroidJavaObject>("currentActivity");

            if (_gtcController == null)
            {
                UnityEngine.Debug.Log("Initializing GTC Controller.");
                _gtcController = new AndroidJavaObject("edu.temple.gtc_core.GtcController", activity, procID, procName);
            }

            UnityEngine.Debug.Log("Starting GTC Services.");
            _gtcController.Call("startServices");

            UnityEngine.Debug.Log("Scheduling async Annotation, UX data collection.");
            _gtcController.Call("scheduleAsyncDataCollection", desiredResult, annoCollectionInterval, uxCollectionInterval);
        }
#else
        mFeedbackText.text = "Please execute on Android device.";
#endif

    }

    void OnDestroy()
    {
        UnityEngine.Debug.Log("Activity destroyed ... unregistering tracker listener and stopping GTC Services.");
        if (mTrackableBehaviour) mTrackableBehaviour.UnregisterTrackableEventHandler(this);
        if (_gtcController != null) _gtcController.Call("stopServices");
    }

    /// <summary>
    /// Update this instance.
    /// </summary>
    void Update() { /* do nothing */ }

    /// <summary>
    /// Called when the trackable state has changed.
    /// </summary>
    /// <param name="previousStatus">Previous status.</param>
    /// <param name="newStatus">New status.</param>
    public void OnTrackableStateChanged(TrackableBehaviour.Status previousStatus,
        TrackableBehaviour.Status newStatus)
    {
        UnityEngine.Debug.Log("Trackable state event!");
        if (mTrackableBehaviour is ImageTargetBehaviour)
        {
            if (newStatus == TrackableBehaviour.Status.DETECTED ||
                newStatus == TrackableBehaviour.Status.TRACKED ||
                newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
            {
                mFeedbackText.text = ("New target found!  Alert the GTC!");
                _gtcController.Call("logEventMatch", desiredResult, resultTimeLimit);
            }
            else
            {
                mFeedbackText.text = ("Target lost.");
            }
        } else {
            UnityEngine.Debug.Log("Inappropriate trackable behavior type.");
        }
    }

}