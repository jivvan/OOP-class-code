#include <iostream>
using namespace std;

class HelloWorld
{
public:
    // construcor
    HelloWorld()
    {
        cout << "Constructor is called" << endl;
    }
    // Destructor
    ~HelloWorld()
    {
        cout << "Destructor is called" << endl;
    }
    // Member function
    void display()
    {
        cout << "Hello World!" << endl;
    }
};
int main()
{
    // object created
    HelloWorld obj;
    // Member function called
    obj.display();
    return 0;
}