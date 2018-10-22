#!/system/bin/env sh


((RUN_START_TIME=$(date +%s)))              # time script execution began
((LAST_RUN_TIME=$(date +%s)))               # time (in seconds) that loop was last executed
((WAIT_INTERVAL=10))
((NUM_SECONDS=15))

sleep 10                                 # wait ten seconds

CURRENT_TIME=$(date +%s)
echo "Current time: $CURRENT_TIME \tLast run time: $LAST_RUN_TIME"

((LOOP_EXEC_TIME=$CURRENT_TIME-$LAST_RUN_TIME))
echo "Loop exec time: $LOOP_EXEC_TIME"

if [ $LOOP_EXEC_TIME -lt $WAIT_INTERVAL ]
then
    # force the loop to wait for at least the given interval ...
    # if the time to execute took longer than the min interval, skip this part
    ((TIME_TO_SLEEP=$WAIT_INTERVAL-$LOOP_EXEC_TIME))
    sleep $TIME_TO_SLEEP
fi

((LAST_RUN_TIME=$(date +%s)))
((TIME_ELAPSED=$LAST_RUN_TIME-$RUN_START_TIME))

if [ $TIME_ELAPSED -ge $NUM_SECONDS ]
then
    echo "Time limit reached!"
else
    echo "ERROR: did not reach expected time limit!  Time elapsed: $TIME_ELAPSED"
fi