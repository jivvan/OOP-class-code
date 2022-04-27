#include <iostream>
using namespace std;

class B;
class A
{
private:
    int x;

public:
    void setData(int j)
    {
        x = j;
    }
    friend void min(A, B);
};

class B
{
private:
    int y;

public:
    void setData(int i)
    {
        y = i;
    }
    friend void min(A, B);
};

void min(A a, B b)
{
    if (a.x > b.y)
    {
        cout << a.x << " is greater";
    }
    else if (b.y > a.x)
    {
        cout << b.y << " is greater";
    }
    else
    {
        cout << "Both are equal";
    }
}

int main()
{
    A a;
    B b;
    a.setData(5);
    b.setData(5);
    min(a, b);
    return 0;
}