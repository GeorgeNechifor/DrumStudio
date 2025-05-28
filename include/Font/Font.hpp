

#ifndef DRUMSTUDIO_FONT_HPP
#define DRUMSTUDIO_FONT_HPP

#include "SFML/Graphics.hpp"
#include<iostream>


namespace Font{
    inline sf::Font DEFAULT_FONT;
    inline sf::Font load(){
        if(!DEFAULT_FONT.openFromFile("..\\assets\\Fonts\\LeagueSpartan-Regular.ttf")){
            std::cerr << "Failed to load font!";
        }
        return DEFAULT_FONT;
    }
    inline sf::Font FONT = load();
}

#endif
