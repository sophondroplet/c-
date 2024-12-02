add_library(addlib add.cpp)
add_library(sublib subtract.cpp)
add_library(mathlib math.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} addlib mathlib)


