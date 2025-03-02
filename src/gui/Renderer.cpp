#include "Renderer.hpp"

void Renderer::drawPoint(sf::RenderWindow* window, Point const &p) {
    sf::CircleShape shape(p.getMass());
    
    shape.setFillColor(sf::Color::Yellow);
    
    Vector position = p.getPosition();

    shape.setPosition({position.getX(), position.getY()});

    window->draw(shape);
}