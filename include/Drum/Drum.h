#pragma once

#ifndef DRUMSTUDIO_DRUM_H
#define DRUMSTUDIO_DRUM_H

#include "SFML/Graphics.hpp"
#include "../Throw_except/Throw_except.h"
#include<iostream>
#include "../Color/Color.hpp"
#include "../Font/Font.hpp"

class Drum{
private:
    const unsigned int W_WIDTH;
    const unsigned int W_HEIGHT;
    const std::string TITLE;
private:
    void window_draw(sf::RenderWindow window);
public:
    Drum() : W_HEIGHT(800) , W_WIDTH(1200) , TITLE("DrumStudio"){};
    void set_window();
};

#endif
