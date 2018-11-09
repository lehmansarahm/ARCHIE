#!/system/bin/env sh

# echo ""
# echo "RETRIEVING DEVICE, ENVIRONMENT INFO:"
# echo ""

# echo "$(whoami)@$(hostname)"
# uname -a
# which env
# which sh

# echo ""                                 # spacer line
# echo "RUNNING RESOURCE PROFILING:"
# echo ""                                 # spacer line

((PS_PID_INDEX=1))                      # index of the given proc's PID when parsing results from the "ps" command
((TOP_CPU_INDEX=2))                     # index of the CPU percentage field when parsing results from the "top" command
((TOP_MEM_INDEX=6))                     # index of "RSS" field when parsing results from the "top" command

# ------------------------------------------------------------------------------------
# ------------------------------------------------------------------------------------
#                                       NOTE!!!
# ------------------------------------------------------------------------------------
# RSS is the total memory actually held in RAM for a process. RSS can be misleading,
# because it reports the total all of the shared libraries that the process uses, even
# though a shared library is only loaded into memory once regardless of how many processes
# use it. RSS is not an accurate representation of the memory usage for a single process.
# ------------------------------------------------------------------------------------
# ------------------------------------------------------------------------------------

((RUN_START_TIME=$(date +%s)))          # time script execution began
((LAST_RUN_TIME=$(date +%s)))           # time (in seconds) that loop was last executed
((TIME_ELAPSED=0))                      # total time elapsed
((REC_NUM=0))                           # current output record number

NUM_SECONDS=$1                          # first arg passed in on command line
WAIT_INTERVAL=$2                        # second arg passed in on command line

HEADER="Num,Time (sec),CPU User (%),CPU System (%),Total Mem (kB),Free Mem (kB)"
PACKAGE_NAMES=""                        # third arg passed in on command line (may not be provided)
if [[ ! -z "$3" ]]
then
    PACKAGE_NAMES=$3                    # only set variable if argument provided
    HEADER="$HEADER,Proc Name,Proc ID,Proc CPU,Proc Memory"
    echo "Processing package: $PACKAGE_NAMES"
    echo ""
fi

echo $HEADER

while :                                 # infinite loop ... watch for exit condition in loop body
do
    REC_NUM=$((REC_NUM+1))              # update the current record num
    TOP_OUTPUT="$(top -n 1)"            # get current whole-device CPU / memory info

    CPU_USER="$(echo $TOP_OUTPUT | cut -d '%' -f 1)"
    CPU_USER="$(echo $CPU_USER | tr ',' ' ')"
    CPU_USER="$(echo $CPU_USER | cut -d ' ' -f 2)"

    CPU_SYSTEM="$(echo $TOP_OUTPUT | cut -d '%' -f 2)"
    CPU_SYSTEM="$(echo $CPU_SYSTEM | tr ',' ' ')"
    CPU_SYSTEM="$(echo $CPU_SYSTEM | cut -d ' ' -f 2)"

    # CPU_IOW="$(echo $TOP_OUTPUT | cut -d '%' -f 3 | tr ',' ' ' | cut -d ' ' -f 2)"
    # CPU_IRQ="$(echo $TOP_OUTPUT | cut -d '%' -f 4 | tr ',' ' ' | cut -d ' ' -f 2)"

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    MEM_OUTPUT="$(cat proc/meminfo)"
    MEM_TOTAL="$(echo $MEM_OUTPUT | cut -d ' ' -f 2)"   # total device memory in kB
    MEM_FREE="$(echo $MEM_OUTPUT | cut -d ' ' -f 5)"    # available device memory in kB

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    if [[ -z "$PACKAGE_NAMES" ]]
    then
        OUTPUT="$REC_NUM,$TIME_ELAPSED,$CPU_USER,$CPU_SYSTEM,$MEM_TOTAL,$MEM_FREE"
        echo $OUTPUT
    else
        for PKG_NAME in $PACKAGE_NAMES             # do the resource profiling thing
        do
            EMPTY_STRING=""
            CURRENT_PID=""
            CURRENT_CPU=""
            CURRENT_MEMORY=""

            PS_OUTPUT="$(ps | grep $PKG_NAME)"

            ((PS_COUNTER=0))
            for PS_FIELD in $PS_OUTPUT
            do
                if [[ $PS_COUNTER = $PS_PID_INDEX ]]
                then
                    CURRENT_PID="$PS_FIELD"
                    break
                else
                    PS_COUNTER=$((PS_COUNTER+1))
                fi
            done

            if [[ "$CURRENT_PID" != "$EMPTY_STRING" ]]
            then

                TOP_INTERM_OUTPUT="$(top -n 1 | grep $CURRENT_PID)"
                TOP_OUTPUT=$(echo $TOP_INTERM_OUTPUT | tr -cd '[[:alnum:]] ' ' ')
                ((TOP_COUNTER=0))

                for TOP_FIELD in $TOP_OUTPUT
                do
                    if [[ $TOP_COUNTER = $TOP_CPU_INDEX ]]
                    then
                        CURRENT_CPU="$TOP_FIELD"
                    elif [[ $TOP_COUNTER = $TOP_MEM_INDEX ]]
                    then
                        CURRENT_MEMORY=$(echo $TOP_FIELD | cut -d '[' -f 0)
                        break
                    fi
                    TOP_COUNTER=$((TOP_COUNTER+1))
                done

            fi

            echo "$REC_NUM,$TIME_ELAPSED,$CPU_USER,$CPU_SYSTEM,$MEM_TOTAL,$MEM_FREE,$PKG_NAME,$CURRENT_PID,$CURRENT_CPU,$CURRENT_MEMORY"

        done
    fi

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    CURRENT_TIME=$(date +%s)                            # get current time at end of loop body
    ((LOOP_EXEC_TIME=$CURRENT_TIME-$LAST_RUN_TIME))     # calculate time passed since last loop completion

    if [[ $LOOP_EXEC_TIME -lt $WAIT_INTERVAL ]]           # "less than" expressed with "-lt" flag
    then
        # force the loop to wait for at least the given interval ...
        # if the time to execute took longer than the min interval, skip this part
        ((TIME_TO_SLEEP=$WAIT_INTERVAL-$LOOP_EXEC_TIME))
        sleep $TIME_TO_SLEEP
    fi

    ((LAST_RUN_TIME=$(date +%s)))                       # we have now completed a loop of the required time length
    ((TIME_ELAPSED=$LAST_RUN_TIME-$RUN_START_TIME))     # calculate overall time elapsed since script started

    if [[ $TIME_ELAPSED -ge $NUM_SECONDS ]]               # "greater than or equal to" expressed with "-ge" flag
    then
        # if the overall script execution time has passed the required number of seconds,
        # then break the infinite loop
        break
    fi
done