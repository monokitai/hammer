cmake_minimum_required(VERSION 3.7)
project(hammer)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-ltins -I/usr/local/include -L/usr/local/lib")

set(SOURCE_FILES main.cpp)
add_executable(hammer ${SOURCE_FILES})


