

#include "lib/mainapp/mainapp.h"
#include <string>

MainApp::MainApp(const OrientationHandler &orientation_handler)
    : orientation_handler_(orientation_handler),
      hull_handler_(/* necessary initialization arguments */)
{
}

void MainApp::App()
{
    std::string path;
    bool is_app_running = true;
    char user_input = 'a';

    while (is_app_running)
    {
        std::cout << "Enter an absolute path(Example: C:/Users/user/Desktop/project/src/load_data.txt) " << std::endl;
        std::cout << "-> ";
        std::cin >> path;
        file_manager_.ReadInput(path, points_);
        hull_handler_.ConvexHull(points_);
        hull_handler_.PrintHull();
        std::cout << std::endl
                  << "Press E to exit. If you press another button you will continue checking new points" << std::endl
                  << "Your choice: ";
        std::cin >> user_input;
        if (user_input == 'E')
        {
            is_app_running = false;
            system("cls");
        }
    }
}
