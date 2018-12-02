cmake_minimum_required(VERSION 3.4.3)

if(NOT DEFINED TRILL_VERSION_MAJOR)
  set(TRILL_VERSION_MAJOR 0)
endif()

if(NOT DEFINED TRILL_VERSION_MINOR)
  set(TRILL_VERSION_MINOR 0)
endif()

if(NOT DEFINED TRILL_VERSION_PATCH)
  set(TRILL_VERSION_PATCH 0)
endif()

set(CMAKE_VERBOSE_MAKEFILE ON)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")



find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})


include_directories(include)



add_executable(calculator examples/calculator.cpp)
