#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <random>
#include "math/vector.hpp"
#include "utils/config.hpp"

class Point {

    public:
        Point();
        Point(const int mass, const double x, const double y, const double z = 0);

        void update(double const dt);

        // Getter.
        double getMass() const { return this->mass; }
        Vector getPosition() const { return this->position; }
        Vector getVelocity() const { return this->velocity; }

        // Cout.
        friend std::ostream& operator <<(std::ostream&, const Point&);

    private:
        Vector position = Vector();
        Vector velocity = Vector();
        double mass;
};


#endif