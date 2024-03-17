#include "lib\mainapp\mainapp.h"
#include "lib\file_manager\file_manager.h"
#include "lib\convexhull_handler\convexhull_handler.h"
 
#include <string>
void MainApp::App(){ 
    std::string path;
    FileManager fileManager;
    std::cout<<"Podaj sciezke do pliku(z .txt): ";
    std::cin>>path;
    fileManager.ReadInput(path, points);
    ConvexHullHandler hullHandler;
    hullHandler.ConvexHull(points);
    hullHandler.PrintHull();
}