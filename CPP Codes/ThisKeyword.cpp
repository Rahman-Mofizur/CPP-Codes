#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    Student(string name)
    {
        // This->name is referred to the private one.
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Student Mofiz("Mohammed Mofizur Rahman");
    cout << "Name is: " << Mofiz.getName();
}