#include <iostream>

#include "math/vector.hpp"

int main(int argc, char const *argv[])
{
    std::cout << "Hello World." << std::endl;

    Vector v = Vector(1, 45, 3);
    Vector v2 = Vector(1, 2);


    std::cout << v + v2 << std::endl;
    std::cout << v + 34 << std::endl;
    std::cout << 12 + v2 << std::endl;
    
    v += v2;
    v += v2;
    v += v2;
    v += v2;
    std::cout << v << std::endl;
    
    v += 12;
    std::cout << v << std::endl;

    return 0;
}
