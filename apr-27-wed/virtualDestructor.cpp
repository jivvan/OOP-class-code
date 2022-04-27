#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << endl
             << "Constructor base class" << endl;
    }
    virtual ~Base()
    {
        cout << endl
             << "Destructor base class" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << endl
             << "Constructor derived class" << endl;
    }
    ~Derived()
    {
        cout << endl
             << "Destructor derived class" << endl;
    }
};

int main()
{
    Base *bptr = new Derived;
    delete bptr;
}