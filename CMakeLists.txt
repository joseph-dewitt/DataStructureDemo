cmake_minimum_required(VERSION 3.6)
project(DataStructureDemo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp llist.cpp llist.h)
add_executable(DataStructureDemo ${SOURCE_FILES})