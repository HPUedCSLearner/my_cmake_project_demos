#include <gtest/gtest.h>

#include <add.hpp>

TEST(Dir003, int_add)
{
    int a = 3, b = 4;
    EXPECT_EQ(add(a, b), 7);
}

TEST(Dir003, float_add)
{
    float a = 3, b = 4;
    EXPECT_FLOAT_EQ(add(a, b), 7);
}

TEST(Dir003, double_add)
{
    double a = 3, b = 4;
    EXPECT_DOUBLE_EQ(add(a, b), 7);
}

TEST(Dir003, long_add)
{
    long a = 3, b = 4;

    EXPECT_EQ(add(a, b), 7);
    EXPECT_NE(add(a, b), 9);

    EXPECT_GE(add(a, b), 0);
    EXPECT_GT(add(a, b), 0);

    EXPECT_LE(add(a, b), 8);
    EXPECT_LT(add(a, b), 8);
}