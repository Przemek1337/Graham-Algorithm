#ifndef CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H
#define CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H


#include "lib\orientation_handler\orientation_handler.h"
#include <algorithm>
class ConvexHullHandler{
    private:
    std::vector<Point> points_vector;
    public:
    ConvexHullHandler() = default;
    void ConvexHull(std::vector<Point> &points);
    void PrintHull()const;
};
#endif // CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H
