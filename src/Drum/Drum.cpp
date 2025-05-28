
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
        while (window.isOpen())
        {
            while (const std::optional event = window.pollEvent())
            {
                if (event->is<sf::Event::Closed>())
                    window.close();
            }
            window.clear(PRIMARY);
            window.display();
        }
    }
    catch (const Throw_except& exception){
        std::cerr << exception.what() << std::endl;
    }
}

