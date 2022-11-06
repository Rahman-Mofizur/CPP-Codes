#include <iostream>
using namespace std;

int main()
{
    // Pointer is important to manipulate the data in the computer's memory.
    // We can use/handle the memory address of a computer.
    // However, pointers must be handled with care, since it is possible to damage data stored in other memory addresses.
    int a = 5;
    int *p; // Pointer stores the value. That's why *P = Value.
    p = &a; // The variable of pointer stores the address. That's why P = Address
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
}