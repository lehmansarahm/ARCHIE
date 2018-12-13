using UnityEngine;
using System;

public class MyLogHandler : ILogHandler
{
    public void LogFormat(LogType logType, UnityEngine.Object context, string format, params object[] args)
    {
        Debug.unityLogger.logHandler.LogFormat(logType, context, format, args);
    }

    public void LogException(Exception exception, UnityEngine.Object context)
    {
        Debug.unityLogger.LogException(exception, context);
    }
}

public class DroneTrackerLog
{
    private const string TAG = "DroneTracker";
    Logger logger;

    public DroneTrackerLog()
    {
        logger = new Logger(new MyLogHandler());
    }

    public void Post(string message)
    {
        // logger.Log(TAG, message);
        Debug.Log(message);
    }
}