//
// Created by Conall McGinty on 03/02/2023.
//

#ifndef CRAP_PLUGIN_MAIN_COMPONENT_H
#define CRAP_PLUGIN_MAIN_COMPONENT_H

#include <juce_gui_extra/juce_gui_extra.h>

class MainComponent : public juce::Component {
public:
    MainComponent();
    void paint(juce::Graphics &g) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};

#endif //CRAP_PLUGIN_MAIN_COMPONENT_H
