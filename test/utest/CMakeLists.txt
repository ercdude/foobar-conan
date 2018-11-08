project(main-test)

find_package(gtest)
include_directories(${gtest_INCLUDE_DIRS})

add_executable(main-test main.cpp)
target_link_libraries(main-test gtest::gtest libfoo)
set_target_properties(main-test PROPERTIES
                                RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/"
                                LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")
