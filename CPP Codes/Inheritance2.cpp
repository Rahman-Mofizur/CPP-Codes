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

// Child Class
class Student : public Person
{
private:
    string Dob;

public:
    void setName(string Dob)
    {
        this->Dob = Dob;
    }
    void displayInfo() // Function Overriding
    {
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "CGPA: " << cgpa << endl
             << "Data of Birth: " << Dob << endl;
    }
};

int main()
{
    Student Mofiz;
    Mofiz.name = "Mohammed Mofizur Rahman";
    Mofiz.id = "19-40120-1";
    Mofiz.cgpa = 3.66;
    Mofiz.setName("10-Feb-2000"); // Setting the private property of Parent class.
    Mofiz.displayInfo();          // Function Overriding Calling

    cout << endl;

    Student Esha;
    Esha.name = "Esha Rahman";
    Esha.id = "24-45001-2";
    Esha.cgpa = 3.88;
    Esha.setName("10-Feb-2005"); // Setting the private property of Parent class.
    Esha.displayInfo();          // Function Overriding Calling

    cout << endl;
}