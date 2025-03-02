cmake_minimum_required(VERSION 3.28)
project(softsim)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories (for headers)
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/src)


file(GLOB CORE_SOURCES src/core/*.cpp)
file(GLOB GUI_SOURCES src/gui/*.cpp)
file(GLOB UTILS_SOURCES src/utils/*.hpp)

# Create a library for math functions (vector.cpp)
add_library(math_lib src/math/vector.cpp)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

# Create the main executable
add_executable(softsim src/main.cpp ${CORE_SOURCES} ${GUI_SOURCES} ${UTILS_SOURCES})

# Link the math library to the main executable
target_link_libraries(softsim PRIVATE math_lib SFML::Graphics)

