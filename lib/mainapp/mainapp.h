#ifndef LIB_MAINAPP_MAINAPP_H
#define LIB_MAINAPP_MAINAPP_H

#include "lib/convexhull_handler/convexhull_handler.h"
#include "lib/file_manager/file_manager.h"
#include <iostream>
#include <vector>

class MainApp
{
private:
    std::vector<Point> points_;
    FileManager file_manager_;
    const OrientationHandler orientation_handler_;
    ConvexHullHandler hull_handler_;

public:
    MainApp(const OrientationHandler &orientation_handler);
    void App();
};

#endif // MAINAPP_MAINAPP_H