#include <iostream>
using namespace std;

class Demo
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    void sum(Demo obj1, Demo obj2)
    {
        a = obj1.a + obj2.a;
    }
    void print()
    {
        cout << "value of A: " << a << endl;
    }
};

int main()
{
    // object declarations
    Demo d1, d2, d3;

    // assigning values to data member of objects
    d1.set(10);
    d2.set(20);
    // passing object d1 and d2 to sum method of d3
    d3.sum(d1, d2);
    // printing the values
    d1.print();
    d2.print();
    d3.print();

    return 0;
}