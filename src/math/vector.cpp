#include "math/vector.hpp"

// Constructor.
Vector::Vector(const double x, const double y, const double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Cout.
std::ostream& operator <<(std::ostream& out, const Vector& v) {
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")\n";
    return out;
}


