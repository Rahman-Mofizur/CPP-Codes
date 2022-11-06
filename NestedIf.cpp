#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    if (mark >= 0 && mark <= 100)
    {
        if (mark >= 33 && mark <= 100)
        {
            if (mark >= 80)
            {
                cout << "You have got 'A+'" << endl;
            }
            else if (mark >= 70)
            {
                cout << "You have got 'B+'" << endl;
            }
            else if (mark >= 60)
            {
                cout << "You have got 'C+'" << endl;
            }
            else if (mark >= 50)
            {
                cout << "You have got 'D+'" << endl;
            }
            else
            {
                cout << "You have got 'D'" << endl;
            }
        }
        else
        {
            cout << "Sorry! You have Failed!" << endl;
        }
    }
    else
    {
        cout << "You have entered an invalid number!" << endl;
    }
}