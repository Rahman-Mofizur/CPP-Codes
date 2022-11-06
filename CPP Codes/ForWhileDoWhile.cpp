#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        cout << "This is " << i << endl;
    }

    int j = 100;
    while (j <= 105)
    {
        cout << "This is " << j << endl;
        j++;
    }

    int k = 1010;
    do
    {
        cout << "This is " << k << endl;
        k++;
    } while (k <= 1015);
}