#include <iostream>
using namespace std;

int main()
{
    int num1 = 5, num2 = 10, num3 = 15;
    int addition = num1 + num2;
    int subtraction = num3 - num1;
    addition += 15;
    subtraction -= num2;
    cout << addition << endl;
    cout << subtraction;
}