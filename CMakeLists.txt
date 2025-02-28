cmake_minimum_required(VERSION 3.28)
project(softsim)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories (for headers)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create a library for math functions (vector.cpp)
add_library(math_lib src/math/vector.cpp)

# Create the main executable
add_executable(softsim src/main.cpp)

# Link the math library to the main executable
target_link_libraries(softsim PRIVATE math_lib)
