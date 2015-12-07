cmake_minimum_required(VERSION 3.3)
project(CLionProjectFiles)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ../P131-Chap5-DFS-Graph_Traverse.c)
add_executable(CLionProjectFiles ${SOURCE_FILES})