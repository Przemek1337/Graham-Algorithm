#include "lib\convexhull_handler\convexhull_handler.h"
// Function calculating the convex hull for a set of points.
void ConvexHullHandler::ConvexHull(std::vector<Point> &points) {
    OrientationHandler orientationhandler;
    // Sorting points first by the y-coordinate and then by the x-coordinate using a lambda function.
    std::sort(points.begin(), points.end(), [](const Point& a, const Point& b){
            return (a.GetYCoordinate() < b.GetYCoordinate()) || (a.GetYCoordinate() == b.GetYCoordinate() && a.GetXCoordinate() < b.GetXCoordinate() );  
        });
    // Iterating through all the points to build the lower part of the hull.
    for (int i = 0; i < points.size(); i++) {
        // Removing points from the hull that do not create convexity.
        while (points_vector.size() > 1 && orientationhandler.Orientation(points_vector[points_vector.size() - 2], points_vector[points_vector.size() - 1], points[i]) != Direction::Right) {
            points_vector.pop_back();
        }
        points_vector.push_back(points[i]);    
    }
    // Initializing the current capacity of the hull after building its lower part.
    const auto start = points_vector.size();
    // Starting to build the upper part of the hull.
    for (int i = points.size() - 1; i >= 0; i--) {
        // Similar to before, removing points that do not create convexity.
        while (points_vector.size() > start && orientationhandler.Orientation(points_vector[points_vector.size() - 2], points_vector[points_vector.size() - 1], points[i]) != Direction::Right) {
           points_vector.pop_back();
        }
        points_vector.push_back(points[i]);    
    }   
}
// Function printing the hull points to the standard output.
void ConvexHullHandler::PrintHull()const{
   for (const auto& point :points_vector){
     point.PrintPointCoordinates();    
   } 
}
