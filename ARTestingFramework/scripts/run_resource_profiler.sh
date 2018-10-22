# -----------------------------------------------------------------------------------
#                       DUMPS TO "SCRIPTS/OUT/" (IGNORED BY GIT)
# -----------------------------------------------------------------------------------
# EXECUTE BY NAVIGATING TO "SCRIPTS" FOLDER IN ANDROID STUDIO TERMINAL, THEN RUNNING:
#       > sh ./run_resource_profiler.sh {package name}
# -----------------------------------------------------------------------------------

echo ""                                 # spacer line
echo "--------------------------------------------------------------------------------"
echo "\tAR TESTING FRAMEWORK - RESOURCE PROFILER"
echo "--------------------------------------------------------------------------------"
((SCRIPT_START_TIME=$(date +%s)))

echo "Pushing latest version of resource script to Android device"
adb push resource_script.sh storage/self/primary/Documents/
echo ""                                 # spacer line

((WAIT_INTERVAL=5))                     # number of seconds to wait between each reading
((NUM_MINUTES=5))                       # the number of total minutes to run this script
((NUM_SECONDS=$NUM_MINUTES * 60))       # number of total seconds to run this script

PACKAGE_NAMES=$1                        # "edu.temple.gtc_services remote_process edu.temple.tf_tester com.google.android.youtube org.tensorflow.demo"

TODAY="$(date +'%F')"
NOW="$(date +'%H%M%S')"
OUTPUT_FILE=""

if [ "$PACKAGE_NAMES" != "" ]
then

    OUTPUT_FILE="$PACKAGE_NAMES.$TODAY.$NOW.csv"
    echo "Script will monitor processes: <$PACKAGE_NAMES> for $NUM_SECONDS seconds in increments of $WAIT_INTERVAL seconds"
    echo "Output will be written to file: $OUTPUT_FILE"

    echo ""                             # spacer line
    echo "Running resource profiler.  (This may take some time to complete.  Thank you for your patience.)"
    adb shell sh storage/self/primary/Documents/resource_script.sh $NUM_SECONDS $WAIT_INTERVAL $PACKAGE_NAMES >> "out/$OUTPUT_FILE"

else

    OUTPUT_FILE="system.$TODAY.$NOW.csv"
    echo "Script will monitor device-level CPU/RAM usage for $NUM_SECONDS seconds in increments of $WAIT_INTERVAL seconds"
    echo "Output will be written to file: $OUTPUT_FILE"

    echo ""                             # spacer line
    echo "Running resource profiler.  (This may take some time to complete.  Thank you for your patience.)"
    adb shell sh storage/self/primary/Documents/resource_script.sh $NUM_SECONDS $WAIT_INTERVAL >> "out/$OUTPUT_FILE"

fi

# calculate how long it took to finish
((SCRIPT_FINISH_TIME=$(date +%s)))
((PROCESSING_TIME=$SCRIPT_FINISH_TIME-$SCRIPT_START_TIME))

echo ""                                 # spacer line
echo "--------------------------------------------------------------------------------"
echo "\tAR TESTING FRAMEWORK - RESOURCE PROFILING COMPLETE"
echo "--------------------------------------------------------------------------------"
echo "Output available: $OUTPUT_FILE"
echo "Total processing time (seconds): $PROCESSING_TIME"
echo ""                                 # spacer line


# -----------------------------------------------------------------------------------
#                                   REFERENCE
# -----------------------------------------------------------------------------------


# TO DEPLOY TO DEVICE:                  adb push resource_script.sh storage/self/primary/Documents/
# IF DOCS FOLDER DOESN'T EXIST:         adb shell mkdir storage/self/primary/Documents
# TO RUN SCRIPT ON DEVICE:              adb shell sh storage/self/primary/Documents/resource_script.sh