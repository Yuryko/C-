cmake_minimum_required(VERSION 3.1)
project(SimpleCpp11Program)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test_prog test.cpp)