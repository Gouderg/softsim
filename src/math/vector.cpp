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
        n + v.x,
        n + v.y,
        n + v.z
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

/** Soustractions */
Vector Vector::operator - (Vector const &v) const {
    return Vector(
        this->x - v.x,
        this->y - v.y,
        this->z - v.z
    );
}

Vector Vector::operator - (double const &n) const {
    return Vector(
        this->x - n,
        this->y - n,
        this->z - n
    );
}

Vector operator - (const double &n, Vector const &v) {
    return Vector(
        n - v.x,
        n - v.y,
        n - v.z 
    );
}

void Vector::operator -= (Vector const &v) {
    this->x -= v.x;
    this->y -= v.y;        
    this->z -= v.z;
}

void Vector::operator -= (double const &n) {
    this->x -= n;
    this->y -= n;        
    this->z -= n;
}

/** Multiplication */
Vector Vector::operator * (Vector const &v) const {
    return Vector(
        this->x * v.x,
        this->y * v.y,
        this->z * v.z
    );
}

Vector Vector::operator * (double const &n) const {
    return Vector(
        this->x * n,
        this->y * n,
        this->z * n
    );
}

Vector operator * (const double &n, Vector const &v) {
    return Vector(
         n * v.x,
         n * v.y,
         n * v.z
    );
}

void Vector::operator *= (Vector const &v) {
    this->x *= v.x;
    this->y *= v.y;        
    this->z *= v.z;
}

void Vector::operator *= (double const &n) {
    this->x *= n;
    this->y *= n;        
    this->z *= n;
}

/** Division */
Vector Vector::operator / (Vector const &v) const {
    if (v.x == 0 || v.y == 0 || v.z == 0)
        throw std::invalid_argument("Cannot divide by 0");

    return Vector(
        this->x / v.x,
        this->y / v.y,
        this->z / v.z
    );
}

Vector Vector::operator / (double const &n) const {
    if (n == 0)
        throw std::invalid_argument("Cannot divide by 0");
    
    return Vector(
        this->x / n,
        this->y / n,
        this->z / n
    );
}

Vector operator / (const double &n, Vector const &v) {
    if (v.x == 0 || v.y == 0 || v.z == 0)
        throw std::invalid_argument("Cannot divide by 0");
    
    return Vector(
        n / v.x,
        n / v.y,
        n / v.z
    );
}

void Vector::operator /= (Vector const &v) {
    if (v.x == 0 || v.y == 0 || v.z == 0)
        throw std::invalid_argument("Cannot divide by 0");

    this->x /= v.x;
    this->y /= v.y;        
    this->z /= v.z;
}

void Vector::operator /= (double const &n) {
    if (n == 0)
        throw std::invalid_argument("Cannot divide by 0");
    
    this->x /= n;
    this->y /= n;        
    this->z /= n;
}

// Comparison.
bool Vector::operator == (Vector const &v) const {
    return this->x == v.x && this->y == v.y && this->z == v.z;
}

bool Vector::operator != (Vector const &v) const {
    return this->x != v.x || this->y != v.y || this->z != v.z;
}

double Vector::dot(Vector const &v) const {
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

double Vector::magnitude() const {
    return std::sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

void Vector::normalize() {
    double mag = this->magnitude();
    if (mag > 0) {
        this->x /= mag;
        this->y /= mag;
        this->z /= mag;
    }
}
