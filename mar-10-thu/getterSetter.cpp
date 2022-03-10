#include <iostream>
using std::cout;
class Student
{
private:
    int rollno;

public:
    void setRoll(int roll)
    {
        rollno = roll;
    }
    int getRoll()
    {
        return rollno;
    }
};

int main()
{
    Student s;
    s.setRoll(4);
    cout << s.getRoll();
}
