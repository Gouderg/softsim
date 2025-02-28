#include <iostream>

#include "math/vector.hpp"

int main(int argc, char const *argv[])
{
    std::cout << "Hello World." << std::endl;

    Vector v = Vector(1, 2, 3);

    std::cout << v << std::endl;
    return 0;
}
