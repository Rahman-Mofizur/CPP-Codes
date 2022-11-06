#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << "This is " << i << endl;
    }

    for (j = 101; j <= 110; j++)
    {
        if (j == 105)
        {
            continue;
        }
        cout << "This is " << j << endl;
    }
}