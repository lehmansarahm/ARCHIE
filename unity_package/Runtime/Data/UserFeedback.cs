using System;

namespace ARCHIE.Data
{

    [System.Serializable]
    public class UserFeedback
    {
        public string current_config_id;
        public int usability_score;

        public bool poor_contrast = false;
        public bool poor_placement = false;
        public bool wrong_size = false;
        public bool distracting = false;
        public bool other = false;

        // ----------------------------------------------------------------------------
        // ----------------------------------------------------------------------------

        public string getContrastString()
        {
            return (poor_contrast ? "[X] Poor Contrast" : "[ ] Poor Contrast");
        }

        public string getPlacementString()
        {
            return (poor_placement ? "[X] Poor Placement" : "[ ] Poor Placement");
        }

        public string getSizeString()
        {
            return (wrong_size ? "[X] Wrong Size" : "[ ] Wrong Size");
        }

        public string getDistractingString()
        {
            return (distracting ? "[X] Distracting" : "[ ] Distracting");
        }

        public string getOtherString()
        {
            return (other ? "[X] Other" : "[ ] Other");
        }

    }

}
