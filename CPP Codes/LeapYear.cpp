#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a Year: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is a Leap Year!" << endl;
    }
    else if (year % 400 == 0)
    {
        cout << year << " is a Leap Year!" << endl;
    }
    else
    {
        cout << year << " is not a Leap Year!" << endl;
    }
}