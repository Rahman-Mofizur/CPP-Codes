#include <iostream>
using namespace std;

// create a Template with a class name and then pass the name to all datatype(Where you usually put int)!
template <class myNewDataType1, class myNewDataType2>
float add(myNewDataType1 x, myNewDataType2 y)
{
    return x + y;
}

int main()
{
    // Pass different type of parameter
    cout << add(15, 7.5) << endl;
    cout << add(15.5, 10) << endl;
}