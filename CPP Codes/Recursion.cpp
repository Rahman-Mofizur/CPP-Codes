#include <iostream>
using namespace std;

// Recursion- A function that calls itself until your program achieves the desired result.
// Recusrion uses the power of parameter.
int factorial(int a)
{
    if (a == 1)
    {
        return a;
    }
    else
    {
        return a * factorial(a - 1); // Lessening the value of parameter of the function.
    }
}

int main()
{
    cout << "The factorial of 4 is= " << factorial(4) << endl;
    cout << "The factorial of 5 is= " << factorial(5) << endl;
    cout << "The factorial of 6 is= " << factorial(6) << endl;
}