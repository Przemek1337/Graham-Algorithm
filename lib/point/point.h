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
   // Podstawowe gettery, aby uzyskać dostęp do zmiennych w innych klasach
   virtual double getX()const {return x_coordinate;}
   virtual double getY()const {return y_coordinate;}
   // Podstawowe settery, by aktualizować/ustawiać wartość w innych klasach
   void setX(const double& newX){
    x_coordinate = newX;
   }
   void setY(const double& newY){
    x_coordinate = newY;
   }
   void PrintPointCoordinates()const;
   
};
#endif // POINT_POINT_H