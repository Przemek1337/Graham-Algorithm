#include "lib\mainapp\mainapp.h"
#include <string>
void MainApp::App(){ 
    FileManager fileManager;
    ConvexHullHandler hullHandler;
    std::string path;
    std::cout<<"Enter an absolute path(Example: C:/Users/user/Desktop/project/src/load_data.txt) " << std::endl;
    std::cout<<"-> ";
    std::cin>>path;
    fileManager.ReadInput(path, points);
    hullHandler.ConvexHull(points);
    hullHandler.PrintHull();
}
