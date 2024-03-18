#include <gtest/gtest.h>
#include "lib\convexhull_handler\convexhull_handler.h"

class ConvexHullHandlerFixture : public ::testing::Test, public ::testing::WithParamInterface<std::pair<std::vector<Point>, std::vector<Point>>>
{
public:
    std::vector<Point> GetParameter() { return GetParam().first; }

    std::vector<Point> GetParameterResult() { return GetParam().second; }

    bool ContainsPoint(const std::vector<Point> &points, const Point &point_to_check)
    {
        for (const auto &point : points)
        {
            if (point.getX() == point_to_check.getX() && point.getY() == point_to_check.getY())
                return true;
        }
        return false;
    }

    ConvexHullHandler handler_;
};

TEST_P(ConvexHullHandlerFixture, GivenDifferentVectors_ExpectEveryPointToBeEqual)
{
    const auto& tested_vector = GetParameter();
    const auto& expected_result = GetParameterResult(); 

    handler_.ConvexHull(tested_vector);
    ASSERT_EQ(tested_vector.size(), expected_result.size());

    for (const auto &expectedPoint : expected_result)
    {
        EXPECT_TRUE(ContainsPoint(tested_vector, expectedPoint));
    }
}

INSTANTIATE_TEST_CASE_P(
    TestVectors,
    ConvexHullHandlerFixture,
    ::testing::Values(
        std::make_pair(std::vector<Point>{{0, 0}, {1, 1}, {0, 1}, {1, 0}},
                       std::vector<Point>{{0, 0}, {1, 0}, {1, 1}, {0, 1}}),
        std::make_pair(std::vector<Point>{{0, 0}, {3, 3}, {1, 1}, {2, 2}},
                       std::vector<Point>{{0, 0}, {1, 1}, {2, 2}, {3, 3}})
    )
);
