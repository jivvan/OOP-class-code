#include <iostream>
using namespace std;

class Square
{
private:
    int a;

public:
    Square(int x) : a(x){};
    friend void display(Square);
};

void display(Square s)
{
    cout << "The square is: " << s.a * s.a << endl;
}

int main()
{
    Square s(6);
    display(s);
    return 0;
}