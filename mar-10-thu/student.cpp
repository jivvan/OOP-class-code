#include <iostream>
using namespace std;

class Student
{
private:
    const char *name;
    int firstMark, secondMark, finalMark;

public:
    void setName(const char *n)
    {
        name = n;
    }
    void setFirstMark(int mark)
    {
        firstMark = mark;
    }
    void setSecondMark(int mark)
    {
        secondMark = mark;
    }
    void setFinalMark(int mark)
    {
        finalMark = mark;
    }
    int getFirstMark()
    {
        return firstMark;
    }
    int getSecondMark()
    {
        return secondMark;
    }
    int getFinalMark()
    {
        return finalMark;
    }
    const char *getName()
    {
        return name;
    }
};

int main()
{
    Student s;
    s.setName("Harish");
    s.setFirstMark(90);
    s.setSecondMark(87);
    s.setFinalMark(57);
    cout << "Name: " << s.getName() << endl;
    cout << "First Mark: " << s.getFirstMark() << endl;
    cout << "Second Mark: " << s.getSecondMark() << endl;
    cout << "Third Mark: " << s.getFinalMark() << endl;
    return 0;
}