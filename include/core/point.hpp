#ifndef POINT_H
#define POINT_H

#include "math/vector.hpp"

class Point {

    public:
        Point();

        void update(double const dt);

        // Cout.
        friend std::ostream& operator <<(std::ostream&, const Point&);

    private:
        Vector position = Vector();
        Vector velocity = Vector();
        double mass;
};


#endif