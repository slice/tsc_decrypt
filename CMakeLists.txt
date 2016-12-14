cmake_minimum_required(VERSION 3.0.0)
project(tsc_decrypt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

file(GLOB_RECURSE td_sources "${CMAKE_SOURCE_DIR}/src/*.cc")

add_executable(tsc_decrypt ${td_sources})
