#include <iostream>
using namespace std;

int main()
{
    while (int i = 1)
    {
        try
        {
            float num1, num2;
            cout << "Enter 2 number: ";
            cin >> num1 >> num2;
            if (num2 == 0)
            {
                throw 0; // You can throw any number! and it will go out of try and go to catch function.
            }
            float division = num1 / num2;
            cout << "Division is= " << division << endl;
        }
        catch (int x)
        {
            cout << "Divide by Zero is not possible!" << endl
                 << "Please try again." << endl;
        }
    }
}