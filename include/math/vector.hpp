#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector {

    public:
        Vector(){}
        Vector(const double x = 0, const double y = 0, const double z = 0);

        // Getter.
        double getX() const { return this->x; }
        double getY() const { return this->y; }
        double getZ() const { return this->z; }

        // Setter.
        void setX(const double x) { this->x = x; }
        void setY(const double y) { this->y = y; }
        void setZ(const double z) { this->z = z; }

        // Cout.
        friend std::ostream& operator <<(std::ostream&, const Vector&);

    private:
        double x, y, z;

};


#endif