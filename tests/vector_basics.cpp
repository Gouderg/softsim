#define CATCH_CONFIG_MAIN 
#include <catch2/catch_all.hpp>

#include "../include/math/vector.hpp"

TEST_CASE("Vector constructor", "[Vector]") {
    Vector v = Vector(1, 2);

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 2.0);   
    REQUIRE(v.getZ() == 0.0);   
}