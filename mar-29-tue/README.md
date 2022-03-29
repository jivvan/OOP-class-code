>Suppose I am a children. I am son of my dad.

## Scope Resolution Operator
A public member function can also be defined outside of the class with a special type of operator knows as Scope Resolution Operator(**SRO**); **SRO** is represented by **::** (Double colon).

### Let's consider the syntax

```C++
return_type class_name::function_name(parameters){
    //function body
    return return_type;
}
```

### Example program:

```C++
#include <iostream>
using namespace std;

class Example
{
private:
    int val;

public:
    // function declarations
    void init_val(int v);
    void print_val();
};

void Example::init_val(int v)
{
    val = v;
}

void Example::print_val()
{
    cout << "val: " << val << endl;
}

int main()
{
    // create object
    Example ex;
    ex.init_val(100);
    ex.print_val();
    return 0;
}
```