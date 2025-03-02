#include "core/point.hpp"

Point::Point() {

    std::random_device rd;  // Générateur de nombre aléatoire matériel (si dispo)
    std::mt19937 gen(rd()); // Mersenne Twister PRNG
    std::uniform_int_distribution<int> dist(1, HEIGHT); // Intervalle [1, 100]


    this->position = Vector(dist(gen), dist(gen));
    this->velocity = Vector(0, 0);
    this->mass = 50;
}

Point::Point(const int mass, const double x, const double y, const double z) {
    this->position = Vector(x, y, z);
    this->velocity = Vector(0, 0);
    this->mass = mass;
}

void Point::update(double const dt) {
    this->velocity += (dt);
    // this->velocity.normalize();
    this->position += (dt + this->velocity);
}

// Cout.
std::ostream& operator <<(std::ostream& out, const Point& p) {
    out << "Position: " << p.position << ", Velocity: " << p.velocity;
    return out;
}
