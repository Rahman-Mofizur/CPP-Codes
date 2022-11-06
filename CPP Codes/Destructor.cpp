#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;

    Student(int a, float b)
    {
        id = a;
        cgpa = b;
    }
    void displayInfo()
    {
        cout << id << " " << cgpa << endl;
    }

    Student()
    {
        cout << "Enter Student's ID and CCGPA: " << endl;
    }

    ~Student()
    {
        cout << "Destructor is called!" << endl;
    }
};

int main()
{
    Student object1;

    Student Mofiz(120, 3.66);
    Mofiz.displayInfo();

    Student Tasnim(121, 3.88);
    Tasnim.displayInfo();

    Student Farzana(122, 3.99);
    Farzana.displayInfo();

    Student Abdullah(123, 3.88);
    Abdullah.displayInfo();
}