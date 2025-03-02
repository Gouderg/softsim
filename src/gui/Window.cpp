#include "Window.hpp"

Window::Window() {
    sf::ContextSettings settings;

    settings.antiAliasingLevel = 16;
    settings.depthBits = 8;

    this->window = new sf::RenderWindow(
        sf::VideoMode({WIDTH, HEIGHT}), 
        "Soft simulation",
        sf::State::Windowed,
        settings
    );
    this->window->setFramerateLimit(60);
}



void Window::run() {

    Simulation sim = Simulation();

    while (this->window->isOpen()) {

        while (const std::optional event = this->window->pollEvent()) {
            
            // Close window.
            if (event->is<sf::Event::Closed>()) {
                this->window->close();
            } else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()){
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    this->window->close();
            }

        }

        // Clear window.
        this->window->clear({68, 142, 228});

        sim.update();

        sim.renderer(this->window);

        // end of the current frame.
        this->window->display();
    }
}