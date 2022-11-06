#include <iostream>
using namespace std;

// Encapsulation means creating variables and functions within a class just like a capsule.
class Student
{
private:
    string name;
    string id;

public:
    void setName(string x, string i)
    {
        name = x;
        id = i;
    }

    void getName()
    {
        cout << "Name = " << name << endl;
        cout << "Id = " << id << endl;
    }
};

int main()
{
    Student Mofiz;
    Mofiz.setName("Mohammed Mofizur Rahman", "19-40120-1");
    Mofiz.getName();

    Student Munzarin;
    Munzarin.setName("Munzarin Shahid", "19-40654-2");
    Munzarin.getName();
}