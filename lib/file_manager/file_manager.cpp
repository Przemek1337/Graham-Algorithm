#include "lib\file_manager\file_manager.h"

void FileManager::ReadInput(std::string path, std::vector<Point> &points){
    
    /*std::ifstream input_file(path);
    if (!input_file.is_open()){
        std::cerr << "Error" << std::endl;
        return;
    }
    int number_of_points;
    input_file >> number_of_points;
    Point point;
    double x = 0;
    double y = 0;
    for (int i=0; i< number_of_points; i++){
        
        if (input_file >> x >> y){
            
            point.setX(x);
            point.setY(y);
            point.PrintPointCoordinates();
            points.push_back(point);
        }else{
            std::cerr << "Błąd odczytu" << std::endl;
        }
    }
    
    input_file.close();
    */
   
   points.push_back(Point(2,3));
   points.push_back(Point(1,0));
   points.push_back(Point(1,2));
   points.push_back(Point(5,3));
   points.push_back(Point(2.5,2));
   points.push_back(Point(-1,2));
   points.push_back(Point(4,-1));
   points.push_back(Point(3,1));

}