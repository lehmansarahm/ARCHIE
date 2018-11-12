package com.archie.tf_speech_mod.archie_mods;

import android.app.Activity;
import android.media.AudioFormat;
import android.media.AudioRecord;
import android.media.MediaRecorder;

import com.archie.tf_speech_mod.SpeechApplication;
import com.archie.tf_speech_mod.env.Logger;

import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.locks.ReentrantLock;

import edu.temple.gtc_core.profiles.IConfigurationProfile;

import static com.archie.tf_speech_mod.archie_mods.Constants.RECORDING_LENGTH;
import static com.archie.tf_speech_mod.archie_mods.Constants.SAMPLE_RATE;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_CLASSIFICATION_RESULTS;
import static edu.temple.gtc_core.utils.Constants.BUNDLE_KEY_PREVIEW_DATA;

public class ArchieSpeechConfigProfile implements IConfigurationProfile {

    private static final Logger LOGGER = new Logger();

    private Activity initActivity;

    int recordingOffset = 0;
    short[] recordingBuffer = new short[RECORDING_LENGTH];
    private final ReentrantLock recordingBufferLock = new ReentrantLock();
    private Thread recordingThread;
    boolean shouldContinue = true;

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    @Override
    public void resumeProfile(Activity currentActivity) {
        LOGGER.e("GTC Controller called 'resumeProfile' for config profile: "
                + this.getClass().getSimpleName());
        initActivity = currentActivity;
        SpeechApplication app = (SpeechApplication) initActivity.getApplication();
        app.getGtcController().onSensorsReady();
        startRecording();
    }

    @Override
    public void pauseProfile() {
        LOGGER.e("GTC Controller called 'pauseProfile' for config profile: "
                + this.getClass().getSimpleName());
        stopRecording();
    }

    // --------------------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------------------

    private synchronized void startRecording() {
        if (recordingThread != null) return;

        shouldContinue = true;
        recordingThread = new Thread(new Runnable() {
            @Override
            public void run() {
                LOGGER.i("Initializing recording thread.");
                record();
            }
        });

        recordingThread.start();
    }

    private synchronized void stopRecording() {
        if (recordingThread == null) return;
        shouldContinue = false;
        recordingThread = null;
    }

    private void record() {
        android.os.Process.setThreadPriority(android.os.Process.THREAD_PRIORITY_AUDIO);
        SpeechApplication app = (SpeechApplication) initActivity.getApplication();

        // Estimate the buffer size we'll need for this device.
        int bufferSize = AudioRecord.getMinBufferSize( SAMPLE_RATE,
                AudioFormat.CHANNEL_IN_MONO, AudioFormat.ENCODING_PCM_16BIT);
        if (bufferSize == AudioRecord.ERROR || bufferSize == AudioRecord.ERROR_BAD_VALUE) {
            bufferSize = SAMPLE_RATE * 2;
        }

        AudioRecord record = new AudioRecord(MediaRecorder.AudioSource.DEFAULT,
                SAMPLE_RATE, AudioFormat.CHANNEL_IN_MONO, AudioFormat.ENCODING_PCM_16BIT,
                bufferSize);
        if (record.getState() != AudioRecord.STATE_INITIALIZED) {
            LOGGER.e("Audio Record can't initialize!");
            return;
        }

        LOGGER.i("Start recording");
        record.startRecording();

        // Loop, gathering audio data and copying it to a round-robin buffer.
        short[] audioBuffer = new short[bufferSize / 2];
        while (shouldContinue) {
            int numberRead = record.read(audioBuffer, 0, audioBuffer.length);
            int maxLength = recordingBuffer.length;
            int newRecordingOffset = recordingOffset + numberRead;
            int secondCopyLength = Math.max(0, newRecordingOffset - maxLength);
            int firstCopyLength = numberRead - secondCopyLength;

            // We store off all the data for the recognition thread to access. The ML
            // thread will copy out of this buffer into its own, while holding the
            // lock, so this should be thread safe.
            recordingBufferLock.lock();

            try {
                System.arraycopy(audioBuffer, 0, recordingBuffer, recordingOffset, firstCopyLength);
                System.arraycopy(audioBuffer, firstCopyLength, recordingBuffer, 0, secondCopyLength);
                recordingOffset = newRecordingOffset % maxLength;
            } finally {
                LOGGER.i("Sending data to classifier.");
                Map<String, Object> args = new HashMap<>();
                args.put(BUNDLE_KEY_PREVIEW_DATA, recordingBuffer);
                app.getGtcController().onDataAvailable(args);
                recordingBufferLock.unlock();
            }
        }

        record.stop();
        record.release();
    }

}