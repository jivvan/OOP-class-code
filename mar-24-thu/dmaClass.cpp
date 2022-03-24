// dynamic memory allocation for objects
#include <iostream>

class Box
{
public:
    Box()
    {
        std::cout << "Constructor is called!" << std::endl;
    }
    void sayhello()
    {
        std::cout << "Hello world!" << std::endl;
    }
    ~Box()
    {
        std::cout << "Destructor is called!" << std::endl;
    }
};

int main()
{
    Box *myBoxArray = new Box[4];
    for (int i = 0; i < 4; i++)
    {
        myBoxArray[i].sayhello();
    }
    delete[] myBoxArray;
    return 0;
}