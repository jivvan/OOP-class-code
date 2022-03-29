> They will destroy me.

## Object as an argument in C++
As we know that, we can pass any type of arguments within the member function and there are any number of arguments.

In C++ programming language, we can also pass an object as an argument within the member of function of class.

This is useful when we want to initialize all data members of an object with another object.

```c++
#include <iostream>
using namespace std;

class Demo
{
private:
    int a;

public:
    void set(int x)
    {
        a = x;
    }
    void sum(Demo obj1, Demo obj2)
    {
        a = obj1.a + obj2.a;
    }
    void print()
    {
        cout << "value of A: " << a << endl;
    }
};

int main()
{
    // object declarations
    Demo d1, d2, d3;

    // assigning values to data member of objects
    d1.set(10);
    d2.set(20);
    // passing object d1 and d2 to sum method of d3
    d3.sum(d1, d2);
    // printing the values
    d1.print();
    d2.print();
    d3.print();

    return 0;
}
```

Another example could be:
```C++
#include <iostream>
using namespace std;

class Example
{
public:
    int a;

    // this function will take an object as an argument
    void add(Example E)
    {
        a = a + E.a;
    }
};

// Driver code
int main()
{
    // create objects
    Example E1, E2;

    // values are initialized for both objects
    E1.a = 50;
    E2.a = 100;

    cout << "Initial values\n";
    cout << "Value of object 1:" << E1.a << endl
         << "Value of object 2:" << E2.a;
    // passing object as an argument to add function
    E2.add(E1);
    // changed values after calling add function
    cout << "Final values\n";
    cout << "Value of object 1:" << E1.a << endl
         << "Value of object 2:" << E2.a;

    return 0;
}
```

## Returning Object from function
A function can also return objects either by value of by reference. When an object is returned by value froma a function, a temporary object is created within the function, which holds the return value. This value is further assigned to another object in the calling function. 
The syntax for defining a funciton that returns an object by value is:
```C++
    class_name function_name(parameter_list){
        //body of function
    }
```

To understand the concept of returning an object by value from a function, consider this example.

Example: A program to demonstrate the concept of returning objects from a function

```C++
#include <iostream>
using namespace std;

class Student
{
public:
    double marks1, marks2;
};

Student createStudent()
{
    Student student;
    // initialize member variables of student
    student.marks1 = 96.5;
    student.marks2 = 75.0;
    return student;
}

int main()
{
    Student student1;

    // call function
    student1 = createStudent();
    // print member variables of student
    cout << "Marks 1 = " << student1.marks1 << endl;
    cout << "Marks 2 = " << student1.marks2 << endl;
    return 0;
}
```