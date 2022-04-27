#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
    void sleep()
    {
        cout << "Sleeping..." << endl;
    }
    void excrete()
    {
        cout << "Excreting..." << endl;
    }
};

class Cow : public Animal
{
public:
    void moo()
    {
        cout << "Mooing..." << endl;
    }
};

class Calf : public Cow
{
public:
    void lactate()
    {
        cout << "Lactating..." << endl;
    }
};

int main()
{
    Cow c;
    c.eat();
    c.excrete();
    c.moo();
    c.sleep();
    return 0;
}