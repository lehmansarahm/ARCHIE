# ARCHIE

## What is ARCHIE?
ARCHIE is a testing framework for mobile and wearable augmented reality applications, intended to assist researchers and developers in collecting user data from their test participants.  This repository contains the following projects:

* ARCHIE-Unity-DroneTracker
* ARCHIE-Unity-DroneTrackerMod
* ARTestingFramework
* ARTestingFrameworkCaseStudies

## Updating Your App to Use ARCHIE
* Add "gtc\_core" as resource library to project code base
* CLASSIFIERS:
  * Create a new class that implements "IClassifier" interface from "gtc\_core"
* CONFIGURATION PROFILES:
  * Create a new class that implements "IConfigurationProfile" interface from "gtc\_core"
* INTERACTION PROFILES:
  * Create a new class that implements "IInteractionProfile" interface from "gtc\_core"
* HARDWARE PROFILES:
  * Add list property to "config.json" called "hardware\_profiles"
  * Add item to "hardware\_profiles" list property for each profile you want to test, with the following properties:
    * "name" - the name of the profile (ex: \\"high\_resource", "low\_resource", etc.)
    * "allowable\_cpu\_percentage" - the percentage of available device CPU that the app is allowed to use
    * "allowable\_ram\_percentage" - the percentage of available device RAM that the app is allowed to use
* Instantiate GTC Controller in tester app and add the following function calls:
  * gtcController.startServices() on app create
  * gtcController.stopServices() on app destroy
  * gtcController.pauseProfiles() on app pause
  * gtcController.resumeProfiles() on app resume
* Add "config.json" as project asset, and instantiate with the following properties:
  * Async annotation data collection settings
  * Async UX data collection settings
  * Fully qualified names of all Classifier classes to use
  * Fully qualified names of all Configuration Profile classes to use
  * Fully qualified names of all Interaction Profile classes to use
  * List of hardware profile settings to use
