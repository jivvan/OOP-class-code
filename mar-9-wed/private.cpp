/*
using private variables
*/

#include <iostream>
using namespace std;

class Cuboid
{
private:
    double length;
    double breadth;
    double height;

public:
    Cuboid(double l, double b, double h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Cuboid *c = new Cuboid(5, 6, 6);
    double area = c->calculateArea();
    double volume = c->calculateVolume();
    cout << "Area= " << area << endl
         << "Volume= " << volume << endl;
    return 0;
}