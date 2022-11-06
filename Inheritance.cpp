#include <iostream>
using namespace std;

// Parent / Base / Super class
class Person
{
public:
    string name;
    string id;
    float cgpa;
    void displayInfo()
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "CGPA: " << cgpa << endl;
    }
};

// Chlid / Derived / Sub class
class Student : public Person
{
public:
    string Dob;
    void displayInfo2() // Inherits all the properties of Parent class.
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "CGPA: " << cgpa << endl
             << "Date of Birth: " << Dob << endl
             << endl;
    }
};

int main()
{
    Student Mofiz;
    Mofiz.name = "Mohammed Mofizur Rahman";
    Mofiz.id = "19-40120-1";
    Mofiz.cgpa = 3.66;
    Mofiz.Dob = "10-Feb-2000";
    Mofiz.displayInfo2();
}