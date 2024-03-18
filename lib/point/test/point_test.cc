#include <gtest/gtest.h>
#include <sstream>
#include <iostream>
#include "lib\point\point.h"




class PointTest : public ::testing::Test {
protected:
    Point p1{2, 3};
    Point p2{1, 0};
    Point p3{1, 2};
    Point p4{5, 3};
    Point p5{2.5, 2};
    Point p6{-1, 2};
    Point p7{4, -1};

};

TEST_F(PointTest, ConstructorSetsValues) {
    EXPECT_DOUBLE_EQ(p1.getX(), 2);
    EXPECT_DOUBLE_EQ(p1.getY(), 3);
}

TEST_F(PointTest, GreaterThanOperator) {
    EXPECT_FALSE(p1 > p2);
    EXPECT_TRUE(p2 > p1);
    EXPECT_TRUE(p3 > p1);
    EXPECT_TRUE(p7 > p1);
}



