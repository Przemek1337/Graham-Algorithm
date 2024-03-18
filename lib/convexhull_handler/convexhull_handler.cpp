#include "lib\convexhull_handler\convexhull_handler.h"
// Funkcja obliczająca otoczkę wypukłą dla zbioru punktów.
void ConvexHullHandler::ConvexHull(std::vector<Point> &points) {
    OrientationHandler orientationhandler;
    // Sortowanie punktów najpierw względem współrzędnej y, a następnie x za pomocą lambdy.
    std::sort(points.begin(), points.end(), [](const Point& a, const Point& b){
            return (a.getY() < b.getY()) || (a.getY() == b.getY() && a.getX() < b.getX() );
           
            
        });
    
    
    
    
    // Iteracja przez wszystkie punkty, aby zbudować dolną część otoczki.
    for (int i = 0; i < points.size(); i++) {
        // Usuwanie punktów z otoczki, które nie tworzą wypukłości.
        while (hull.size() > 1 && orientationhandler.Orientation(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) != Direction::Right) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
        
    }
    // Inicjalizacja aktualnej pojemności hull'a po zbudowaniu dolnej otoczki
    const auto start = hull.size();
    // Rozpoczęcie budowania górnej części otoczki.
    for (int i = points.size() - 1; i >= 0; i--) {
        // Podobnie jak wcześniej, usuwanie punktów, które nie tworzą wypukłości.
        while (hull.size() > start && orientationhandler.Orientation(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) != Direction::Right) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
        
    }
    
    
    
}
// Funkcja wypisująca punkty otoczki na standardowe wyjście.
void ConvexHullHandler::PrintHull()const{
   for (const auto& point : hull){
     point.PrintPointCoordinates(); 
     
   } 
}