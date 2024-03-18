#include <gtest/gtest.h>
#include "lib\convexhull_handler\convexhull_handler.h"  
#include "lib\point\point.h"

bool pointsAreEqual(const Point& p1, const Point& p2) {
    return p1.getX() == p2.getX() && p1.getY() == p2.getY();
}
bool containsPoint(const std::vector<Point>& points, const Point& point) {
    for (const auto& p : points) {
        if (pointsAreEqual(p, point)) {
            return true;
        }
    }
    return false;
}

class ConvexHullHandlerTest : public ::testing::Test {
protected:
    
    std::vector<Point> simpleCase_first_test{{0, 0}, {1, 1}, {0, 1}, {1, 0}};       // kwadrat z punktów
    std::vector<Point> simpleCaseResult_first_test{{0, 0}, {1, 0}, {1, 1}, {0, 1}};
    
    std::vector<Point> simpleCase_second_test{{0, 0}, {3, 3}, {1, 1}, {2, 2}};      // wszystkie punkty wspolliniowe
    std::vector<Point> simpleCaseResult2_second_test{{0, 0}, {1, 1}, {2, 2}, {3, 3}};
    
};

TEST_F(ConvexHullHandlerTest, SimpleCase_first_test) {
    ConvexHullHandler handler;
    handler.ConvexHull(simpleCase_first_test);
    ASSERT_EQ(simpleCase_first_test.size(), simpleCaseResult_first_test.size());
    
    for (const auto& expectedPoint : simpleCaseResult_first_test) {
        EXPECT_TRUE(containsPoint(simpleCase_first_test, expectedPoint));
    }
}
TEST_F(ConvexHullHandlerTest, SimpleCase_second_test) {
    ConvexHullHandler handler;
    handler.ConvexHull(simpleCase_second_test);
    ASSERT_EQ(simpleCase_second_test.size(), simpleCaseResult2_second_test.size());
    
    for (const auto& expectedPoint : simpleCaseResult2_second_test) {
        EXPECT_TRUE(containsPoint(simpleCase_second_test, expectedPoint));
    }
}
