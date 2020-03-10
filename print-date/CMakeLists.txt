cmake_minimum_required(VERSION 3.15)
project(print_date)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(print_date
        Main.cpp
        )
