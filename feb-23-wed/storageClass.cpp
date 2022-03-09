// register storage class
#include <iostream>
using namespace std;

void registerStorageClass()
{
    cout << "Demonstrating register class\n";

    register char b = 'G';

    cout << "Value of the variable 'b' declared as register: " << b;
}

void autoStorageClass()
{
    cout << "Demonstrating auto class\n";

    // declaring auto variables, no data-type declaration needed
    auto a = 32;
    auto b = 3.2;
    auto c = "GeeksforGeeks";
    auto d = 'G';

    // printing auto variables
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}

int main()
{
    registerStorageClass();
    // autoStorageClass();
    return 0;
}
