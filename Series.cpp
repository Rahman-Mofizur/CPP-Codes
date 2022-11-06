#include <iostream>
using namespace std;

int main()
{
    // Series: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + .......... + n^2 = ??

    int i, num, sum = 0;
    cout << "Enter a number between 1 to 100: ";
    cin >> num;

    if (num > 0 && num <= 100)
    {
        for (i = 1; i <= num; i++)
        {
            sum = sum + (i * i);
        }
        cout << "The summation is= " << sum << endl;
    }
    else
    {
        cout << "You have entered a wrong number!";
    }
}