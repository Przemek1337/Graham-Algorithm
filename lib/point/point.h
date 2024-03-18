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
   Point() = delete;
   Point(double x, double y);
   
   bool operator>(const Point& second_point) const;
   // Basic Getters
   virtual double getX()const {return x_coordinate;}
   virtual double getY()const {return y_coordinate;}
   // Basic Setters
   void setX(const double& newX){
    x_coordinate = newX;
   }
   void setY(const double& newY){
    x_coordinate = newY;
   }
   void PrintPointCoordinates()const;
   
};
#endif // POINT_POINT_H
