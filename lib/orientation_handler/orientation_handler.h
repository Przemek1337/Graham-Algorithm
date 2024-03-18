#ifndef LIB_ORIENTATION_HANDLER_ORIENTATION_HANDLER_H
#define LIB_ORIENTATION_HANDLER_ORIENTATION_HANDLER_H

#include "lib\point\point.h"
#include "lib\direction\direction.h"

class OrientationHandler{
    public:
    OrientationHandler() = default;
    Direction Orientation(Point &point_a, Point &point_b, Point &point_c) const;
};

#endif // LIB_ORIENTATION_HANDLER_ORIENTATION_HANDLER_H
