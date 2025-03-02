#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>

#include "core/point.hpp"
#include "math/vector.hpp"



class Renderer {


    public:

        void drawPoint(sf::RenderWindow *window, Point const &p);

};

#endif