#include <iostream>
using namespace std;

class A
{
private:
    string id = "19-40120-1";
    string name = "Mohammed Mofizur Rahman";

public:
    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "ID= " << obj.id << endl
             << "Name= " << obj.name << endl;
    }
};

int main()
{
    A obj1;
    B Mofiz;
    Mofiz.display(obj1);
}