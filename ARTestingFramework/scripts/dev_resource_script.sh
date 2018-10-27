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

HEADER="Num,Time (sec),Raw Mem,Total Mem (kB),Used Mem (kB),Free Mem (kB),Buffer Size (kB),Mem Usage (%),Raw CPU,CPU Total (%),CPU User (%),CPU User Actual (%),CPU System (%),CPU System Actual (%)"
echo $HEADER

while :                                 # infinite loop ... watch for exit condition in loop body
do
    REC_NUM=$((REC_NUM+1))              # update the current record num
    TOP_OUTPUT="$(top -n 1)"            # get current whole-device CPU / memory info

    # retrieve the raw memory data from the top output by splitting by line break,
    # taking the second flag in the sequence, and then replacing all commas with whitespace
    MEM_RAW="$(echo $TOP_OUTPUT | cut -d $'\r' -f 2 | tr ',' ' ')"

#  Mem: 3731608k total 3397192k used 334416k free 136168k buffers
    MEM_TOTAL="$(echo $MEM_RAW | cut -d 'k' -f 1 | cut -d ' ' -f 2)"
    MEM_USED="$(echo $MEM_RAW | cut -d 'k' -f 2 | cut -d ' ' -f 3)"
    MEM_FREE="$(echo $MEM_RAW | cut -d 'k' -f 3 | cut -d ' ' -f 3)"
    MEM_BUFFERS="$(echo $MEM_RAW | cut -d 'k' -f 4 | cut -d ' ' -f 3)"

    # MEM_OUTPUT="$(cat proc/meminfo)"
    # MEM_TOTAL="$(echo $MEM_OUTPUT | cut -d ' ' -f 2)"   # total device memory in kB
    # MEM_FREE="$(echo $MEM_OUTPUT | cut -d ' ' -f 5)"    # available device memory in kB

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    # retrieve the raw CPU from the top output by splitting by line break,
    # taking the fourth flag in the sequence, and then replacing all commas with whitespace
    CPU_RAW="$(echo $TOP_OUTPUT | cut -d $'\r' -f 4 | tr ',' ' ')"

    # retrieve the total CPU by splitting the raw CPU output by percent sign,
    # and taking the zeroth flag
    CPU_TOTAL="$(echo $CPU_RAW | cut -d '%' -f 1)"

    # retrieve the percentage of CPU devoted to userspace operations by splitting the raw
    # CPU output by percent sign, taking the first flag, and then splitting by whitespace
    # and taking the second flag
    CPU_USER="$(echo $CPU_RAW | cut -d '%' -f 2 | cut -d ' ' -f 2)"

    # retrieve the percentage of CPU devoted to kernel space operations by splitting the raw
    # CPU output by percent sign, taking the second flag, and then splitting by whitespace
    # and taking the second flag
    CPU_SYSTEM="$(echo $CPU_RAW | cut -d '%' -f 4 | cut -d ' ' -f 2)"

    # CPU_IOW="$(echo $TOP_OUTPUT | cut -d '%' -f 3 | tr ',' ' ' | cut -d ' ' -f 2)"
    # CPU_IRQ="$(echo $TOP_OUTPUT | cut -d '%' -f 4 | tr ',' ' ' | cut -d ' ' -f 2)"

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    OUTPUT="$REC_NUM,$TIME_ELAPSED,$MEM_RAW,$MEM_TOTAL,$MEM_USED,$MEM_FREE,$MEM_BUFFERS,,$CPU_RAW,$CPU_TOTAL,$CPU_USER,,$CPU_SYSTEM,,"
    echo $OUTPUT

    # ------------------------------------------------------------------------------------
    # ------------------------------------------------------------------------------------

    CURRENT_TIME=$(date +%s)                            # get current time at end of loop body
    ((LOOP_EXEC_TIME=$CURRENT_TIME-$LAST_RUN_TIME))     # calculate time passed since last loop completion

    if [ $LOOP_EXEC_TIME -lt $WAIT_INTERVAL ]           # "less than" expressed with "-lt" flag
    then
        # force the loop to wait for at least the given interval ...
        # if the time to execute took longer than the min interval, skip this part
        ((TIME_TO_SLEEP=$WAIT_INTERVAL-$LOOP_EXEC_TIME))
        sleep $TIME_TO_SLEEP
    fi

    ((LAST_RUN_TIME=$(date +%s)))                       # we have now completed a loop of the required time length
    ((TIME_ELAPSED=$LAST_RUN_TIME-$RUN_START_TIME))     # calculate overall time elapsed since script started

    if [ $TIME_ELAPSED -ge $NUM_SECONDS ]               # "greater than or equal to" expressed with "-ge" flag
    then
        # if the overall script execution time has passed the required number of seconds,
        # then break the infinite loop
        break
    fi
done