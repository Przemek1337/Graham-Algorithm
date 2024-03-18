#include "lib\orientation_handler\orientation_handler.h"
// The function calculates the orientation of three points (point_a, point_b, point_c) and determines
// whether they form a left turn, are collinear, or form a right turn.
Direction OrientationHandler::Orientation(Point &point_a, Point &point_b, Point &point_c) {
    // Calculate the determinant (here called 'area' though it's not literally the area),
    // which is used to determine the relative positioning of the points.
    // It's equivalent to twice the area of the triangle formed by these three points.
    double area = (point_b.getY() - point_a.getY()) * (point_c.getX() - point_b.getX()) - (point_b.getX() - point_a.getX()) * (point_c.getY() - point_b.getY());
    
    if (area == 0) return Direction::None; // Returns None (using value [int 1 = None] from direction.h enum for aesthetic), indicating the points are collinear.
    return (area > 0) ? Direction::Left : Direction::Right; // If the determinant is positive, it signifies that the triangle is oriented counterclockwise (left turn).
    // Otherwise (negative determinant) - a right turn.
}
