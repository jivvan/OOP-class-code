>All of you, please shut down the door.

# Operator Operloading(Compile-time Polymorphism)
Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading isused to overload or redefines most of the operators available in C++. Itis used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types. The advantage of operator overloading is to perform different operations on the same operand.

**Operator that cannot be overloaded are as follows:**
* The scope resolution operator 
* sizeof and typeof operators
* ternery operator
* referencing and dereferencing operators(*,&)
* member selector(.)

## Syntax of operator overloading
```C++
return_type class_name::operator op(argument_list){
    //body of function
}
```
Where the *return_type* is type of value returned by the function.
*class_name* is the name of the class.
*operator op* is the operator function where *op* is the operator being overloaded, and the *operator* is the keyword.

## Rules for operator overloading
* Existing operators can only be overloaded, but the new operators cannot be overloaded.
* The overloaded operator contains atleast one operand of the user-defined data type.
* We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.
* When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.
* When binary operators are overloaded throught a member function takes one explicit argument, and if they are overloaded throught a friend function takes two explicit arguments.

## C++ operator overloading example
### Unary operator overloading
```C++
#include <iostream>
using namespace std;

class Test
{
private:
    int num;

public:
    Test() : num(8) {}
    void operator++()
    {
        num = num + 2;
    }
    void Print()
    {
        cout << "The count is: " << num << endl;
    }
};

int main()
{
    Test tt;
    tt.Print();
    ++tt;
    tt.Print();
    return 0;
}
```