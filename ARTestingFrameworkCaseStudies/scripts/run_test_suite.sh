#!/usr/bin/env bash

# -----------------------------------------------------------------------------------
#                       DUMPS TO "SCRIPTS/OUT/" (IGNORED BY GIT)
# -----------------------------------------------------------------------------------
# EXECUTE BY NAVIGATING TO "SCRIPTS" FOLDER IN ANDROID STUDIO TERMINAL, THEN RUNNING:
#       > sh ./run_test_suite.sh {package name}
# -----------------------------------------------------------------------------------


PACKAGE_NAMES=$1            # PROVIDED BY USER AS COMMAND LINE ARGUMENT ...
                            # IF NULL, RUN DEVICE-LEVEL RESOURCE PROFILER !!

((NUM_TRIALS=5))            # number of trials to execute

((TRIAL_TIME_MINUTES=5))    # the number of total minutes to run this script (PER TRIAL)
((TRIAL_TIME_SECONDS=$TRIAL_TIME_MINUTES * 60))

((WAIT_INT_SECS=5))         # interval (in seconds) to wait between each reading during a trial

TRUE="true"
FALSE="false"

INCLUDE_UI_TESTS=${TRUE}
INCLUDE_RESOURCE_TESTS=${TRUE}

PACKAGE_NAME="com.archie"
PROJECT_NAMES=('tf_classify_mod') # 'tf_speech' 'tf_speech_mod')
ACTIVITY_NAMES=('archie_mods.ModifiedClassifierActivity') # 'SpeechActivity' 'SpeechActivity')
TEST_LABEL="noTarget"

ANDROID_DATA_DIR="/storage/self/primary/Android/data"
DOCS_DIR="/storage/self/primary/Documents"



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

    PROJECT=${PROJECT_NAMES[i]}
    FULL_PACKAGE_NAME="${PACKAGE_NAME}.${PROJECT}"
    ACTIVITY=""

    echo ""                             # spacer line
    echo "--------------------------------------------------------------------------------"
    echo "    AR TESTING FRAMEWORK - PROJECT: ${PROJECT}"
    echo "--------------------------------------------------------------------------------"
    echo ""                             # spacer line

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
    echo "\t Trial execution time (minutes): ${TRIAL_TIME_MINUTES}"
    echo "\t Trial execution time (seconds): ${TRIAL_TIME_SECONDS}"
    echo "\t Full component name: ${FULL_COMPONENT_NAME}"
    echo "\t Test label: ${TEST_LABEL}"
    echo ""                             # spacer line



    # -----------------------------------------------------------------------------------

    if [[ ${INCLUDE_UI_TESTS} = ${TRUE} ]]
    then                                # begin UI testing ...

    # -----------------------------------------------------------------------------------

    QUIT_AFTER_TIME_LIMIT="true"
    echo "Updated QUIT_AFTER_TIME_LIMIT: ${QUIT_AFTER_TIME_LIMIT}"

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

        EXECUTE_TIMED_APP_COMMAND="am start -n ${FULL_COMPONENT_NAME} \
            -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} \
            -e testingLabel ${TEST_LABEL} \
            -e trialTime ${TRIAL_TIME_MINUTES}"
        echo "\t\t running >> adb shell ${EXECUTE_TIMED_APP_COMMAND}"
        adb shell ${EXECUTE_TIMED_APP_COMMAND}

        ((CURRENT_TIME=0))
        ((INCREMENT=10))

        while [[ ${CURRENT_TIME} -lt ${TRIAL_TIME_SECONDS} ]]
        do
            echo "\t\t running >> time: ${CURRENT_TIME} seconds"
            ((CURRENT_TIME=CURRENT_TIME+INCREMENT))
            sleep ${INCREMENT}
        done

        echo "\t\t running >> [[ TIMED TRIAL COMPLETE ]]"

        echo ""                         # spacer line
        echo "\t\t running >> sleep 10 (just in case)"
        sleep ${INCREMENT}

        echo "\t\t running >> adb pull ${ANDROID_DATA_DIR}/${FULL_PACKAGE_NAME}/files"
        adb pull ${ANDROID_DATA_DIR}/${FULL_PACKAGE_NAME}/files

        echo "\t\t running >> sleep 10 (just in case)"
        sleep ${INCREMENT}

        echo "\t\t running >> adb shell rm -r ${ANDROID_DATA_DIR}/${FULL_PACKAGE_NAME}/files"
        adb shell rm -r ${ANDROID_DATA_DIR}/${FULL_PACKAGE_NAME}/files

        echo "\t\t running >> mv files ${OUTPUT_DIR}/files${i}"
        mv files ${OUTPUT_DIR}/files${i}

        echo "\t\t running >> logcat -e ${PROJECT} -d > '${OUTPUT_DIR}/${OUTPUT_FILE}' "
        adb logcat -e ${PROJECT} -d > "${OUTPUT_DIR}/${OUTPUT_FILE}"

        echo "\t\t running >> sleep 10 (just in case)"
        sleep ${INCREMENT}

        echo ""                         # spacer line
        echo "\t\t running >> adb shell am kill ${FULL_PACKAGE_NAME}"
        adb shell am force-stop ${FULL_PACKAGE_NAME}
        adb shell am kill ${FULL_PACKAGE_NAME}

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - UI TESTING TRIAL COMPLETE"
        echo "--------------------------------------------------------------------------------"
        echo "Output available: ${OUTPUT_DIR}/$OUTPUT_FILE"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

    done

    # -----------------------------------------------------------------------------------

    fi                                  # end UI testing ...

    # -----------------------------------------------------------------------------------


    # -----------------------------------------------------------------------------------
    # -----------------------------------------------------------------------------------


    # -----------------------------------------------------------------------------------

    if [[ ${INCLUDE_RESOURCE_TESTS} = ${TRUE} ]]
    then                                # begin resource testing ...

    # -----------------------------------------------------------------------------------

    echo ""                                 # spacer line
    echo ""                                 # spacer line
    echo "--------------------------------------------------------------------------------"
    echo "--------------------------------------------------------------------------------"
    echo "\t\t\t PREPARING FOR RESOURCE TESTING"
    echo "--------------------------------------------------------------------------------"

    echo "Verifying destination directory"
    adb shell "mkdir ${DOCS_DIR}"
    echo ""                                 # spacer line

    echo "Pushing latest version of resource script to Android device"
    adb push dev_resource_script.sh ${DOCS_DIR}
    adb push proc_resource_script.sh ${DOCS_DIR}
    echo ""                                 # spacer line

    QUIT_AFTER_TIME_LIMIT="false"
    echo "Updated QUIT_AFTER_TIME_LIMIT: ${QUIT_AFTER_TIME_LIMIT}"
    echo ""                                 # spacer line

    EXECUTE_UNTIMED_APP_COMMAND="am start -n ${FULL_COMPONENT_NAME} \
        -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT}
        -e testingLabel ${TEST_LABEL}"
    echo "Starting up current component for project: ${FULL_COMPONENT_NAME}"
    echo "Running >> adb shell ${EXECUTE_UNTIMED_APP_COMMAND}"
    adb shell ${EXECUTE_UNTIMED_APP_COMMAND}
    echo ""                         # spacer line

    # -----------------------------------------------------------------------------------

    for (( i=1; i<=$NUM_TRIALS; i++ ))
    do

        echo ""                         # spacer line
        echo "--------------------------------------------------------------------------------"
        echo "\tAR TESTING FRAMEWORK - RESOURCE PROFILER - TRIAL NUM $i"
        echo "--------------------------------------------------------------------------------"
        echo ""                         # spacer line

        ((SCRIPT_START_TIME=$(date +%s)))
        ((NUM_SECONDS=$TRIAL_TIME_MINUTES * 60))   # DERIVED VALUE ... NO NEED TO UPDATE ...
                                            # number of total seconds to run this script

        TODAY="$(date +'%F')"
        NOW="$(date +'%H%M%S')"
        OUTPUT_FILE=""

        if [[ "${PACKAGE_NAMES}" != "" ]]
        then

            OUTPUT_FILE="${PACKAGE_NAMES}.${TODAY}.${NOW}.csv"
            EXECUTE_RESOURCE_SCRIPT_COMMAND="sh \
                ${DOCS_DIR}/proc_resource_script.sh \
                ${NUM_SECONDS} ${WAIT_INT_SECS} ${PACKAGE_NAMES}"

            echo "Script will monitor processes: <${PACKAGE_NAMES}> \
                for ${NUM_SECONDS} seconds in increments of ${WAIT_INT_SECS} seconds"
            echo "Output will be written to file: ${OUTPUT_FILE}"

            echo ""                     # spacer line
            echo "Running resource profiler.  (This may take some time to complete.  \
                Thank you for your patience.)"
            adb shell ${EXECUTE_RESOURCE_SCRIPT_COMMAND} >> "${OUTPUT_DIR}/${OUTPUT_FILE}"

        else

            OUTPUT_FILE="system.${TODAY}.${NOW}.csv"
            EXECUTE_RESOURCE_SCRIPT_COMMAND="sh \
                ${DOCS_DIR}/dev_resource_script.sh \
                ${NUM_SECONDS} ${WAIT_INT_SECS}"

            echo "Script will monitor device-level CPU/RAM usage for ${NUM_SECONDS} seconds \
                in increments of ${WAIT_INT_SECS} seconds"
            echo "Output will be written to file: ${OUTPUT_FILE}"

            echo ""                     # spacer line
            echo "Running resource profiler.  (This may take some time to complete.  \
                Thank you for your patience.)"
            adb shell ${EXECUTE_RESOURCE_SCRIPT_COMMAND} >> "${OUTPUT_DIR}/${OUTPUT_FILE}"

        fi

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

    echo ""                         # spacer line
    echo "All done with resource trials.  Shutting down all instances of package: ${FULL_PACKAGE_NAME}"
    echo "Running >> adb shell am kill ${FULL_PACKAGE_NAME}"
    adb shell am force-stop ${FULL_PACKAGE_NAME}
    adb shell am kill ${FULL_PACKAGE_NAME}

    # -----------------------------------------------------------------------------------

    fi                                  # end resource testing ...

    # -----------------------------------------------------------------------------------


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