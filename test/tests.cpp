// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"

TEST(test_circle, radius_is_zero) {
    Circle c(0.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 0.0);
    EXPECT_DOUBLE_EQ(c.getFerence(), 0.0);
    EXPECT_DOUBLE_EQ(c.getArea(), 0.0);
}

TEST(test_circle, radius_is_five) {
    Circle c(5.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 5.0);
    EXPECT_DOUBLE_EQ(c.getFerence(), 2 * 5.0 * 3.14);
    EXPECT_DOUBLE_EQ(c.getArea(), 3.14 * 5.0 * 5.0);
}

TEST(test_circle, radius_is_double) {
    Circle c(123.456);
    EXPECT_DOUBLE_EQ(c.getRadius(), 123.456);
    EXPECT_DOUBLE_EQ(c.getFerence(), 2 * 123.456 * 3.14);
    EXPECT_DOUBLE_EQ(c.getArea(), 3.14 * 123.456 * 5.0);
}
