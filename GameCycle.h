#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

#include "InputHandler.h"
#include "World.h"

class GameCycle {
public:
    GameCycle(std::shared_ptr<sf::RenderWindow> window,
              std::shared_ptr<World> world,
              std::shared_ptr<InputHandler> inputHandler);
    void Start();

private:
    std::shared_ptr<World> world_;
    std::shared_ptr<InputHandler> inputHandler_;
    std::shared_ptr<sf::RenderWindow> window_;
};
