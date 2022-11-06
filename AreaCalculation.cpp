#include <iostream>
using namespace std;

int main()
{
    // Triangle Area
    int base = 10, height = 5;
    int TriangleArea = (float)1 / 2 * base * height;
    int TriangleArea2 = 0.5 * base * height;
    cout << TriangleArea << endl;
    cout << TriangleArea2 << endl;

    // Trapezium Area
    int a = 5, b = 8, h = 6;
    int Trapezium = (float)1 / 2 * (a + b) * h;
    cout << Trapezium << endl;

    // Ellipse Area
    int a2 = 40, b2 = 60;
    float pi = 3.1416;
    float Ellipse = pi * a2 * b2;
    cout << Ellipse << endl;

    // Sector of a Circle Area
    int radius = 5;
    float tetha = 30;
    float sector = (float)1 / 2 * (radius * radius) * tetha;
    cout << sector;
}