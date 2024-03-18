## Solution Documentation - Convex Hull Calculation
Introduction
This document describes the implementation of an algorithm for calculating the convex hull of a set of points in two-dimensional space. The solution is implemented in the C++ programming language and utilizes the language's standard library.

# How It Works
The program uses a type of Graham Scan algorithm to compute the convex hull. The basic steps of the algorithm implemented in the ConvexHullHandler class are as follows:

Sorting Points: Initially, the points are sorted in ascending order first by y-coordinate and then by x-coordinate. This sorting is crucial for the correct operation of the main part of the algorithm.

Constructing the Hull: The algorithm processes the sorted points, building first the lower and then the upper part of the hull. For each point, its orientation relative to the last two points in the current hull is checked. If a point does not maintain convexity, it is removed from the hull.

Printing the Hull: After the calculations are complete, the convex hull can be printed to the standard output using the PrintHull method.

# Technologies Used
The program is implemented in C++ using the following elements and technologies:

C++ Standard Library (STL): Use of containers such as std::vector and sorting algorithms.
Object-Oriented Programming: Application of classes and methods to structure the code and represent concepts like a point (Point) and orientation handling (OrientationHandler).
Lambda Functions: Use of anonymous functions for concise specification of the point sorting criterion.
# Conclusion
The implementation of the convex hull algorithm in C++ serves as a practical application of geometric algorithms. The code is organized in an object-oriented manner, which facilitates understanding the program's structure and its potential further expansion.


