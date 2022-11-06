#include <iostream>
#include <fstream> // Used for file stream.
#include <string.h>
using namespace std;

int main()
{
    string line; // For getting the line

    ifstream file("NewFile1.txt"); // Read the file
    while (getline(file, line))    // Getline() gets a single line from file and puts into line variable. And while loop will work till the end of the line!
    {
        cout << line << endl;
    }
}