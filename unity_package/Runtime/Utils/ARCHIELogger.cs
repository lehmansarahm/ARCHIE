using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ARCHIE.Utils
{
    public class ARCHIELogger
    {

        public static void debug(string message)
        {
            Debug.Log(Constants.LOG_TAG + message);
        }

        public static void debugFormat(string message, params string[] args)
        {
            Debug.LogFormat(Constants.LOG_TAG + message, args);
        }

        public static void error(string message)
        {
            Debug.LogError(Constants.LOG_TAG + message);
        }

    }
}
