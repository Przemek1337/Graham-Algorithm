#include "lib\orientation_handler\orientation_handler.h"
// Funkcja oblicza orientację trzech punktów (point_a, point_b, point_c) i określa, 
// czy tworzą one zakręt w lewo, są współliniowe, czy tworzą zakręt w prawo.
Direction OrientationHandler::Orientation(Point &point_a, Point &point_b, Point &point_c) {
    // Obliczenie wyznacznika (tutaj nazywanego 'area' choć to nie jest dosłownie pole powierzchni),
    // który jest używany do określenia wzajemnego położenia punktów.
    // Jest to równoważne dwa razy polu trójkąta utworzonego przez te trzy punkty.
    double area = (point_b.getY() - point_a.getY()) * (point_c.getX() - point_b.getX()) - (point_b.getX() - point_a.getX()) * (point_c.getY() - point_b.getY());
    
    if (area == 0) return Direction::None; // Zwraca None (czyli wartość [int 1 = None] korzystająć z direction.h enum'a-estetyka), oznaczając, że punkty są współliniowe.
    return (area > 0) ? Direction::Left : Direction::Right; // Jeśli wyznacznik jest dodatni, oznacza to, że trójkąt jest zorientowany przeciwnie do ruchu wskazówek zegara (zakręt w lewo).
    // W przeciwnym przypadku (wyznacznik ujemny) - zakręt w prawo.
}