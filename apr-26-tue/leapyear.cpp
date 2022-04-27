#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year:";
    cin >> year;
    if (year / 4 == 0 && year % 100 == 0 || year % 400 == 0)
    {
        cout << "The year is leap year." << endl;
    }
    else
    {
        cout << "The year is not leap year." << endl;
    }
}