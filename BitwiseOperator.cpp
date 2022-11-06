#include <iostream>
using namespace std;

int main()
{
    int a = 32, b = 12;
    int c = a & b; // Bitwise AND
    cout << "Bitwise AND of A & B= " << c << endl;
    int d = a | b;
    cout << "Bitwise OR of A | B= " << d << endl;
    int e = a ^ b;
    cout << "Bitwise X-OR of A ^ B= " << e << endl;

    int rs = a >> 2;
    cout << "Bitwise Right shift (>>) of 2 decimal= " << rs << endl;

    int ls = a << 2;
    cout << "Bitwise Left shift (<<) of 2 decimal= " << ls << endl;

    int NOT = ~b;
    cout << "Bitwise NOT(~) of A = " << NOT << endl;
}