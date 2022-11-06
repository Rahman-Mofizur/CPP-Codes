#include <iostream>
using namespace std;

int addition(int a = 5, int b = 10)
{
    int sum = a + b;
    cout << sum << endl;
}

int main()
{
    addition();
    addition(50);
    addition(100, 400);
}