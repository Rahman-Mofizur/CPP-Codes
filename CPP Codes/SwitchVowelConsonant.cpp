#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
        cout << ch << " is a Vowel" << endl;
        break;
    case 'e':
        cout << ch << " is a Vowel" << endl;
        break;
    case 'i':
        cout << ch << " is a Vowel" << endl;
        break;
    case 'o':
        cout << ch << " is a Vowel" << endl;
        break;
    case 'u':
        cout << ch << " is a Vowel" << endl;
        break;
    default:
        cout << ch << " is a Consonant!" << endl;
    }
}