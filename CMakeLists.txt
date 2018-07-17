cmake_minimum_required(VERSION 3.6)

project(CoursCPP)

set(CMAKE_CXX_STANDARD 17)

set(Browthon_F Classes/Homme.cpp Classes/Homme.h)

add_executable(CoursCPP main.cpp ${Browthon_F})