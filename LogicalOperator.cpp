#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 55, num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > a && num < b)
    {
        cout << "The number is larger than 0 and less than 55" << endl;
    }
}