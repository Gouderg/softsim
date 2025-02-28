#define CATCH_CONFIG_MAIN 

#include <catch2/catch_all.hpp>

#include "../include/math/vector.hpp"


TEST_CASE("Vector constructor", "[operator+]") {
    Vector v = Vector(1, 2);

    REQUIRE(v.getX() == 1.0);
    REQUIRE(v.getY() == 2.0);   
    REQUIRE(v.getZ() == 0.0);   
}


TEST_CASE("Vector addition operator", "[operator+]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v + v2") {
        Vector v = v1 + v2;
        REQUIRE((v.getX() == 2.0 && v.getY() == 4.0 && v.getZ() == 0.0));
    }

    SECTION("v + n") {
        Vector v = v1 + n;
        REQUIRE((v.getX() == 4.0 && v.getY() == 5.0 && v.getZ() == 3.0));
    }

    SECTION("n + v") {
        Vector v = n + v2;
        REQUIRE((v.getX() == 4.0 && v.getY() == 5.0 && v.getZ() == 3.0));
    }
}

TEST_CASE("Vector addition operator", "[operator+=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v += v2") {
        v += v2;
        REQUIRE((v.getX() == 2.0 && v.getY() == 4.0 && v.getZ() == 0.0));
    }

    SECTION("v + n") {
        v += n;
        REQUIRE((v.getX() == 4.0 && v.getY() == 5.0 && v.getZ() == 3.0));
    }
}

TEST_CASE("Vector soustraction operator", "[operator-]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v - v2") {
        Vector v = v1 - v2;
        REQUIRE((v.getX() == 0.0 && v.getY() == 0.0 && v.getZ() == 0.0));
    }

    SECTION("v - n") {
        Vector v = v1 - n;
        REQUIRE((v.getX() == -2.0 && v.getY() == -1.0 && v.getZ() == -3.0));
    }

    SECTION("n - v") {
        Vector v = n - v2;
        REQUIRE((v.getX() == 2.0 && v.getY() == 1.0 && v.getZ() == 3.0));
    }
}

TEST_CASE("Vector soustraction operator", "[operator-=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v -= v2") {
        v -= v2;
        REQUIRE((v.getX() == 0.0 && v.getY() == 0.0 && v.getZ() == 0.0));
    }

    SECTION("v - n") {
        v -= n;
        REQUIRE((v.getX() == -2.0 && v.getY() == -1.0 && v.getZ() == -3.0));
    }
}


TEST_CASE("Vector multiplication operator", "[operator*]") {
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v * v2") {
        Vector v = v1 * v2;
        REQUIRE((v.getX() == 1.0 && v.getY() == 4.0 && v.getZ() == 0.0));
    }

    SECTION("v * n") {
        Vector v = v1 * n;
        REQUIRE((v.getX() == 3.0 && v.getY() == 6.0 && v.getZ() == 0.0));
    }

    SECTION("n / v") {
        Vector v = n * v2;
        REQUIRE((v.getX() == 3.0 && v.getY() == 6.0 && v.getZ() == 0.0));
    }
}

TEST_CASE("Vector multiplication operator", "[operator*=]") {
    Vector v = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    double n = 3.0;
    
    SECTION("v *= v2") {
        v *= v2;
        REQUIRE((v.getX() == 1.0 && v.getY() == 4.0 && v.getZ() == 0.0));
    }

    SECTION("v * n") {
        v *= n;
        REQUIRE((v.getX() == 3.0 && v.getY() == 6.0 && v.getZ() == 0.0));
    }
}

TEST_CASE("Vector division operator", "[operator/]") {
    Vector v1 = Vector(3, 6);
    Vector v2 = Vector(6, 12, 3);
    double n = 3.0;
    
    SECTION("v / v2") {
        Vector v = v1 / v2;
        REQUIRE((v.getX() == 0.5 && v.getY() == 0.5 && v.getZ() == 0.0));
    }

    SECTION("v / n") {
        Vector v = v1 / n;
        REQUIRE((v.getX() == 1.0 && v.getY() == 2.0 && v.getZ() == 0.0));
    }

    SECTION("n / v") {
        Vector v = n / v2;
        REQUIRE((v.getX() == 0.5 && v.getY() == 0.25 && v.getZ() == 1.0));
    }
}

TEST_CASE("Vector division operator", "[operator/=]") {
    Vector v = Vector(3, 6);
    Vector v2 = Vector(1, 2, 3);
    double n = 3.0;
    
    SECTION("v /= v2") {
        v /= v2;
        REQUIRE((v.getX() == 3.0 && v.getY() == 3.0 && v.getZ() == 0.0));
    }

    SECTION("v /= n") {
        v /= n;
        REQUIRE((v.getX() == 1.0 && v.getY() == 2.0 && v.getZ() == 0.0));
    }

    SECTION("Division by zero causes program to abort") {
        REQUIRE_THROWS_AS(v /= 0.0, std::invalid_argument);
    }
}