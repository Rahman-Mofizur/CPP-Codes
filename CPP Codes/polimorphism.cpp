#include <iostream>
using namespace std;

// Parent class
class Shape
{
public:
    float height, width;

    Shape(float height, float width)
    {
        this->height = height;
        this->width = width;
    }

    float displayArea()
    {
        return 0;
    }
};

// Child class- 01
class Triangle : public Shape
{
public:
    Triangle(float height, float width) : Shape(height, width) // Inheriting from Parent class
    {
        // No need to define again!
    }
    float displayArea()
    {
        return 0.5 * height * width;
    }
};

// Child class- 02
class Rectangle : public Shape
{
public:
    Rectangle(float height, float width) : Shape(height, width)
    {
        // No need to define again!
    }

    float displayArea()
    {
        return height * width;
    }
};

// Child class- 03
// Use can use only one parameter of Parent class
class Square : public Shape
{
public:
    Square(float height) : Shape(height, width) // Using only 1 parameter
    {
    }

    float displayArea()
    {
        return height * height;
    }
};

int main()
{
    Triangle tr1(10, 5);
    cout << "The area of Triangle 01 = " << tr1.displayArea() << endl;

    Rectangle rec1(10, 5);
    cout << "The area of Rectangle 01 = " << rec1.displayArea() << endl;

    Square sq1(10);
    cout << "The area of Square 01 = " << sq1.displayArea() << endl;

    // User Input
    float h1, h2;
    cout << "Enter the height of rectangle: ";
    cin >> h1;
    cout << "Enter the width of rectangle: ";
    cin >> h2;
    Rectangle rec2(h1, h2);
    cout << "The are of User Inputed Rectangle is = " << rec2.displayArea() << endl;
}