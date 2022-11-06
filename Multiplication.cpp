#include <iostream>
using namespace std;

int main()
{
    int i = 1, p, mul;
    cout << "Enter the digit of Mulplication: ";
    cin >> p;

    for (i = 1; i <= 10; i++)
    {
        mul = p * i;
        cout << "5 * " << i << " = " << mul << endl;
    }
}