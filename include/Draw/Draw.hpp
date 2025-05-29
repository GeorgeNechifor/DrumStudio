

#ifndef DRUMSTUDIO_DRAW_HPP
#define DRUMSTUDIO_DRAW_HPP

#include "SFML/Graphics.hpp"
#include "../Throw_except/Throw_except.h"
#include<iostream>
#include "../Color/Color.hpp"
#include "../Font/Font.hpp"

namespace Draw{
    inline const unsigned int W_WIDTH = 1200;
    inline const unsigned int W_HEIGHT = 800;
    inline const std::string TITLE = "Drum Studio";
    inline void draw_window(){
        try{
            sf::RenderWindow window(sf::VideoMode({W_WIDTH, W_HEIGHT}), TITLE , sf::Style::Titlebar | sf::Style::Close);
            sf::Image icon;
            if(!icon.loadFromFile("..\\assets\\Image\\ds.png")){
                std::cerr << "Failed" << std::endl;
            }
            window.setIcon(icon);
            while (window.isOpen())
            {
                while (const std::optional event = window.pollEvent())
                {
                    if (event->is<sf::Event::Closed>())
                        window.close();
                }
                window.clear(Color::PRIMARY);
                window.display();
            }
        }
        catch (const Throw_except& exception){
            std::cerr << exception.what() << std::endl;
        }
    }
}

#endif
