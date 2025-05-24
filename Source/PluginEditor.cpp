#include "PluginEditor.h"

LucidToneAudioProcessorEditor::LucidToneAudioProcessorEditor(LucidToneAudioProcessor& p)
    : AudioProcessorEditor(&p), processorRef(p) {
    setSize(600, 400);
}

LucidToneAudioProcessorEditor::~LucidToneAudioProcessorEditor() {}

void LucidToneAudioProcessorEditor::paint(juce::Graphics& g) {
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.setFont(24.0f);
    g.drawFittedText("LucidTone UI", getLocalBounds(), juce::Justification::centred, 1);
}

void LucidToneAudioProcessorEditor::resized() {}
