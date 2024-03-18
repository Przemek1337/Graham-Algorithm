#include "lib\file_manager\file_manager.h"

void FileManager::ReadInput(std::string path, std::vector<Point> &points){
    double i{0}, x{0}, y{0};
    size_t number_of_points;
    std::ifstream file_to_read;
    file_to_read.open(path);
    if (!file_to_read.is_open()){
        std::cerr<<"Error";
    }
    std::fstream os(path);
    os >> number_of_points;
    for (i; i<number_of_points; i++ ){
        os >> x;
        os >> y;
        points.push_back(Point(x,y));

    }
    os.close();
    file_to_read.close();
    
}

   
