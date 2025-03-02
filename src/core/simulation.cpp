#include "core/simulation.hpp"

Simulation::Simulation() {
    std::random_device rd; 
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>dist(1, 1000);

    for (int i = 0; i < NB_POINTS; i++) {
        double x = dist(gen) / 1000.0 * WIDTH;
        double y = dist(gen) / 1000.0 * HEIGHT;
        std::cout << x << ", " << y << std::endl;
        this->points.push_back(new Point(10, x, y));
    }
}

void Simulation::update() {

    for (auto p : this->points) {
        p->update(0.001);
        // Add collision.
    }
}

void Simulation::renderer(sf::RenderWindow* window) {

    for (auto p : this->points) {
        this->render.drawPoint(window, *p);
    }

}