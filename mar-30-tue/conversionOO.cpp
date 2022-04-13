#include <iostream>
using namespace std;

class Fraction
{
private:
    const int num, den;

public:
    Fraction(int n = 0, int d = 0) : num(n), den(d)
    {
    }
    operator float() const
    {
        return float(num) / float(den);
    }
};

int main()
{
    Fraction f(2, 5);
    float val = f;
    cout << val << endl;
    return 0;
}