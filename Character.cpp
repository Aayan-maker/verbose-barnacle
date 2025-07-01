#include "Character.hpp"
#include <iostream>

Character::Character() {
    shape.setSize(sf::Vector2f(50.f, 50.f));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(100.f, 100.f);
    std::cout << "Character created!" << std::endl;
}

void Character::move(sf::Vector2f offset) {
    shape.move(offset);
    std::cout << "Character moved to: " << shape.getPosition().x << ", " << shape.getPosition().y << std::endl;
}
