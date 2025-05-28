
#include "../../include/Drum/Drum.h"
using namespace Color;
using namespace Font;

void Drum::set_window() {
    try{
        sf::RenderWindow window(sf::VideoMode({W_WIDTH, W_HEIGHT}), TITLE , sf::Style::Titlebar | sf::Style::Close);
        sf::Image icon;
        if(!icon.loadFromFile("..\\assets\\Image\\ds.png")){
            std::cerr << "Failed" << std::endl;
        }
        window.setIcon(icon);
        sf::Text text(FONT, "GEORGE" , 48);
        text.setFillColor(RED);
        text.setPosition(sf::Vector2f (100.f , 100.f));
        while (window.isOpen())
        {
            while (const std::optional event = window.pollEvent())
            {
                if (event->is<sf::Event::Closed>())
                    window.close();
            }
            window.clear(PRIMARY);
            window.draw(text);
            window.display();
        }
    }
    catch (const Throw_except& exception){
        std::cerr << exception.what() << std::endl;
    }
}

