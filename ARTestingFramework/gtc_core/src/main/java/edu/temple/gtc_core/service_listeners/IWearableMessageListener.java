package edu.temple.gtc_core.service_listeners;

import com.google.android.gms.wearable.MessageEvent;

public interface IWearableMessageListener {

    void handleMessage(MessageEvent event);

}