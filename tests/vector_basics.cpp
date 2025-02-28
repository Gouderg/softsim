#define CATCH_CONFIG_MAIN 

#include <catch2/catch_all.hpp>

#include "../include/math/vector.hpp"


TEST_CASE("Vector constructor", "[operator+]") {
    Vector v = Vector(1, 2);

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 2.0);   
    REQUIRE(v.getZ() == 0.0);   
}


TEST_CASE("Vector add v + v2", "[operator+]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    Vector v = v1 + v2;


    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 4.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add v + n", "[operator+]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = v1 + n;


    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);   
}

TEST_CASE("Vector add n + v", "[operator+]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = n + v1;

    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);
}

TEST_CASE("Vector v += v2", "[operator+=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    v += v2;

    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 4.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector v += n", "[operator+=]") {
    Vector v = Vector(1, 2);
    double n = 3.0;
    v += n;

    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);
}

TEST_CASE("Vector add v - v2", "[operator-]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(2, 3);
    Vector v = v1 - v2;


    REQUIRE(v.getX() == -1.0);
    REQUIRE(v.getY() == -1.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add v - n", "[operator-]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = v1 - n;


    REQUIRE(v.getX() == -2.0);
    REQUIRE(v.getY() == -1.0);   
    REQUIRE(v.getZ() == -3.0);   
}

TEST_CASE("Vector add n - v", "[operator-]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = n - v1;

    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 1.0);   
    REQUIRE(v.getZ() == 3.0);
}

TEST_CASE("Vector v -= v2", "[operator-=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    v -= v2;

    REQUIRE(v.getX() == 0.0);
    REQUIRE(v.getY() == 0.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector v -= n", "[operator-=]") {
    Vector v = Vector(1, 2);
    double n = 3.0;
    v -= n;

    REQUIRE(v.getX() == -2.0);
    REQUIRE(v.getY() == -1.0);   
    REQUIRE(v.getZ() == -3.0);
}

TEST_CASE("Vector add v * v2", "[operator*]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(2, 3);
    Vector v = v1 * v2;


    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 6.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add v * n", "[operator*]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = v1 * n;


    REQUIRE(v.getX() == 3.0);
    REQUIRE(v.getY() == 6.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add n * v", "[operator*]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = n * v1;

    REQUIRE(v.getX() == 3.0);
    REQUIRE(v.getY() == 6.0);   
    REQUIRE(v.getZ() == 0.0);
}

TEST_CASE("Vector v *= v2", "[operator*=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    v *= v2;

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 4.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector v *= n", "[operator*=]") {
    Vector v = Vector(1, 2);
    double n = 3.0;
    v *= n;

    REQUIRE(v.getX() == 3.0);
    REQUIRE(v.getY() == 6.0);   
    REQUIRE(v.getZ() == 0.0);
}

TEST_CASE("Vector add v / v2", "[operator/]") {
    Vector v1 = Vector(1, 2, 1);
    Vector v2 = Vector(2, 4, 1);
    Vector v = v1 / v2;


    REQUIRE(v.getX() == 0.5);
    REQUIRE(v.getY() == 0.5);   
    REQUIRE(v.getZ() == 1.0);   
}

TEST_CASE("Vector add v / n", "[operator/]") {
    Vector v1 = Vector(1, 2);
    double n = 10.0;
    Vector v = v1 / n;


    REQUIRE(v.getX() == 0.1);
    REQUIRE(v.getY() == 0.2);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add n / v", "[operator/]") {
    Vector v1 = Vector(1, 6, 3);
    double n = 3.0;
    Vector v = n / v1;

    REQUIRE(v.getX() == 3.0);
    REQUIRE(v.getY() == 0.5);   
    REQUIRE(v.getZ() == 1.0);
}

TEST_CASE("Vector v /= v2", "[operator/=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2, 3);
    v /= v2;

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 1.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector v /= n", "[operator/=]") {
    Vector v = Vector(3, 6);
    double n = 3.0;
    v /= n;

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 2.0);   
    REQUIRE(v.getZ() == 0.0);
}

TEST_CASE("Vector Try to divide by 0", "[operator/=]") {
    Vector v = Vector(3, 6);

    SECTION("Division by zero causes program to abort") {
        REQUIRE_THROWS_AS(v /= 0.0, std::invalid_argument);
    }
}