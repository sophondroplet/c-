#include <gtest/gtest.h>
#include "add.hpp"
#include "subtract.hpp"

// Test case for the add function
TEST(Calculator, Addtest) {
    int expected = 5;
    int calculated = add(2, 3);
    EXPECT_EQ(calculated, expected);
    }

TEST(Calculator2, SubTest) {
    int expected = 6;
    int calculated = subtract(21, 15);
    EXPECT_EQ(calculated, expected);
    }
