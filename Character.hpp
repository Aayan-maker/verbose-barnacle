#pragma once
#include <SFML/Graphics.hpp> // Assuming Character interacts with SFML types

class Character {
public:
    Character();
    void move(sf::Vector2f offset);
    // ... other member functions and variables
private:
    sf::RectangleShape shape; // Example member
};
