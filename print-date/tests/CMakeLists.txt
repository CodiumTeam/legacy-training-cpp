cmake_minimum_required (VERSION 2.8)
project (print-date)

include_directories(../)

add_executable(PrintDateTest PrintDateTest.cpp)
target_link_libraries(PrintDateTest gmock gtest)