#!/usr/bin/env bash

# -----------------------------------------------------------------------------------
#                       DUMPS TO "SCRIPTS/OUT/" (IGNORED BY GIT)
# -----------------------------------------------------------------------------------
# EXECUTE BY NAVIGATING TO "SCRIPTS" FOLDER IN ANDROID STUDIO TERMINAL, THEN RUNNING:
#       > sh ./run_test_suite.sh {package name}
# -----------------------------------------------------------------------------------


PACKAGE_NAMES=$1            # PROVIDED BY USER AS COMMAND LINE ARGUMENT ...
                            # IF NULL, RUN DEVICE-LEVEL RESOURCE PROFILER !!
                            # ex:  "edu.temple.gtc_services remote_process edu.temple.tf_tester com.google.android.youtube org.tensorflow.demo"

((NUM_TRIALS=1))            # number of trials to execute
((WAIT_INTERVAL=5))         # number of seconds to wait between each reading during a trial
((NUM_MINUTES=5))           # the number of total minutes to run this script (PER TRIAL)

((TRIAL_TIME_MINUTES=${NUM_MINUTES} + 1))   # number of minutes a trial will take to execute
                                            # (five minutes for actual operations plus one minute break)

PACKAGE_NAME="com.archie"
PROJECT_NAMES=('tf_classify') # 'tf_classify_mod' 'tf_speech' 'tf_speech_mod')
ACTIVITY_NAMES=('ClassifierActivity') # 'ClassifierActivity' 'SpeechActivity' 'SpeechActivity')

QUIT_AFTER_TIME_LIMIT="true"
TEST_LABEL="roses"

# -----------------------------------------------------------------------------------
# -----------------------------------------------------------------------------------

echo ""                                 # spacer line
echo "--------------------------------------------------------------------------------"
echo "    AR TESTING FRAMEWORK - AUTOMATED TEST SUITE"
echo "--------------------------------------------------------------------------------"
echo ""                                 # spacer line

# -----------------------------------------------------------------------------------
# -----------------------------------------------------------------------------------

for i in "${!PROJECT_NAMES[@]}"
do

    echo ""                             # spacer lineo
    echo "--------------------------------------------------------------------------------"
    echo "    AR TESTING FRAMEWORK - PROJECT: ${PROJECT}"
    echo "--------------------------------------------------------------------------------"
    echo ""                             # spacer line

    PROJECT=${PROJECT_NAMES[i]}
    FULL_PACKAGE_NAME="${PACKAGE_NAME}.${PROJECT}"
    ACTIVITY=""

    for j in "${!ACTIVITY_NAMES[@]}"
    do
        if [[ ${i} = ${j} ]]
        then
            ACTIVITY=${ACTIVITY_NAMES[j]}
        fi
    done

    mkdir "out"
    OUTPUT_DIR="out/${PROJECT}"
    mkdir ${OUTPUT_DIR}
    echo "Output dir created at ${OUTPUT_DIR}"

    FULL_COMPONENT_NAME="${FULL_PACKAGE_NAME}/${FULL_PACKAGE_NAME}.${ACTIVITY}"
    echo "Running scripts with params: "
    echo "\t Number of trials: ${NUM_TRIALS}"
    echo "\t Trial time (minutes): ${TRIAL_TIME_MINUTES}"
    echo "\t Full component name: ${FULL_COMPONENT_NAME}"
    echo "\t Test label: ${TEST_LABEL}"
    echo ""                             # spacer line

    # -----------------------------------------------------------------------------------
    # -----------------------------------------------------------------------------------

    for (( i=1; i<=$NUM_TRIALS; i++ ))
    do

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - UI TESTING - TRIAL NUM $i"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

        TODAY="$(date +'%F')"
        NOW="$(date +'%H%M%S')"
        OUTPUT_FILE="${FULL_PACKAGE_NAME}.${TODAY}.${NOW}.txt"
        echo "Output will be written to file: $OUTPUT_FILE"
        echo ""                         # spacer line

        echo "\t\t running >> adb shell am start -n ${FULL_COMPONENT_NAME} -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} -e testingLabel ${TEST_LABEL}"
        adb shell am start -n ${FULL_COMPONENT_NAME} -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} -e testingLabel ${TEST_LABEL} >> "${OUTPUT_DIR}/${OUTPUT_FILE}"

        ((TRIAL_TIME_SECONDS=$TRIAL_TIME_MINUTES * 60))
        echo "\t\t running >> sleep ${TRIAL_TIME_SECONDS}"
        sleep ${TRIAL_TIME_SECONDS}

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - UI TESTING TRIAL COMPLETE"
        echo "--------------------------------------------------------------------------------"
        echo "Output available: ${OUTPUT_DIR}/$OUTPUT_FILE"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

    done

    # -----------------------------------------------------------------------------------
    # -----------------------------------------------------------------------------------

    echo ""                                 # spacer line
    echo ""                                 # spacer line
    echo "--------------------------------------------------------------------------------"
    echo "--------------------------------------------------------------------------------"
    echo "\t\t\t PREPARING FOR RESOURCE TESTING"
    echo "--------------------------------------------------------------------------------"

    echo "Verifying destination directory"
    adb shell "mkdir /storage/self/primary/Documents/"
    echo ""                                 # spacer line

    echo "Pushing latest version of resource script to Android device"
    adb push dev_resource_script.sh /storage/self/primary/Documents/
    adb push proc_resource_script.sh /storage/self/primary/Documents/
    echo ""                                 # spacer line

    echo "Updating quit-after-time-limit flag"
    QUIT_AFTER_TIME_LIMIT="false"

    # -----------------------------------------------------------------------------------
    # -----------------------------------------------------------------------------------

    for (( i=1; i<=$NUM_TRIALS; i++ ))
    do

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - RESOURCE PROFILER - TRIAL NUM $i"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

        echo "\t\t running >> adb shell am start -n ${FULL_COMPONENT_NAME} -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} -e testingLabel ${TEST_LABEL}"
        adb shell am start -n ${FULL_COMPONENT_NAME} -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} -e testingLabel ${TEST_LABEL}
        echo ""                         # spacer line

        ((SCRIPT_START_TIME=$(date +%s)))
        ((NUM_SECONDS=$NUM_MINUTES * 60))   # DERIVED VALUE ... NO NEED TO UPDATE ...
                                            # number of total seconds to run this script

        TODAY="$(date +'%F')"
        NOW="$(date +'%H%M%S')"
        OUTPUT_FILE=""

        if [[ "${PACKAGE_NAMES}" != "" ]]
        then

            OUTPUT_FILE="${PACKAGE_NAMES}.${TODAY}.${NOW}.csv"
            echo "Script will monitor processes: <${PACKAGE_NAMES}> for ${NUM_SECONDS} seconds in increments of ${WAIT_INTERVAL} seconds"
            echo "Output will be written to file: ${OUTPUT_FILE}"

            echo ""                     # spacer line
            echo "Running resource profiler.  (This may take some time to complete.  Thank you for your patience.)"
            adb shell sh storage/self/primary/Documents/proc_resource_script.sh ${NUM_SECONDS} ${WAIT_INTERVAL} ${PACKAGE_NAMES} >> "${OUTPUT_DIR}/${OUTPUT_FILE}"

        else

            OUTPUT_FILE="system.${TODAY}.${NOW}.csv"
            echo "Script will monitor device-level CPU/RAM usage for ${NUM_SECONDS} seconds in increments of ${WAIT_INTERVAL} seconds"
            echo "Output will be written to file: ${OUTPUT_FILE}"

            echo ""                     # spacer line
            echo "Running resource profiler.  (This may take some time to complete.  Thank you for your patience.)"
            adb shell sh storage/self/primary/Documents/dev_resource_script.sh ${NUM_SECONDS} ${WAIT_INTERVAL} >> "${OUTPUT_DIR}/${OUTPUT_FILE}"

        fi

        echo ""                         # spacer line
        echo "\t\t running >> adb shell am force-stop ${FULL_PACKAGE_NAME}"
        adb shell am force-stop ${FULL_PACKAGE_NAME}

        # calculate how long it took to finish
        ((SCRIPT_FINISH_TIME=$(date +%s)))
        ((PROCESSING_TIME=${SCRIPT_FINISH_TIME}-${SCRIPT_START_TIME}))

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - RESOURCE PROFILING TRIAL COMPLETE"
        echo "--------------------------------------------------------------------------------"
        echo "Output available: ${OUTPUT_DIR}/$OUTPUT_FILE"
        echo "Total processing time (seconds): $PROCESSING_TIME"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

    done

    echo ""                             # spacer line
    echo "--------------------------------------------------------------------------------"
    echo "    AR TESTING FRAMEWORK - PROJECT: ${PROJECT} COMPLETE!"
    echo "--------------------------------------------------------------------------------"
    echo ""

done

echo ""                                 # spacer line
echo "--------------------------------------------------------------------------------"
echo "    AR TESTING FRAMEWORK - AUTOMATED TEST SUITE COMPLETE"
echo "--------------------------------------------------------------------------------"
echo ""                                 # spacer line





# -----------------------------------------------------------------------------------
#                                   REFERENCE
# -----------------------------------------------------------------------------------


# TO DEPLOY TO DEVICE:                  adb push dev_resource_script.sh storage/self/primary/Documents/
# IF DOCS FOLDER DOESN'T EXIST:         adb shell mkdir storage/self/primary/Documents
# TO RUN SCRIPT ON DEVICE:              adb shell sh storage/self/primary/Documents/dev_resource_script.sh