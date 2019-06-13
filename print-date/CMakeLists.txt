cmake_minimum_required(VERSION 2.8.4)
project(cpp)

# CMake FindThreads is broken until 3.1
#find_package(Threads REQUIRED)
set(CMAKE_THREAD_LIBS_INIT pthread)

enable_testing()
find_package(GTest)

include(ExternalProject)
if(NOT ${GTEST_FOUND}) # Download gtest if not installed
    message("No system gtest use external project")
    ExternalProject_Add(googletest
      GIT_REPOSITORY    https://github.com/google/googletest.git
      GIT_TAG           master
      SOURCE_DIR        "${CMAKE_BINARY_DIR}/googletest-src"
      BINARY_DIR        "${CMAKE_BINARY_DIR}/googletest-build"
      CONFIGURE_COMMAND ""
      BUILD_COMMAND     ""
      INSTALL_COMMAND   ""
      TEST_COMMAND      ""
    )
    add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
                 ${CMAKE_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)
    set(GTEST_BOTH_LIBRARIES gtest gtest_main)
endif()

ExternalProject_Add(aprovaltest
    PREFIX ${CMAKE_BINARY_DIR}/aprovaltest
    URL https://github.com/approvals/ApprovalTests.cpp/releases/download/v.2.0.0/ApprovalTests.v.2.0.0.hpp
    DOWNLOAD_NO_EXTRACT 1
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)

include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${CMAKE_BINARY_DIR}/aprovaltest/src)

add_executable(PrintDate
        PrintDate.cc
        PrintDate.h
        PrintDateUnitTests.cc
    )
target_link_libraries(PrintDate ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
add_test(NAME PrintDate COMMAND PrintDate)

add_executable(PrintDateTextTests
        PrintDate.cc
        PrintDate.h
        )
target_link_libraries(PrintDateTextTests ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
add_test(NAME PrintDateTextTests COMMAND PrintDateTextTests)

add_executable(PrintDateApprovalTests
        PrintDate.cc
        PrintDate.h
        )
target_link_libraries(PrintDateApprovalTests ${GTEST_BOTH_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
set_property(TARGET PrintDateApprovalTests PROPERTY CXX_STANDARD 14)
add_dependencies(PrintDateApprovalTests aprovaltest)
add_test(NAME PrintDateApprovalTests COMMAND PrintDateApprovalTests)
