#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include <iostream>

#include "core/simulation.hpp"
#include "utils/config.hpp"


class Window {

    
    public:
        Window();

        void run();
    
    private:

        sf::RenderWindow* window =  nullptr;
    
};

#endif