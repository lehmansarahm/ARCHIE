#!/usr/bin/env bash

PACKAGE="com.archie.tf_classify_mod"
ACTIVITY="archie_mods.ModifiedClassifierActivity"
ANDROID_DATA_DIR="/storage/self/primary/Android/data"

QUIT_AFTER_TIME_LIMIT="true"
TESTING_LABEL="tryingToGetGtcOutputWorking"
TRIAL_TIME_MINUTES="1"

adb shell am start -n ${PACKAGE}/${PACKAGE}.${ACTIVITY} \
    -e quitAfterTimeLimit ${QUIT_AFTER_TIME_LIMIT} \
    -e testingLabel ${TESTING_LABEL} \
    -e trialTime ${TRIAL_TIME_MINUTES}

((TRIAL_TIME_SECONDS=$TRIAL_TIME_MINUTES * 60))
sleep ${TRIAL_TIME_SECONDS}
sleep 10

adb pull ${ANDROID_DATA_DIR}/${PACKAGE}/files

sleep 10

adb shell rm -r ${ANDROID_DATA_DIR}/${PACKAGE}/files

mv files out/testFiles

adb shell am force-stop ${PACKAGE}
adb shell am kill ${PACKAGE}