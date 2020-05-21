package edu.temple.archie_core;

public class UIConfig {

    private int fontColor;
    private float fontSize;
    private int bkgdColor;
    private float bkgdOpacity;

    public UIConfig(int fColor, float fSize, int bColor, float bOpacity) {
        fontColor = fColor;
        fontSize = fSize;
        bkgdColor = bColor;
        bkgdOpacity = bOpacity;
    }

    public int getFontColor() {
        return fontColor;
    }

    public float getFontSize() {
        return fontSize;
    }

    public int getBkgdColor() {
        return bkgdColor;
    }

    public float getBkgdOpacity() { return bkgdOpacity; }

}
