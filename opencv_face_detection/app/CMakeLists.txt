# ------------------------------------------------------------------------
# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html
# ------------------------------------------------------------------------


# ------------------------------------------------------------------------
#       Set the minimum CMake version
# ------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.4.1)
# ------------------------------------------------------------------------


# ------------------------------------------------------------------------
#       Retrieve the native JNI headers from the OpenCV SDK directory
# ------------------------------------------------------------------------
include_directories(/Users/slehr/OpenCV-android-sdk/sdk/native/jni/include)
# ------------------------------------------------------------------------


# ------------------------------------------------------------------------
#       Register the OpenCV lib as a shared, imported library
# ------------------------------------------------------------------------
add_library( lib_opencv SHARED IMPORTED )
# ------------------------------------------------------------------------


# ------------------------------------------------------------------------
#       Set the source location for the OpenCV imported lib
# ------------------------------------------------------------------------
set_target_properties(lib_opencv PROPERTIES IMPORTED_LOCATION
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libopencv_java3.so)
# ------------------------------------------------------------------------


# ------------------------------------------------------------------------
#       Find the native NDK logger library, and link OpenCV,
#               Detection-based Tracker libs to it
# ------------------------------------------------------------------------
find_library( log-lib log )
target_link_libraries( lib_opencv ${log-lib} )
# ------------------------------------------------------------------------