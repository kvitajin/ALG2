cmake_minimum_required(VERSION 3.8)
project(a9pr1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp hashTable.cpp hashTable.h)
add_executable(a9pr1 ${SOURCE_FILES})