### Dokumentacja Rozwiązania - Obliczanie Otoczki Wypukłej
## Wprowadzenie
Niniejszy dokument opisuje implementację algorytmu obliczania otoczki wypukłej dla zbioru punktów w przestrzeni dwuwymiarowej. Rozwiązanie jest zaimplementowane w języku programowania C++ i wykorzystuje standardową bibliotekę tego języka, jako kompilator został zastosowany Bazel, dodatkowo napisałem proste testy, które testują dane funkcjonalności dla wybranych zestawów danych.

## Sposób Działania
Program korzysta z algorytmu typu Graham Scan do obliczania otoczki wypukłej. Podstawowe kroki algorytmu zostały zaimplementowane w klasie ConvexHullHandler i wyglądają następująco:

Sortowanie punktów: Początkowo punkty są sortowane rosnąco najpierw względem współrzędnej y, a następnie x. Sortowanie to jest niezbędne do poprawnego działania głównej części algorytmu.

Budowa otoczki: Algorytm przetwarza posortowane punkty, budując najpierw dolną, a potem górną część otoczki. Dla każdego punktu sprawdzana jest jego orientacja względem dwóch ostatnich punktów w aktualnej otoczce. Jeśli punkt nie utrzymuje wypukłości, jest usuwany z otoczki.

Wypisanie otoczki: Po zakończeniu obliczeń, otoczka wypukła może być wypisana na standardowe wyjście przy pomocy metody PrintHull.

## Zastosowane Technologie
Program został zaimplementowany w języku C++ z wykorzystaniem następujących elementów i technologii:

Standardowa biblioteka C++ (STL): wykorzystanie kontenerów takich jak std::vector i algorytmów sortowania.
Obiektowość: zastosowanie klas i metod do strukturyzacji kodu i reprezentacji koncepcji, takich jak punkt (Point) i obsługa orientacji (OrientationHandler).
Lambda funkcje: użycie anonimowych funkcji w celu zwięzłego zapisu kryterium sortowania punktów.
Zakończenie
Implementacja algorytmu otoczki wypukłej w C++ stanowi praktyczne zastosowanie algorytmów geometrycznych. Kod jest zorganizowany obiektowo, co ułatwia zrozumienie struktury programu i jego ewentualną dalszą rozbudowę.
