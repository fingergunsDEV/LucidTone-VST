cmake_minimum_required(VERSION 3.15)

project(LucidTone VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  JUCE
  GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
  GIT_TAG        develop
)
FetchContent_MakeAvailable(JUCE)

juce_add_plugin(LucidTone
    COMPANY_NAME "Holistic Audio"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    COPY_PLUGIN_AFTER_BUILD TRUE
    PLUGIN_MANUFACTURER_CODE HGAU
    PLUGIN_CODE LT01
    FORMATS VST3 AU Standalone
    PRODUCT_NAME "LucidTone"
)

target_sources(LucidTone PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginProcessor.h
    Source/PluginEditor.cpp
    Source/PluginEditor.h
)

target_compile_definitions(LucidTone
    PRIVATE
        JUCE_WEB_BROWSER=0
)

target_link_libraries(LucidTone PRIVATE
    juce::juce_audio_utils
)