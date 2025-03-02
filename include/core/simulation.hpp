#ifndef SIMULATION_H
#define SIMULATION_H


#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>

#include "core/point.hpp"
#include "utils/config.hpp"
#include "gui/Renderer.hpp"

class Simulation {

    public:
        Simulation();

        void update();
        void renderer(sf::RenderWindow* window);

    private:
        std::vector<Point*> points;
        Renderer render = Renderer();

};

#endif
