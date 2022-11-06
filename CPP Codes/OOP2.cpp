#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;
    void displayInfo()
    {
        cout << id << " " << cgpa << endl;
    }
};

int main()
{
    Student Mofiz;
    Student Abdullah;

    Mofiz.id = 19401201;
    Mofiz.cgpa = 3.66;
    Mofiz.displayInfo();

    Abdullah.id = 19401202;
    Abdullah.cgpa = 3.88;
    Abdullah.displayInfo();
}