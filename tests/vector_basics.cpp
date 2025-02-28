#define CATCH_CONFIG_MAIN 
#include <catch2/catch_all.hpp>

#include "../include/math/vector.hpp"

TEST_CASE("Vector constructor", "[Vector]") {
    Vector v = Vector(1, 2);

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 2.0);   
    REQUIRE(v.getZ() == 0.0);   
}


TEST_CASE("Vector add v + v2", "[Vector]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    Vector v = v1 + v2;


    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 4.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector add v + n", "[Vector]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = v1 + n;


    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);   
}

TEST_CASE("Vector add n + v", "[Vector]") {
    Vector v1 = Vector(1, 2);
    double n = 3.0;
    Vector v = n + v1;

    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);
}

TEST_CASE("Vector v += v2", "[Vector]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    v += v2;

    REQUIRE(v.getX() == 2.0);
    REQUIRE(v.getY() == 4.0);   
    REQUIRE(v.getZ() == 0.0);   
}

TEST_CASE("Vector v += n", "[Vector]") {
    Vector v = Vector(1, 2);
    double n = 3.0;
    v += n;

    REQUIRE(v.getX() == 4.0);
    REQUIRE(v.getY() == 5.0);   
    REQUIRE(v.getZ() == 3.0);
}
