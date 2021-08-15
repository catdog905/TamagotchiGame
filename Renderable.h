#pragma once

#include <SFML/Graphics.hpp>

class Renderable {
public:
    virtual void Render(std::shared_ptr<sf::RenderWindow> window) = 0;
};
