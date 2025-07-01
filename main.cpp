#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp> // Often needed for a window
#include <iostream> // For demonstration output
#include "Character.hpp"
#include "Gun.hpp"

int main()
{
    sf::Window window(sf::VideoMode({800, 600}), "My window");
    sf::WindowHandle handle = window.getNativeHandle();
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    Gun gun;
    Character character;

    // get the global mouse position (relative to the desktop)
    sf::Vector2i globalPosition = sf::Mouse::getPosition();

    // get the local mouse position (relative to a window)
    sf::Vector2i localPosition = sf::Mouse::getPosition(window); // window is a sf::Window

    // set the mouse position globally (relative to the desktop)
    sf::Mouse::setPosition({10, 50});

    // set the mouse position locally (relative to a window)
    sf::Mouse::setPosition({10, 50}, window); // window is a sf::Window

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
    {
        // left key is pressed: move our character
        character.move({-1.f, 0.f});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Right))
    {
        // right key is pressed: move our character
        character.move({1.f, 0.f});
    }

    if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
    {
        // left mouse button is pressed: shoot
        gun.fire();
    }




}
