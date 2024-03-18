#ifndef LIB_MAINAPP_MAINAPP_H
#define LIB_MAINAPP_MAINAPP_H
#include "lib\convexhull_handler\convexhull_handler.h"
#include "lib\file_manager\file_manager.h"
#include <iostream>
class MainApp{
    private:
    std::vector<Point> points;  
    public:
    MainApp() = default;
    ~MainApp() = default;
    void App();
};
#endif // MAINAPP_MAINAPP_H
