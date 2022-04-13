#include <iostream>
using namespace std;

class Count
{
public:
    int value;

    Count() : value(5) {}
    Count operator++()
    {
        Count temp;
        temp.value = ++value;
        return temp;
    }
    Count operator++(int)
    {
        Count temp;
        temp.value = value++;
        return temp;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1;
    count1.display();
    cout << (++count1).value << endl;
    cout << (count1++).value << endl;
    return 0;
}