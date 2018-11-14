cmake_minimum_required(VERSION 3.12)
project(GoFishTesting)

set(CMAKE_CXX_STANDARD 14)

add_executable(GoFishTesting testing.cpp card.h card.cpp deck.h deck.cpp)