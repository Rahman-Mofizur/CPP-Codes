#include <iostream>
using namespace std;

void displayArray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i << " is= " << num[i] << endl;
    }
}

int main()
{
    int number[5] = {10, 20, 30, 40, 50};
    displayArray(number, 5);
}