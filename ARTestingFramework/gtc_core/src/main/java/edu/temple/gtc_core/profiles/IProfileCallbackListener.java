package edu.temple.gtc_core.profiles;

public interface IProfileCallbackListener {

    void onConfigurationProfileReady(IConfigurationProfile currentProfile);

    void onInteractionProfileReady(IInteractionProfile currentProfile);

    void onHardwareProfileReady(IHardwareProfile currentProfile);

}