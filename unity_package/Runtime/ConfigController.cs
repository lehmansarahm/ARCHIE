using System;

namespace ARCHIE
{
    public class ConfigController
    {
        public interface ConfigListener
        {
            void newConfigSelected(string configID);
        }

        // --------------------------------------------------------------------------------
        // --------------------------------------------------------------------------------

        ConfigListener listener;

        public ConfigController(ConfigListener listener)
        {
            this.listener = listener;
            startRotation();
        }

        private void startRotation()
        {
            // TODO - download default settings

            // TODO - on interval, call MABP cloud function

            // TODO - on function return, call "newConfigSelected"
        }

    }
}
