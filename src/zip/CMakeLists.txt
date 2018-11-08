project(barzip)

find_package(libzip)

include_directories("../"
                    libzip_INCLUDE_DIRS)

add_library(barzip STATIC bar.cpp)
target_link_libraries(barzip libzip::libzip)
