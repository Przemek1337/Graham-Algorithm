#ifndef CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H
#define CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H

#include "lib\orientation_handler\orientation_handler.h"
#include <algorithm>

class ConvexHullHandler{
    public:
    ConvexHullHandler() = default;
    ~ConvexHullHandler() = default;
    void ConvexHull(std::vector<Point> &points);
    void PrintHull()const;

    private:
    std::vector<Point> points_vector;
    OrientationHandler orientation_handler_;
    
};

#endif // CONVEXHULL_HANDLER_CONVEXHULL_HANDLER_H
