#include <iostream>
using namespace std;

void displayArray(int num[], int size)
{
    cout << "The numbers you inputed are= " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }
}

int main()
{
    int n;
    cout << "How many numbers you want to add: ";
    cin >> n;
    int number[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    displayArray(number, n);
}