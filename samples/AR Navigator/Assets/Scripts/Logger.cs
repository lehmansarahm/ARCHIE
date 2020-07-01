using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Logger
{

    private const string LOG_TAG = "ARCHIE: \t";

    public static void debug(string message)
    {
        Debug.Log(LOG_TAG + message);
    }

    public static void debugFormat(string message, params string[] args)
    {
        Debug.LogFormat(LOG_TAG + message, args);
    }

    public static void error(string message)
    {
        Debug.LogError(LOG_TAG + message);
    }

}
