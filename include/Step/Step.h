#pragma once

#ifndef DRUMSTUDIO_STEP_H
#define DRUMSTUDIO_STEP_H

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "../Pattern/Pattern.h"
#include<iostream>
#include<vector>

class Step : public Drum{
private:
protected:
    void draw_component(sf::RenderTarget& target , sf::RenderStates states) override;
public:
    bool STEP;
public:
    Step() : STEP(false) {};

};

#endif
