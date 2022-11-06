#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Tolower() fuction converts a capital letter to a Small letter. If the letter is already in Small letter then do not convert.
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is a Vowel.";
    }
    else
    {
        cout << ch << " is a Consonant.";
    }
}