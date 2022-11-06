#include <iostream>
using namespace std;

int main()
{
    // Relational Operator: type-01: If-else.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is a positive number." << endl;
    }
    else if (num < 0)
    {
        cout << num << " is a negative number." << endl;
    }
    else
    {
        cout << num << " is zero" << endl;
    }

    if (num % 2 == 0)
    {
        cout << num << " is an even number" << endl;
    }
    else
    {
        cout << num << " is a odd number" << endl;
    }
    
}