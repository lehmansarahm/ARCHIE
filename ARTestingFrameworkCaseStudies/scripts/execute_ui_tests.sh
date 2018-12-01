#!/usr/bin/env bash

PROJECT=$1
FULL_PACKAGE_NAME=$2
FULL_COMPONENT_NAME=$3

NUM_TRIALS=$4
TRIAL_TIME_SECONDS=$5
TRIAL_TIME_MINUTES=$6

TEST_LABEL=$7
CONFIG_NAME=$8

OUTPUT_DIR=$9
ANDROID_DATA_DIR=$10
DOCS_DIR=$11


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
        -e trialTime ${TRIAL_TIME_MINUTES} \
        -e configFilename ${CONFIG_NAME}"
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