#include "lib\point\point.h"
// Przeciążenie operatora >, które umożliwia porównywanie dwóch punktów.
// Porównanie jest przeprowadzane najpierw na podstawie współrzędnej y, a następnie x.
bool Point::operator>(const Point& second_point) const{
    // Jeśli współrzędna y pierwszego punktu jest mniejsza niż drugiego, pierwszy punkt jest "większy" w kontekście sortowania dla poprawnego działania algorytmu.
    if (this->y_coordinate < second_point.y_coordinate){
        return true;
    }
    // Jeśli współrzędna y pierwszego punktu jest większa niż drugiego, pierwszy punkt nie jest "większy".
    if (this->y_coordinate > second_point.y_coordinate) {
        return false;
    }
    else {
        // Jeśli współrzędne y są równe, porównywane są współrzędne x.
        // Pierwszy punkt jest "większy" tylko, jeśli jego współrzędna x jest mniejsza niż x drugiego punktu.
        return this->x_coordinate < second_point.x_coordinate;
    }
}
//  Wyświetlanie współrzędnych punktu na standardowym wyjściu.
void Point::PrintPointCoordinates()const{
    std::cout << "(" << x_coordinate << ", " << y_coordinate << ")" << std::endl;
}
// Konstruktor, który inicjalizuje punkt używając podanych współrzędnych x i y.
Point::Point(double x, double y){
    x_coordinate = x;
    y_coordinate = y;
}