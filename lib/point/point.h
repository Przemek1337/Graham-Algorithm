#ifndef LIB_POINT_POINT_H
#define LIB_POINT_POINT_H

#include <string>
#include <iostream>
#include <vector>

class Point
{
private:
   double x_coordinate_;
   double y_coordinate_;

public:
   explicit Point(const double& x_coordinate, const double& y_coordinate);

   bool operator>(const Point &second_point) const;
   // Basic Getters
   double getX() const { return x_coordinate_; }
   double getY() const { return y_coordinate_; }
   // Basic Setters
   void setX(const double &x_coordinate)
   {
      x_coordinate_ = x_coordinate;
   }
   void setY(const double &y_coordinate)
   {
      y_coordinate_ = y_coordinate;
   }
   void PrintPointCoordinates() const;
};
#endif // POINT_POINT_H
