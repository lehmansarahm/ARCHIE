# ARTestingFramework
**MODULES**
- GTC Annotator
    - primary logic point for collecting ground truth annotation, system statistics / diagnostics, user experience data
    - receives HAR event notifications from subscribing tester apps, forwards to watch for user confirmation
    - also periodically collects UX data with wearable app as determined by dev
- GTC Annotator (Wearable)
    - allows user to provide feedback on HAR event annotations, UX data collection using a smartwatch
    - very thin client ... phone does the bulk of the work
- GTC Core
    - houses logic common to all GTC apps (annotator and tester alike)
    - responsible for providing connections to key services (inter-process communication, inter-device communication, resource logging, etc.)
    - provides "GTC Controller" for tester apps to access ... GTC Annotator apps access other files directly
    - provides constant ("magic string") values useful to all subscribing apps
- ~~GTC Services~~ ... deprecated
    - originally intended to house services shared by all GTC apps (annotator and tester alike)
    - to be safely deleted at a future date
- TF Tester
    - sample TensorFlow image classification application which uses the smartphone camera to ID pictures of flowers
    - when a picture of a daisy is ID'd, sends annotation event to GTC Annotator for user confirmation
    
**SUPPORT PACKAGES**
- Scripts
    - Resource profiling scripts intended to run on local machine, and catalogue CPU/RAM consumption etc. of apps running on tethered smartphone
    - Included for reference, must be deployed to phone using ADB in order to run (but not required for any app modules)
- TensorFlow for Poets 2
    - Sample code downloaded as part of the [TensorFlow for Poets code lab](https://github.com/googlecodelabs/tensorflow-for-poets-2)
    - Included for reference, model generation for "TF Tester" module

**WARNINGS**
- Currently developing for LG Nexus 5 (API level 23) and Moto 360 watch (API 23)
    - Watch is limited to Google Play Services v11 ... which has obligated us to use some antiquated APIs
    - This is just something we have to do for our hardware ... sorry in advance
- In order for TF Tester to connect to Communicator Service, you must FIRST launch the GTC Annotator and press the "Start Services" button ... only THEN should you launch the tester app
    - Just a quirk of the system for now
- Watch and phone must be paired and within Bluetooth range at all times
    - Future work will include edge case support for out-of-range or disconnected devices