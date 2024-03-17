#include "lib\convexhull_handler\convexhull_handler.h"
void ConvexHullHandler::ConvexHull(std::vector<Point> &points) {
    OrientationHandler orientationhandler;
    std::sort(points.begin(), points.end(), [](const Point& a, const Point& b){
            return (a.getY() < b.getY()) || (a.getY() == b.getY() && a.getX() < b.getX() );
           
            
        });
    
    
    
    

    for (int i = 0; i < points.size(); i++) {
        while (hull.size() > 1 && orientationhandler.Orientation(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) != Direction::Right) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
        
    }

    const auto start = hull.size();
    for (int i = points.size() - 1; i >= 0; i--) {
        while (hull.size() > start && orientationhandler.Orientation(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) != Direction::Right) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
        
    }
    
    
    
}
void ConvexHullHandler::PrintHull()const{
   for (const auto& point : hull){
     point.PrintPointCoordinates(); 
     
   } 
}