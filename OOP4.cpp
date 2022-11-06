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
    int x;
    float y;
    Student Mofiz;
    Student Abdullah;
    cout << "Add a student: " << endl
         << "What is the id? ";
    cin >> x;
    cout << "Write cgpa: ";
    cin >> y;
    Mofiz.setValue(x, y);

    Mofiz.displayInfo();
}