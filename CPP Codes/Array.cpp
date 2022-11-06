#include <iostream>
using namespace std;

int main()
{
    int n, TotalMarks = 0, avgMarks; // You can declare marks[100] here, But the efficient way of declaring is shown below!
    cout << "Enter how many subject you want to add: ";
    cin >> n;

    int marks[n];
    cout << "Enter the marks: ";

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << "marks[" << j << "] = " << marks[j] << endl;
        TotalMarks = TotalMarks + marks[j];
    }
    cout << "Total Marks = " << TotalMarks << endl;

    avgMarks = TotalMarks / n;
    cout << "Average Mark = " << avgMarks << endl;
}