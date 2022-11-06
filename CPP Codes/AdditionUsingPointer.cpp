#include <iostream>
using namespace std;

int main()
{
    int num1, num2, *p, *q, sum = 0;
    p = &num1;
    q = &num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    sum = *p + *q;
    cout << "The summation of 2 numbers are= " << sum << endl;
}