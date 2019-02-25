cmake_minimum_required(VERSION 3.8)
project(a8pr1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BSTree.h BSTree.cpp)
add_executable(a8pr1 ${SOURCE_FILES})