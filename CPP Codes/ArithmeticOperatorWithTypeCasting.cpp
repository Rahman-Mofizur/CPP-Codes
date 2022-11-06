#include <iostream>
using namespace std;

int main()
{
    int num1 = 10, num2 = 3;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float dividation = num1 / (float)num2; // Type Casting
    int remainder = num1 % num2;

    cout << addition << endl
         << subtraction << endl
         << multiplication << endl
         << dividation << endl
         << remainder << endl;
}