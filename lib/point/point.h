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
   virtual double GetXCoordinate()const {return x_coordinate;}
   virtual double GetYCoordinate()const {return y_coordinate;}
   // Basic Setters
   void SetXCoordinate(const double& new_x_coordinate){
    x_coordinate = new_x_coordinate;
   }
   void SetYCoordinate(const double& new_y_coordinate){
    x_coordinate = new_y_coordinate;
   }
   void PrintPointCoordinates()const;
   
};
#endif // POINT_POINT_H
