#include <iostream>
using namespace std;

class Example
{
private:
    int val;

public:
    // function declarations
    void init_val(int v);
    void print_val();
};

void Example::init_val(int v)
{
    val = v;
}

void Example::print_val()
{
    cout << "val: " << val << endl;
}

int main()
{
    // create object
    Example ex;
    ex.init_val(100);
    ex.print_val();
    return 0;
}