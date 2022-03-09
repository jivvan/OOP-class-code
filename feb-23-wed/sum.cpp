#include <iostream>
#include <cmath>
int main()
{
    int a = 54328764;
    int sum = 0;
    int len = log10(a) + 1;
    for (int i = 0; i < len; i++)
    {
        int t = a % 10;
        sum = sum + t;
        a = a / 10;
    }
    std::cout << "THe sum is: " << sum << std::endl;
    return 0;
}