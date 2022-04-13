// conversion from primitive data type to user defined data type
#include <iostream>
using namespace std;

class Length
{
    int cm, m;

public:
    Length()
    {
        cm = m = 0;
    }
    Length(int c)
    {
        cm = c % 100;
        m = c / 100;
    }
    void takeInput(int &len)
    {
        cout << "Enter a length\n";
        cin >> len;
    }
    void Display()
    {
        cout << "Length = " << m << " meters and " << cm << " centimeters.\n";
    }
};

class Time
{
    int hour;
    int mins;

public:
    Time()
    {
        hour = 0;
        mins = 0;
    }

    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }

    void takeInput(int &dur)
    {
        cout << "Enter a time\n";
        cin >> dur;
    }

    void Display()
    {
        cout << "Time = " << hour << " hours and " << mins << " minutes.\n";
    }
};

int main()
{
    Time t1;
    Length l1;
    int dur, length;
    t1.takeInput(dur);
    l1.takeInput(length);
    t1 = dur;
    l1 = length;
    t1.Display();
    l1.Display();
    return 0;
}