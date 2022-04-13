#include <iostream>
using namespace std;

class Test
{
private:
    int num;

public:
    Test() : num(8) {}
    void operator++()
    {
        num = num + 2;
    }
    void Print()
    {
        cout << "The count is: " << num << endl;
    }
};

int main()
{
    Test tt;
    tt.Print();
    ++tt;
    tt.Print();
    return 0;
}