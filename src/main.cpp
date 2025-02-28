#include <iostream>

#include "core/point.hpp"


int main(int argc, char const *argv[])
{   
    Point p = Point();

    for (int i = 0; i < 100; i += 1) {
        p.update(0.01);
        std::cout << p << std::endl;
    }
    return 0;
}
