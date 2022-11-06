#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    int a = n;
    for (int i = 0; i < n; i++)
    {
        fact = fact * a;
        a = a - 1;
    }
    cout << "The factorial is=  " << fact;
}

int main()
{
    factorial(4);
}