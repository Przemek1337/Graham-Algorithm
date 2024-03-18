#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <fstream>
#include "lib\file_manager\file_manager.h"  
#include "lib\point\point.h"         

using ::testing::AtLeast; 


class FileManagerTest : public ::testing::Test {
protected:
    std::string testFilePath = "test_data.txt";

    void SetUp() override {
        
        std::ofstream out(testFilePath);
        out << "3\n";
        out << "1.0 1.0\n";
        out << "2.0 2.0\n";
        out << "3.0 3.0\n";
        out.close();
    }

    void TearDown() override {
        
        remove(testFilePath.c_str());
    }
};

TEST_F(FileManagerTest, ReadsCorrectNumberOfPoints) {
    FileManager fileManager;
    std::vector<Point> points;
    fileManager.ReadInput(testFilePath, points);

    EXPECT_EQ(points.size(), 3);
}

TEST_F(FileManagerTest, ReadsPointDataCorrectly) {
    FileManager fileManager;
    std::vector<Point> points;
    fileManager.ReadInput(testFilePath, points);

    EXPECT_DOUBLE_EQ(points[0].getX(), 1.0);
    EXPECT_DOUBLE_EQ(points[0].getY(), 1.0);
    EXPECT_DOUBLE_EQ(points[1].getX(), 2.0);
    EXPECT_DOUBLE_EQ(points[1].getY(), 2.0);
    EXPECT_DOUBLE_EQ(points[2].getX(), 3.0);
    EXPECT_DOUBLE_EQ(points[2].getY(), 3.0);
}