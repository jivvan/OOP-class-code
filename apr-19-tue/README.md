# Chapter 5 - Inheritance

## C++ Inheritance
In C++, inheritance is a process in which one object acquies all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are dfined in other class.

In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class.

## Advantages of C++ Inheritance
- Code reusability: Now you can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.

## Types of Inheritance
C++ supports five types of inheritance:
- Single inheritance
- Multiple inheritance (only supported by C++)
- Hierarchical inheritace
- Multilevel inheritance
- Hybrid inheritance

## Derived class
A derived class is defined as the class derived from the base class. The syntax of derived class:

```C++
class derived_class_name : visibility_mode base_class_name{
    //body of derived class
}
```

## C++ single level inheritance
When one class inherits another class. Example:
```C++
#include<iostream>
using namespace std;
class Account{
    public: 
    float salary = 60000;
};
class Programmer:public Account{
    public:
    float bonus = 5000;
};
int main(){
    Programmer p1;
    cout<<"Salary = "<<p1.salary<<endl;
    cout<<"Bonus = "<<p1.bonus<<endl;
    return 0;
}
```

