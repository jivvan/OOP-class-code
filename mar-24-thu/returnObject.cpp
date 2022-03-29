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