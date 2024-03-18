#include "lib\mainapp\mainapp.h"

void main() {
    OrientationHandler orientation_handler;
    MainApp app(orientation_handler);

    app.App();
}
