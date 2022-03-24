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
#include<iostream>
using namespace std;
class Weight{
    int kilogram;
    int gram;
    public:
    void getdata();
    void putdata();
    void sum_weight(Weight,Weight);
    Weight sum_weight(Weight);
};

void Weight::getdata(){
    cout<<kilogram<<" kgs. and "<<gram<<" gms.";
}

void Weight::putdata(){
    cout<<"Enter kilogram"<<endl;
    cin>>kilogram;
        cout<<"Enter gram"<<endl;
    cin>>gram;
}
```