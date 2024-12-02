cmake_miniMum_required(VERSION 3.10)
project(add)

enable_testing()

include_directories(googletest)
include_directories(include)
include_directories(src)

add_subdirectory(test)
add_subdirectory(src)
add_subdirectory(googletest/googletest)




