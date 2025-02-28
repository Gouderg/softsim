#define CATCH_CONFIG_MAIN 

#include <catch2/catch_all.hpp>

#include "../include/math/vector.hpp"


TEST_CASE("Vector dot product", "[dot]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);

    REQUIRE(v.dot(v2) == 5.0);
}

TEST_CASE("Vector magnitude", "[magnitude]") {
    Vector v = Vector(5);

    REQUIRE(v.magnitude() == 5.0);
}

TEST_CASE("Vector normalize", "[normalize]") {
    Vector v = Vector(5);
    v.normalize();
    REQUIRE(v == Vector(1));
}