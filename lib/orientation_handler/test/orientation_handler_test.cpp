#include <gtest/gtest.h>
#include "lib\orientation_handler\orientation_handler.h"
#include "lib\direction\direction.h"
TEST(OrientationHandlerTest, Collinear) {
    OrientationHandler handler;
    Point p1{0, 0}, p2{1, 1}, p3{2, 2};
    EXPECT_EQ(handler.Orientation(p1, p2, p3), Direction:None);
}

TEST(OrientationHandlerTest, Clockwise) {
    OrientationHandler handler;
    Point p1{0, 0}, p2{1, 1}, p3{1, 0};
    EXPECT_EQ(handler.Orientation(p1, p2, p3), Direction:Right);
}

TEST(OrientationHandlerTest, Counterclockwise) {
    OrientationHandler handler;
    Point p1{0, 0}, p2{1, 1}, p3{0, -1};
    EXPECT_EQ(handler.Orientation(p1, p2, p3), Direction:Left);
}