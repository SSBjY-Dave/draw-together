cmake_minimum_required(VERSION 3.2.0)
project(DrawTogether VERSION 0.0.1)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
add_subdirectory(src)