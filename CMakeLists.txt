cmake_minimum_required(VERSION 3.24)
project(CRAP_PLUGIN VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

# build your own JUCE following these instructions, change the path below accordingly
# https://github.com/juce-framework/JUCE/blob/master/docs/CMake%20API.md#using-find_package
set(CMAKE_PREFIX_PATH "/Users/conallmcginty/programming/c++/packages/JUCE")
find_package(JUCE CONFIG REQUIRED)

juce_add_plugin(CrapPlugin
        PLUGIN_MANUFACTURER_CODE CoMc
        PLUGIN_CODE Crap
        FORMATS AU
        PLUGIN_NAME "Crap Plugin"
        AU_MAIN_TYPE "kAudioUnitType_Effect"
        COPY_PLUGIN_AFTER_BUILD TRUE
)

juce_generate_juce_header(CrapPlugin)

target_sources(
        CrapPlugin
        PRIVATE
        main.cpp
        main_component.h
        main_component.cpp
)

target_compile_definitions(
        CrapPlugin
        PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0
        JUCE_APPLICATION_NAME_STRING="$<TARGET_PROPERTY:CrapPlugin,JUCE_PRODUCT_NAME>"
        JUCE_APPLICATION_VERSION_STRING="$<TARGET_PROPERTY:CrapPlugin,JUCE_VERSION>"
)

target_link_libraries(
        CrapPlugin
        PRIVATE
            juce::juce_audio_utils
            juce::juce_gui_extra
        PUBLIC
            juce::juce_recommended_config_flags
            juce::juce_recommended_lto_flags
            juce::juce_recommended_warning_flags
)
