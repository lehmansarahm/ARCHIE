using ARCHIE.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics; 
using UnityEngine;

namespace ARCHIE
{
    public class ResourceController
    {

        private const int SAMPLE_INTERVAL_SEC = 1;  // sample rate 1 Hz

        private List<string> cpu = new List<string>();
        private List<string> ram = new List<string>();
        private List<string> fps = new List<string>();

        private int timeCounter = 0;
        private int frameCounter = 0;

        public ResourceController()
        {
            // empty constructor
        }


        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------


        public IEnumerator MonitorResourceConsumption()
        {
            while (true)
            {
                // log CPU (percentage utilized)
                // cpu.Add(timeCounter + "," + cpuCounter.NextValue()); 

                // log RAM (MB utilized)
                // ram.Add(timeCounter + "," + ramCounter.NextValue());



                try
                {
                    ReadResources();
                }
                catch (Exception ex)
                {
                    ARCHIELogger.error("Something went wrong while trying to read system resources: " + ex.InnerException);
                    ARCHIELogger.error(ex.StackTrace);
                }



                // log FPS and update counter
                fps.Add(timeCounter + "," + frameCounter);
                frameCounter = 0;

                // progress time counter and wait for sampling interval
                timeCounter++;
                yield return new WaitForSeconds(SAMPLE_INTERVAL_SEC);
            }
        }

        public void IncrementFrameCount()
        {
            frameCounter++;
        }


        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------


        public List<string> GetCpu()
        {
            var newList = new List<string>(cpu);
            cpu.Clear();
            return newList;
        }

        public List<string> GetRam()
        {
            var newList = new List<string>(ram);
            ram.Clear();
            return newList;
        }

        public List<string> GetFps()
        {
            var newList = new List<string>(fps);
            fps.Clear();
            return newList;
        }

        private void ReadResources()
        {
            string bundleIdentifier = "edu.temple.archie.labels";
            Process process = new Process();

            process.StartInfo.FileName = "sh";
            process.StartInfo.Arguments = "-c top | grep " + bundleIdentifier;
            process.StartInfo.UseShellExecute = false;
            process.StartInfo.RedirectStandardOutput = true;
            process.StartInfo.RedirectStandardError = true;
            process.OutputDataReceived += (sender, args) =>
            { // this is not executed in main thread, so dont use unity functions
                if (args.Data.Contains(bundleIdentifier))
                {
                    ARCHIELogger.debugFormat("Stats: %s", args.Data);
                }
                ARCHIELogger.debugFormat("received output: %s", args.Data);
            };

            process.ErrorDataReceived += (sender, args) => ARCHIELogger.debugFormat("Error output: %s", args.Data);
            process.Start();
            process.BeginOutputReadLine();
            process.BeginErrorReadLine();

            if (process.HasExited)
                ARCHIELogger.error("Process has already exited.");
        }

    }
}