cmake_minimum_required(VERSION 3.26)
project(Laba1TechnologyOfProgramming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Laba1TechnologyOfProgramming
        main.cpp
        main.h
        Car.h
        Garage.h
        Car.cpp
        Keeper.cpp)
