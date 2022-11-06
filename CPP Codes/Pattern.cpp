#include <iostream>
using namespace std;

int main()
{
    int row, col, num, row2, col2;
    cout << "Enter a number you want pattern for: ";
    cin >> num;

    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    for (row2 = (num - 1); row2 >= 1; row2--)
    {
        for (col2 = 1; col2 <= row2; col2++)
        {
            cout << col2 << " ";
        }
        cout << endl;
    }
}