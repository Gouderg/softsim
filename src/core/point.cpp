#include "core/point.hpp"

Point::Point() {
    this->position = Vector(1, 1);
    this->velocity = Vector(0, 0);
    this->mass = 10;
}

void Point::update(double const dt) {
    this->velocity += (dt * 9.81);
    this->velocity.normalize();
    this->position += (dt + this->velocity);
}

// Cout.
std::ostream& operator <<(std::ostream& out, const Point& p) {
    out << "Position: " << p.position << ", Velocity: " << p.velocity;
    return out;
}
