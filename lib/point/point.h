#ifndef LIB_POINT_POINT_H
#define LIB_POINT_POINT_H
#include <string>
#include <iostream>
#include <vector>
class Point{
   private:
   double x_coordinate;
    double y_coordinate;
    
   public:
   Point() = default;
   Point(double x, double y);
   bool operator>(const Point& second_point) const;
   double getX()const {return x_coordinate;}
   double getY()const {return y_coordinate;}
   void setX(const double& newX){
    x_coordinate = newX;
   }
   void setY(const double& newY){
    x_coordinate = newY;
   }
   void PrintPointCoordinates()const;
   
};
#endif // POINT_POINT_H