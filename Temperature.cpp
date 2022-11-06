#include <iostream>
using namespace std;

int main()
{
    float cel;
    cout << "Enter the temperature in Celsius: ";
    cin >> cel;
    float fer = 1.8 * cel + 32;
    cout << "Temperature in Fehrenheit: " << fer << endl;

    float kel = cel + 273.15;
    cout << "Temperature in Kelvin: " << kel << endl;

    return 0;
}