#pragma once
#include <JuceHeader.h>
#include "PluginProcessor.h"

class LucidToneAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
    explicit LucidToneAudioProcessorEditor(LucidToneAudioProcessor&);
    ~LucidToneAudioProcessorEditor() override;

    void paint(juce::Graphics&) override;
    void resized() override;

private:
    LucidToneAudioProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LucidToneAudioProcessorEditor)
};