cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

include_directories("include/")

add_subdirectory("src/")
add_subdirectory("test/")
