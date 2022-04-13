#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    // constructor to initialize count to 5
    Count() : value(5) {}

    // overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }
    friend ostream &operator<<(ostream &os, const Count &ct);
};

ostream &operator<<(ostream &os, const Count &ct)
{
    os << ct.value;
    return os;
}

int main()
{
    Count count1;

    ++count1;

    cout << count1;
}