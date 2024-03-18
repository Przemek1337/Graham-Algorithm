#include "lib\file_manager\file_manager.h"

void FileManager::ReadInput(std::string path, std::vector<Point> &points){
    double i{0}, x{0}, y{0}, number_of_points{0};
    std::ifstream file_to_read;
    file_to_read.open(path);
    if (!file_to_read.is_open()){
        std::cerr<<"Error";
    }
    std::fstream cin(path);
    cin >> number_of_points;
    for (i; i<number_of_points; i++ ){
        cin >> x;
        cin >> y;
        points.push_back(Point(x,y));

    }
    cin.close();
    file_to_read.close();
    
}

   
