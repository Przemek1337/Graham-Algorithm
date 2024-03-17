#ifndef LIB_FILE_MANAGER_FILE_MANAGER_H
#define LIB_FILE_MANAGER_FILE_MANAGER_H
#include <fstream>
#include <string>
#include "lib\point\point.h"

class FileManager{
    public:
    FileManager() = default;
    
    void ReadInput(std::string path, std::vector<Point> &points);
};
#endif // FILE_MANAGER_FILE_MANAGER_H