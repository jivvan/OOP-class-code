> Why are you so shy, c'mon we are family.

## Copy constructor
The **copy constructor** in C++ is used to copy data of one object to another.

```c++ 
#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;

public:
    // initialize variables with parameterized constructor
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
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
```

## Destructors in C++
A **destructor** is a special member function that works just opposite to constructor. Unlike constructors that are used for initializing an object, destructors destroy (or delete) the object.

### Syntax of Destructor
```cpp
    ~class_name(){
        //some code
    }
```
Similar to constructor,the destructor name should exactly match the class name. A destructor declaration should always begin with **tilde(~)** symbol as shown in the syntax above. A destructor is automatically called when:
* The program finished execution.
* When scope containing local variable ends.
* When you call delete operator.

### Destructor Example
```cpp
#include <iostream>
using namespace std;

class HelloWorld
{
public:
    // construcor
    HelloWorld()
    {
        cout << "Constructor is called" << endl;
    }
    // Destructor
    ~HelloWorld()
    {
        cout << "Destructor is called" << endl;
    }
    // Member function
    void display()
    {
        cout << "Hello World!" << endl;
    }
};
int main()
{
    // object created
    HelloWorld obj;
    // Member function called
    obj.display();
    return 0;
}
```

### Destructor Rules
1. Name should begin with tilde sign(~) and must match class name.
2. It does not have any return type.
3. A constructor does not have any parameter.
4. There can be only one destructor for a class.
