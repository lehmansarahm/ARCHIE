# -----------------------------------------------------------------------------------
#                       DUMPS TO "SCRIPTS/OUT/" (IGNORED BY GIT)
# -----------------------------------------------------------------------------------
# EXECUTE BY NAVIGATING TO "SCRIPTS" FOLDER IN ANDROID STUDIO TERMINAL, THEN RUNNING:
#       > sh ./run_resource_profiler.sh
# -----------------------------------------------------------------------------------

TODAY="$(date +'%F')"
NOW="$(date +'%H%M%S')"
OUTPUT_FILE="$TODAY.$NOW.csv"
echo "Beginning resource profiling ... output will be written to file: $OUTPUT_FILE"

((WAIT_INTERVAL=5))                     # number of seconds to wait between each reading
((NUM_MINUTES=1))                       # the number of total minutes to run this script
((NUM_SECONDS=$NUM_MINUTES * 60))       # number of total seconds to run this script

PACKAGE_NAMES="org.tensorflow.demo" # "edu.temple.gtc_services remote_process edu.temple.tf_tester com.google.android.youtube org.tensorflow.demo"
echo "Script will monitor processes: <$PACKAGE_NAMES> for $NUM_SECONDS seconds in increments of $WAIT_INTERVAL seconds"

echo ""     # spacer line
echo "Pushing latest version of resource script to Android device"
adb push test.sh storage/self/primary/Documents/

echo ""     # spacer line
echo "Running resource profiler.  (This may take some time to complete.  Thank you for your patience.)"
adb shell sh storage/self/primary/Documents/test.sh $NUM_SECONDS $WAIT_INTERVAL $PACKAGE_NAMES # >> "out/$OUTPUT_FILE"

echo ""     # spacer line
echo "Resource profiling complete!  Output available: $OUTPUT_FILE"
echo ""     # spacer line


# -----------------------------------------------------------------------------------
#                                   REFERENCE
# -----------------------------------------------------------------------------------


# TO DEPLOY TO DEVICE:                  adb push resource_script.sh storage/self/primary/Documents/
# IF DOCS FOLDER DOESN'T EXIST:         adb shell mkdir storage/self/primary/Documents
# TO RUN SCRIPT ON DEVICE:              adb shell sh storage/self/primary/Documents/resource_script.sh