#pragma once

#ifndef DRUMSTUDIO_PATTERN_H
#define DRUMSTUDIO_PATTERN_H

#include<iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "../Sequencer/Sequencer.h"
#include "../Step/Step.h"
#include<vector>

class Step;

class Pattern : public Drum{
private:
    float PATTERN_VOLUME;
    float PATTERN_PITCH;
    std::string PATTERN_NAME;
    const unsigned int PATTERN_LENGTH;
    std::vector<Step*> STEPS;
protected:
    void draw_component(sf::RenderTarget& target , sf::RenderStates states) override;
public:
    Pattern() : PATTERN_LENGTH(16) , PATTERN_VOLUME(50.f) , PATTERN_PITCH(1.0) {};
};

#endif
