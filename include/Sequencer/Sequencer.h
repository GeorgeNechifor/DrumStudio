#pragma once

#ifndef DRUMSTUDIO_SEQUENCER_H
#define DRUMSTUDIO_SEQUENCER_H

#include<iostream>
#include "SFML/Graphics.hpp"
#include "../Drum/Drum.h"
#include "../Pattern/Pattern.h"
#include<vector>

class Pattern;

class Sequencer : public Drum{
private:
    const float POSITION_X;
    const float POSITION_Y;
    std::vector<Pattern*> PATTERNS;
protected:
    void draw_component(sf::RenderTarget& target , sf::RenderStates states) override;
public:
    Sequencer() : POSITION_X(100.f) , POSITION_Y(400.f) {};

};


#endif
