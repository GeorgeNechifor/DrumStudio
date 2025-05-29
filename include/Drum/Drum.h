#pragma once

#ifndef DRUMSTUDIO_DRUM_H
#define DRUMSTUDIO_DRUM_H

#include "SFML/Graphics.hpp"
#include "../Throw_except/Throw_except.h"
#include<iostream>
#include "../Color/Color.hpp"
#include "../Font/Font.hpp"

class Drum : public sf::Drawable{
protected:
    virtual void draw_component(sf::RenderTarget& target , sf::RenderStates states) = 0;
};

#endif
