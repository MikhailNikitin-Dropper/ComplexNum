cmake_minimum_required(VERSION 3.26)
project(ComplexNum)

set(CMAKE_CXX_STANDARD 20)

add_executable(ComplexNum main.cpp
        ComplexNum.cpp
        ComplexNum.h
        ComplexNum_Test.cpp
        ComplexNum_Test.h)
