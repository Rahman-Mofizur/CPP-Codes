#include <iostream>
using namespace std;

void addition(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "The Summation of 2 numbers= " << sum << endl;
}

void addition(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    cout << "The Summation of 3 numbers= " << sum << endl;
}

void addition(int a, int b, int c, int d)
{
    int sum;
    sum = a + b + c + d;
    cout << "The Summation of 4 numbers= " << sum << endl;
}

int main()
{
    addition(10, 40);
    addition(5, 6, 10);
    addition(10, 20, 30, 40);
}