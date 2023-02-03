//
// Created by Conall McGinty on 03/02/2023.
//
#include "main_component.h"

MainComponent::MainComponent() {
    setSize(600, 400);
}

void MainComponent::paint(juce::Graphics &g) {
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
    g.setFont(juce::Font(16.0f));
    g.setColour(juce::Colours::white);
    g.drawText("WOOOOOOOOOOOOOOOOOOOO!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized() {

}
