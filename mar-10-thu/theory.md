## Accessing Private Data Members
To access, use and initialize the private data member you nee to create getter and setter functions, to get and set the value of the data menber.

The setter function will set the value passes as argument to the private variable. And the getter variable will return the current value of a private variable. Both getter and setter functions must be public.

## Accessing Protected Data Members
Protected data members can be accessed directly using dot(.) operator inside the subclass of the current class, for non-subclass we will have to follow the steps same as to access private data members.

## Constructor
A constructor is a special type of member function that is called automatically when object is created.
In C++, a constructor has the same ame as that of the class ad it does not have a return type.
### creating a constructor
```cpp
class Wall{
    public:
    //a default constructor
    Wall(){
        //code
    }
};
```

### C++ Default and Parameterized Constructor
The constructor does not have any arguments is default constructor. And, the constructor which takes parameter or arguments is called parameterized constructor. 