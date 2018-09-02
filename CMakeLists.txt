cmake_minimum_required(VERSION 2.8.2)

project(cracking_the_coding_interview)

set(CMAKE_CXX_FLSGS "${CMAKE_CXX_FLSGS} -std=c++11")

include_directories(src/chapter_01)
add_executable(
        chapter_01
        src/chapter_01/problem_01_is_unique.cpp
        src/chapter_01/problem_01_is_unique.h
)
