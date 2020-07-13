using System;

namespace ARCHIE.Data
{
    [System.Serializable]
    public class ConfigSettings
    {
        public TestPeriod config_test_period;
        public string[] config_ids;
    }

    [System.Serializable]
    public class TestPeriod
    {
        public int value;
        public string denomination;

        public float getPeriodInterval()
        {
            // converting to seconds
            switch (denomination.ToLower())
            {
                case "min":
                case "mins":
                case "minute":
                case "minutes":
                    return (value * 60.0f);
                case "hr":
                case "hrs":
                case "hour":
                case "hours":
                    return (value * 60.0f * 60.0f);
                default:
                    return value;
            }
        }
    }
}
