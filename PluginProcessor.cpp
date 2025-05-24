#include "PluginProcessor.h"
#include "PluginEditor.h"

LucidToneAudioProcessor::LucidToneAudioProcessor()
    : AudioProcessor(BusesProperties().withInput("Input", juce::AudioChannelSet::stereo(), true)
                                      .withOutput("Output", juce::AudioChannelSet::stereo(), true)) {}

LucidToneAudioProcessor::~LucidToneAudioProcessor() {}

void LucidToneAudioProcessor::prepareToPlay(double, int) {}
void LucidToneAudioProcessor::releaseResources() {}

void LucidToneAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&) {
    // Apply effects here
}

juce::AudioProcessorEditor* LucidToneAudioProcessor::createEditor() {
    return new juce::GenericAudioProcessorEditor(*this);
}
bool LucidToneAudioProcessor::hasEditor() const { return true; }

const juce::String LucidToneAudioProcessor::getName() const { return JucePlugin_Name; }

bool LucidToneAudioProcessor::acceptsMidi() const { return false; }
bool LucidToneAudioProcessor::producesMidi() const { return false; }
bool LucidToneAudioProcessor::isMidiEffect() const { return false; }
double LucidToneAudioProcessor::getTailLengthSeconds() const { return 0.0; }

int LucidToneAudioProcessor::getNumPrograms() { return 1; }
int LucidToneAudioProcessor::getCurrentProgram() { return 0; }
void LucidToneAudioProcessor::setCurrentProgram(int) {}
const juce::String LucidToneAudioProcessor::getProgramName(int) { return {}; }
void LucidToneAudioProcessor::changeProgramName(int, const juce::String&) {}

void LucidToneAudioProcessor::getStateInformation(juce::MemoryBlock&) {}
void LucidToneAudioProcessor::setStateInformation(const void*, int) {}