// conversion from user defined data type to primitive data type
#include <iostream>
using namespace std;

class Time
{
    int hrs, mins;

public:
    Time(int, int);
    operator int();
    ~Time()
    {
        cout << "Destrcutor is called\n";
    }
};

Time::Time(int a, int b)
{
    hrs = a;
    mins = b;
}

Time::operator int()
{
    cout << "Conversion of class type to primitive type" << endl;
    return hrs * 60 + mins;
}

int main()
{
    Time t(2, 20);
    int duration = t;
    cout << "Duration is: " << duration << endl;
}