package edu.temple.gtc_core;

import android.content.Context;
import android.util.Log;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.List;

import edu.temple.gtc_core.classify.IClassifier;
import edu.temple.gtc_core.utils.Constants;

public class ClassifierController {

    private List<IClassifier> classifierList;

    public ClassifierController(String[] classifierNames) {
        this.classifierList = new ArrayList<>();
        for (String classifierName : classifierNames) {
            Object classifier = getObjectFromClassName(classifierName);
            if (classifier instanceof IClassifier) {
                classifierList.add((IClassifier) classifier);
            }
        }

        Log.e(Constants.TAG, "Imported " + classifierList.size()
                + " IClassifier classes.");
    }

    public IClassifier getCurrentClassifier() {
        if (classifierList.size() == 0) return null;
        return classifierList.get(0);
    }

    public void cleanup() {
        classifierList.clear();
    }

    // --------------------------------------------------------------------------------
    // --------------------------------------------------------------------------------

    private Object getObjectFromClassName(String className) {
        try {
            Class<?> clazz = Class.forName(className);
            Constructor<?> defaultConstructor = clazz.getConstructor();
            Object obj = defaultConstructor.newInstance();
            return obj;
        } catch (ClassNotFoundException ex) {
            Log.e(Constants.TAG, "Could not find classifier class: " + className, ex);
        } catch (NoSuchMethodException ex) {
            Log.e(Constants.TAG, "Could not find a default constructor for classifier class: " + className, ex);
        } catch (InstantiationException | IllegalAccessException | InvocationTargetException ex) {
            Log.e(Constants.TAG, "Could not instantiate object for classifier class: " + className, ex);
        }

        // if we get this far, it means we encountered an error ... return null
        return null;
    }

}