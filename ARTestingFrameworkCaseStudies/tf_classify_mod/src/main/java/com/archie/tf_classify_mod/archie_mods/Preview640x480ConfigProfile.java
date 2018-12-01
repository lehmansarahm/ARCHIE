package com.archie.tf_classify_mod.archie_mods;

import android.app.Activity;
import android.util.Size;

import com.archie.tf_classify_mod.ClassifierApplication;

public class Preview640x480ConfigProfile extends ArchieTfConfigProfile {

    private static final Size PREVIEW_SIZE = new Size(640, 480);

    @Override
    public void resumeProfile(Activity activity) {
        LOGGER.e("Resuming config profile with preview: "
                + PREVIEW_SIZE.getWidth() + "x" + PREVIEW_SIZE.getHeight());
        ClassifierApplication app = (ClassifierApplication) activity.getApplication();
        app.setDesiredPreviewSize(PREVIEW_SIZE);
        super.resumeProfile(activity);
    }

}