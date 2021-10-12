cmake_minimum_required(VERSION 3.20)
project(c_exe C)

set(CMAKE_C_STANDARD 99)

add_executable(c_exe main.c square_as.c square_as.h)
