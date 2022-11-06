#include <iostream>
using namespace std;

// create a Template with a class name and then pass the name to all datatype(Where you usually put int)!
template <class myTemplate>
myTemplate add(myTemplate x, myTemplate y)
{
    return x + y;
}

int main()
{
    // Problem: You can not use different typed parameter- such as (5.5, 7)
    // Go to FunctionTemplate2.cpp to see the solution!
    cout << add(5, 6) << endl;
    cout << add(5.5, 7.3) << endl;
    cout << add(5.5, 0.7) << endl;
    cout << add(5.5, 7.0) << endl;
}