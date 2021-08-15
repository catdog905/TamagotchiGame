#include <memory>

#include "GameCycle.h"
#include "InputHandler.h"
#include "World.h"

int main() {
    std::shared_ptr<sf::RenderWindow> window =
        std::make_shared<sf::RenderWindow>(sf::VideoMode(200, 200),
                                           "Hello world!");
    std::shared_ptr<World> world = std::make_shared<World>();
    std::shared_ptr<InputHandler> inputHandler =
        std::make_shared<InputHandler>();
    GameCycle gameCycle(window, world, inputHandler);
    gameCycle.Start();
    return 0;
}
