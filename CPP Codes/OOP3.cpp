#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;
    void setValue(int x, float y)
    {
        id = x;
        cgpa = y;
    }
    void displayInfo()
    {
        cout << id << " " << cgpa << endl;
    }
};

int main()
{
    Student Mofiz;
    Student Abdullah;

    Mofiz.setValue(19401201, 3.66);
    Abdullah.setValue(19401202, 3.88);

    Mofiz.displayInfo();
    Abdullah.displayInfo();
}