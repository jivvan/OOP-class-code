#include <iostream>
using namespace std;

class College
{
public:
    int contactNo;

protected:
    int registrationNo;
    int get_panNo()
    {
        return panNo;
    }

private:
    int panNo;
};

class Teacher : private College
{
public:
    char *subject;

protected:
    int mobileNo;
    char *get_affair()
    {
        return affair;
    }

private:
    char *affair = "With samita mam";
};

class Student : private Teacher
{
public:
    char *name;
    Student(char *n) : name(n){};
    void print_teacher_affair()
    {
        cout << Teacher::get_affair();
    }
};

int main()
{
    Student std("Sandesh");
    cout << std.name;
    std.print_teacher_affair();
}