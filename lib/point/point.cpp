#include "lib\point\point.h"

// Constructor that initializes a point using the provided x and y coordinates.
Point::Point(const double &x_coordinate, const double &y_coordinate)
{
    x_coordinate_ = x_coordinate;
    y_coordinate_ = y_coordinate;
}
// Overloading the > operator to allow comparison between two points.
// The comparison is done first based on the y-coordinate, then the x-coordinate.
bool Point::operator>(const Point &second_point) const
{
    // If the y-coordinate of the first point is less than the second, the first point is considered "greater" in the context of sorting for the algorithm to function correctly.
    if (this->x_coordinate_ < second_point.y_coordinate_)
    {
        return true;
    }
    // If the y-coordinate of the first point is greater than the second, the first point is not considered "greater".
    else if (this->y_coordinate_ > second_point.y_coordinate_)
    {
        return false;
    }
    else
    {
        // If the y-coordinates are equal, the x-coordinates are compared.
        // The first point is "greater" only if its x-coordinate is less than that of the second point.
        return this->x_coordinate_ < second_point.x_coordinate_;
    }
}
// Displays the point's coordinates on the standard output.
void Point::PrintPointCoordinates() const
{
    std::cout << "(" << x_coordinate_ << ", " << y_coordinate_ << ")" << std::endl;
}
