#include <iostream>
using namespace std;

int a = 1050; // Global variable

int main()
{
    int a = 55; // Local Variable
    cout << "Printing Local variable= " << a << endl;
    cout << "Printing Global Variable= " << ::a << endl;
}