## Constructor and Destructor in derived class C++
We know that constructor is invoked implicitly when anobject is created. In inheritance, when an object of derived class is created then constructor of derived class get executed and then it class the constructor base class. If there is no default constructor present in parent class then not only we have to create constructor in child class but also we will have to call the constructor of parent class. In order to call parameterized constructor of parent class, we need to create a constructor in child class and also we will have to call parameterized constructor with the help of child class constructor.

### Syntax of calling parent class constructor using child class constructor
```C++
class A{
    public:
    int a;
    A(int k){
        a = k;
    }
};

class B{
    public:
    int b;
    B(int x, int y):A(x){
        b = y;
    }
};
```

### Points to remember
- In inheritence, the order of constructors calling is from child class to parent class.
- The order of constructions execution is from parent class to child class.
- The order of descructors calling is from child class to parent class.
- The order of destructors execution is from child to parent class.

## C++ public, protected and private inheritance
In C++, we can derive a child dclass from the base class in different access modes.