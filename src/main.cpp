#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();


        window.display();
    }
}