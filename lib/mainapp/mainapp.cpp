#include "lib\mainapp\mainapp.h"
#include "lib\file_manager\file_manager.h"
#include "lib\convexhull_handler\convexhull_handler.h"
 
#include <string>
void MainApp::App(){ 
    // Wywołanie wszystkich części kodu w celu przeczytania danych z pliku, zastosowania algorytmu oraz wypisania w terminalu wyniku
    std::string path;
    FileManager fileManager;
    std::cout<<"Enter an absolute path(Example: C:/Users/user/Desktop/project/src/load_data.txt) " << std::endl;
    std::cout<<"-> ";
    std::cin>>path;
    fileManager.ReadInput(path, points);
    ConvexHullHandler hullHandler;
    hullHandler.ConvexHull(points);
    hullHandler.PrintHull();
}