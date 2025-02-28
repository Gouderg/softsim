cmake_minimum_required(VERSION 3.14)
project(softsim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(softsim
    src/main.cpp
)

target_include_directories(softsim PRIVATE include)
# target_link_libraries(softsim some_external_library)