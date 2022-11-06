#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char name[40];
    cout << "Enter your name: ";
    gets(name); // Get String Function = gets(); Must use header file: include<stdio.h>

    cout << "Welcome " << name << "!!!" << endl;
}