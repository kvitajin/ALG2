cmake_minimum_required(VERSION 3.8)
project(apr1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp list.h cmake-build-debug/list.cpp Graph.h Graph.cpp Vertex.cpp Vertex.h)
add_executable(apr1 ${SOURCE_FILES})