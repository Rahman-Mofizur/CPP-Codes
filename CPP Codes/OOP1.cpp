#include <iostream>
using namespace std;

class Student
{
public: // Access Modifiers: Private, Protected, Internal, Public
    int id;
    float cgpa;
};

int main()
{
    Student Mofiz;
    Student Abdullah;

    Mofiz.id = 19401201;
    Mofiz.cgpa = 3.66;

    Abdullah.id = 19401202;
    Abdullah.cgpa = 3.88;

    cout << "Id of Mofiz= " << Mofiz.id << endl
         << "CGPA of Mofiz= " << Mofiz.cgpa << endl;

    cout << "Id of Abdullah= " << Abdullah.id << endl
         << "CGPA of Abdullah= " << Abdullah.cgpa << endl;
}