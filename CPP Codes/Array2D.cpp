#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row number: ";
    cin >> row;
    cout << "Enter the col number: ";
    cin >> col;
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The Matrix is = " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}