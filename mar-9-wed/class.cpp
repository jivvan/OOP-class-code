/* create a class and perform the following operations:
1. Addition
2. Subtraction
3. Multiplication
4. Division
*/

#include <iostream>
using namespace std;

class Operation
{
public:
    int a, b;
    int add(int a, int b)
    {
        return a + b;
    }
    int subtract(int a, int b)
    {
        return a - b;
    }
    int multiply(int a, int b)
    {
        return a * b;
    }
    double divide(int a, int b)
    {
        return (double)a / b;
    }
};

int main()
{
    Operation op;
    cout << "Enter two integers: \n";
    cin >> op.a >> op.b;
    int sum = op.add(op.a, op.b);
    int diff = op.subtract(op.a, op.b);
    int mul = op.multiply(op.a, op.b);
    double div = op.divide(op.a, op.b);
    cout << "Sum: " << sum << endl
         << "Difference: " << diff << endl
         << "Product: " << mul << endl
         << "Division: " << div << endl;
    return 0;
}