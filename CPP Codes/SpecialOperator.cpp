#include <iostream>
using namespace std;

int main()
{
    // Speecial Operators: Comma, Pointer*, Sizeof() function.
    int a = 5;
    float b = 77.9876;
    double c = 4.569328;
    char ch = 'M';
    char Name[35] = "Mohammed Mofizur Rahman";

    int s = sizeof(Name);
    cout << s << endl;

    int x, y, sum;
    sum = (x = 5, y = 10, sum = x + y);
    cout << sum;
}