add_executable(testing add_test.cpp)

target_link_libraries(testing PUBLIC
    gtest_main
    addlib
    sublib
    )

add_test(
    NAME testing 
    COMMAND testing
    )