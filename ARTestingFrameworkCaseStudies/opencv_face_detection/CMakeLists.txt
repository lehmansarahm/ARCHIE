# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

cmake_minimum_required(VERSION 3.4.1)

add_library( DetectionBasedTracker
             SHARED
             src/main/cpp/DetectionBasedTracker.cpp )

include_directories(/Users/slehr/OpenCV-android-sdk/sdk/native/jni/include)

add_library( lib_opencv
             SHARED
             IMPORTED )

set_target_properties(lib_opencv
             PROPERTIES
             IMPORTED_LOCATION
             ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libopencv_java3.so)

find_library( log-lib
             log )

target_link_libraries( DetectionBasedTracker
             lib_opencv
             ${log-lib} )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")