#include <iostream> // Used for input-output stream.
#include <fstream>  // Used for file stream.
#include <string.h> // Optional for using C String.
#include <stdio.h>  // For using C library Function.
using namespace std;

int main()
{
    char name[35];
    string id, cgpa, dob, BloodGroup;

    // Read & Open file by ofstream
    ofstream file; // Output File Stream

    // file.open(): Creates and Open the file,
    // ios::out | ios::app - Gives you flexibility for using the file over and over again
    file.open("NewFile1.txt", ios::out | ios::app);

    cout << "Enter your name: ";
    gets(name); // C Library Function
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your current CGPA: ";
    cin >> cgpa;
    cout << "Enter your date of birth: ";
    cin >> dob;
    cout << "Enter your blood group: ";
    cin >> BloodGroup;

    file << "Welcome! " << name << endl
         << "Your ID is " << id << ", your current cgpa is " << cgpa << ", your date of birth is " << dob << ", and your blood group is " << BloodGroup << endl;

    // File Closing is important!
    file.close();
}