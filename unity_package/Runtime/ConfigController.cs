using ARCHIE.Data;
using ARCHIE.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ARCHIE
{
    public class ConfigController : MonoBehaviour
    {
        public interface ConfigListener
        {
            void newConfigSelected(string configID);
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        ConfigSettings settings;
        ConfigListener listener;

        public ConfigController(string settings_filepath, ConfigListener listener)
        {
            loadSettings(settings_filepath);
            this.listener = listener;
        }

        public IEnumerator selectNextConfig()
        {
            while (true)
            {
                var functionsInstance = Firebase.Functions.FirebaseFunctions.DefaultInstance;
                var function = functionsInstance.GetHttpsCallable("selectNextConfig");

                var data = new Dictionary<string, object>();
                data["text"] = "text";      // placeholder
                data["push"] = true;        // placeholder

                function.CallAsync(data).ContinueWith((task) => {
                    if (task.IsFaulted || task.IsCanceled)
                    {
                        foreach (var innerEx in task.Exception.InnerExceptions)
                        {
                            ARCHIELogger.error(innerEx.ToString());
                        }
                    }
                    else
                    {
                        try
                        {
                            var resultData = (Dictionary<object, object>)task.Result.Data;
                            foreach (KeyValuePair<object, object> entry in resultData)
                            {
                                ARCHIELogger.debug("Received cloud func result: "
                                    + entry.Key.ToString() + ", " + entry.Value.ToString());
                                if (entry.Key.ToString().Equals("new_config_id"))
                                {
                                    listener.newConfigSelected(entry.Value.ToString());
                                }
                            }
                        }
                        catch (Exception ex)
                        {
                            ARCHIELogger.error("Something went wrong while trying to parse results from "
                                + "newest selected config! " + ex.Message);
                        }
                    }
                });

                var interval = settings.config_test_period.getPeriodInterval();
                yield return new WaitForSeconds(interval);
            }
        }

        private void loadSettings(string filepath)
        {
            var cleanedFilepath = filepath.Replace(".json", "");
            ARCHIELogger.debug("Attempting to load config settings from file: " + cleanedFilepath);

            var targetFile = Resources.Load<TextAsset>(cleanedFilepath);
            ARCHIELogger.debug("Was file load successful: " + (targetFile != null));

            settings = JsonUtility.FromJson<ConfigSettings>(targetFile.text);
        }

    }
}
