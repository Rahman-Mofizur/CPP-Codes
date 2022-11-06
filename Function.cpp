#include <iostream>
using namespace std;

void addition(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    cout << "The Summation of 2 numbers= " << sum << endl;
}

void multiplication(int x, int y)
{
    int mul;
    mul = x * y;
    cout << "Multiplication of " << x << " and " << y << " is= " << mul << endl;
}

int main()
{
    addition(5, 6, 0);
    addition(10, 15, 0);
    addition(15, 35, 50);
    multiplication(10, 4);
}