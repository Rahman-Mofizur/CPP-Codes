#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;

    // Parameterized Constructor:
    Student(int a, float b)
    {
        id = a;
        cgpa = b;
    }
    void displayInfo()
    {
        cout << id << " " << cgpa << endl;
    }

    // Default Constructor:
    Student() // This is also an example of Constructor Overloading!
    {
        cout << "Add Student's Id and CGPA:" << endl
             << endl;
        cout << "  ID  "
             << "   CGPA" << endl;
    }
};

int main()
{
    Student object1; // Default Constructor doesn't need to be initialize(pass values).

    Student Mofiz(19401201, 3.66);
    Mofiz.displayInfo();

    Student Farzana(19401202, 3.99);
    Farzana.displayInfo();
}