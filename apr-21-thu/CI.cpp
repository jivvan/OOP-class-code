#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A(int k) : a(k){};
};

class B : public A
{
public:
    int b;
    B(int x, int y) : A(x), b(y){};
};

int main()
{
    B b(2, 3);
    cout << "A = " << b.a << " B = " << b.b << endl;
}
