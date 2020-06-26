#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    std::string change;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(shape);
        window.display();
        std::cin >> change;
        if (change != "") {
            if (shape.getFillColor() == sf::Color::Green) {
                shape.setFillColor(sf::Color::Red);
            }else if (shape.getFillColor() == sf::Color::Red) {
                shape.setFillColor(sf::Color::Green);
            }
        }
    }

    return 0;
}