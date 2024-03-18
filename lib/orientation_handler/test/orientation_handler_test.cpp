#include <gtest/gtest.h>
#include "lib\orientation_handler\orientation_handler.h"

class OrientationHandlerFixture : public ::testing::Test::WithParamInterface<std::pair<std::vector<Point>, Direction>>
{
public:
    bool CheckOrientationUsingVectorPoints(std::vector<Point> points, const Direction &direction) const
    {
        EXPECT_EQ(handler_.Orientation(points[0], points[1], points[2]), direction);
    }
    OrientationHandler handler_;
}

TEST_P(OrientationHandlerFixture, GivenTestVector_ExpectProperOrientation)
{
    CheckOrientationUsingVectorPoints(GetParam().first, GetParam().second);
}

INSTANTIATE_TEST_CASE_P(
    TestVectors,
    OrientationHandlerFixture,
    ::testing::Values(
        std::make_pair(std::vector<Point>{{0, 0}, {1, 1}, {2, 2}}, Direction::None),
        std::make_pair(std::vector<Point>{{0, 0}, {1, 1}, {1, 0}}, Direction::Left),
        std::make_pair(std::vector<Point>{{0, 0}, {1, 1}, {0, -1}}, Direction::Right)));
