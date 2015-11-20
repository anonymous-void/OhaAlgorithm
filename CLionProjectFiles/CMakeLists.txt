cmake_minimum_required(VERSION 3.3)
project(CLionProjectFiles)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ../P114-Chap4-DFS-ColorFill.c)
add_executable(CLionProjectFiles ${SOURCE_FILES})