#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;

    // A special type of function that is used to initialize the object.
    // Constructor name should be the class name itself such as: class Student, Student(int a, float b).

    // Benefits of using a Constructor:
    // Constructor have NO return type, not even void.
    // Through Constructor, you can initialize the value of an object withe out calling the constructor function!

    // Types of Constructor:
    //  1. Default Constructor
    //  2. Parameterized Constructor

    // An example of PARAMETERIZED Constructor is shown below:
    Student(int a, float b)
    {
        id = a;
        cgpa = b;
    }
    void displayInfo()
    {
        cout << " " << id << " " << cgpa << endl;
    }
};

int main()
{
    Student Mofiz(19401201, 3.66);
    Mofiz.displayInfo();

    Student Farzana(19401202, 3.99);
    Farzana.displayInfo();
}