#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex() : real(), imag(0) {}
    void input()
    {
        cout << "Enter real and imaginary parts separately: ";
        cin >> real;
        cin >> imag;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if (imag > 0)
            cout << "The result is: " << real << "+" << imag << "i" << endl;
        else
            cout << "The result is: " << real << "-" << imag << "i" << endl;
    }
};

int main()
{
    Complex complex1, complex2, result;
    cout << "Enter first complex number:\n";
    complex1.input();
    cout << "Enter second complex number:\n";
    complex2.input();
    result = complex1 + complex2;
    result.output();
    return 0;
}