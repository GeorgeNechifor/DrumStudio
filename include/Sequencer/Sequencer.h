#pragma once

#ifndef DRUMSTUDIO_SEQUENCER_H
#define DRUMSTUDIO_SEQUENCER_H

#include<iostream>
#include "SFML/Graphics.hpp"
#include "../Drum/Drum.h"
#include "../Pattern/Pattern.h"
#include<vector>

class Sequencer : public Drum , public::sf::Drawable{
private:
    const float POSITION_X;
    const float POSITION_Y;
    std::vector<Pattern*> PATTERNS;
public:
    Sequencer();

};


#endif
