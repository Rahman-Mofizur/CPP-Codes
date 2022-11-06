#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    while (1)
    {
        int num;
        cout << "Guess a number between 1 to 10: ";
        cin >> num;
        int RandomNumber = rand() % 9 + 1;
        if (num == RandomNumber)
        {
            cout << "Bang! You guessed it right!" << endl;
        }
        else
        {
            cout << "Oppsss! Try again!" << endl;
            cout << "The number was= " << RandomNumber << endl;
        }
    }
}