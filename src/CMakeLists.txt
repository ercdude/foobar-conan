project(libfoo)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(Qt5 REQUIRED Core)

add_subdirectory("zip/")

add_library(libfoo SHARED foo.cpp)
target_link_libraries(libfoo Qt5::Core barzip)
target_compile_definitions(libfoo PRIVATE EXPORTS_DLL)
