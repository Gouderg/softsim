#include "math/vector.hpp"

// Constructor.
Vector::Vector(const double x, const double y, const double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

// Cout.
std::ostream& operator <<(std::ostream& out, const Vector& v) {
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}


/** Additions */
Vector Vector::operator + (Vector const &v) const {
    return Vector(
        this->x + v.x,
        this->y + v.y,
        this->z + v.z
    );
}

Vector Vector::operator + (double const &n) const {
    return Vector(
        this->x + n,
        this->y + n,
        this->z + n
    );
}

Vector operator + (const double &n, Vector const &v) {
    return Vector(
        v.x + n,
        v.y + n,
        v.z + n
    );
}

void Vector::operator += (Vector const &v) {
    this->x += v.x;
    this->y += v.y;        
    this->z += v.z;
}

void Vector::operator += (double const &n) {
    this->x += n;
    this->y += n;        
    this->z += n;
}