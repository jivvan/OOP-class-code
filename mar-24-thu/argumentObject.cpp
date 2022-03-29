#include <iostream>
using namespace std;

class Example
{
public:
    int a;

    // this function will take an object as an argument
    void add(Example E)
    {
        a = a + E.a;
    }
};

// Driver code
int main()
{
    // create objects
    Example E1, E2;

    // values are initialized for both objects
    E1.a = 50;
    E2.a = 100;

    cout << "Initial values\n";
    cout << "Value of object 1:" << E1.a << endl
         << "Value of object 2:" << E2.a;
    // passing object as an argument to add function
    E2.add(E1);
    // changed values after calling add function
    cout << "Final values\n";
    cout << "Value of object 1:" << E1.a << endl
         << "Value of object 2:" << E2.a;

    return 0;
}