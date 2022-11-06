#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 12345;
    const int id = 19401201;
    a = 10;
    // id=555;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Conatant variable id = " << id << endl;
}