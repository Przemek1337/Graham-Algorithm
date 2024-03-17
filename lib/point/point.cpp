#include "lib\point\point.h"

bool Point::operator>(const Point& second_point) const{
    if (this->y_coordinate < second_point.y_coordinate){
        return true;
    }
    if (this->y_coordinate > second_point.y_coordinate) {
        return false;
    }
    else {
        return this->x_coordinate < second_point.x_coordinate;
    }
}
void Point::PrintPointCoordinates()const{
    std::cout << "(" << x_coordinate << ", " << y_coordinate << ")" << std::endl;
}
Point::Point(double x, double y){
    x_coordinate = x;
    y_coordinate = y;
}