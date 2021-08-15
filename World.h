#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

#include "Renderable.h"

class World : public Renderable {
public:
    World(/*TODO*/);
    void Render(std::shared_ptr<sf::RenderWindow> window) override;
};
