#include "GameCycle.h"

GameCycle::GameCycle(std::shared_ptr<sf::RenderWindow> window,
                     std::shared_ptr<World> world,
                     std::shared_ptr<InputHandler> inputHandler)
    : window_(window), world_(world), inputHandler_(inputHandler) {}

void GameCycle::Start() {
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window_->isOpen()) {
        sf::Event event;
        while (window_->pollEvent(event)) {
            if (event.type == sf::Event::Closed) window_->close();
        }

        window_->clear();
        window_->draw(shape);
        window_->display();
    }
}
