#include "lib\orientation_handler\orientation_handler.h"
Direction OrientationHandler::Orientation(Point &point_a, Point &point_b, Point &point_c) {
    double area = (point_b.getY() - point_a.getY()) * (point_c.getX() - point_b.getX()) - (point_b.getX() - point_a.getX()) * (point_c.getY() - point_b.getY());
    
    if (area == 0) return Direction::None; // wspolliniowe
    return (area > 0) ? Direction::Left : Direction::Right; // lewo lub prawo skretny
}