#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;

public:
    // initialize variables with parameterized constructor
    Wall(double length, double height)
    {
        this->length = length;
        this->height = height;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // copy contents of wall1 to wall2
    Wall wall2 = wall1;

    // print areas of wall1 and wall2
    cout << "Area of wall 1:" << wall1.calculateArea() << endl;
    cout << "Area of wall 2:" << wall2.calculateArea() << endl;
    return 0;
}