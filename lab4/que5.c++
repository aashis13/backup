#include <iostream>
using namespace std;
class student
{
private:
    int mark1, mark2;

public:
    student();
    student(int, int);
    ~student();
    void operator=(student);
    void display();
};
int main()
{
    student s1(45, 89), s2(36, 59);
    s1 = s2;
    s1.display();
    s2.display();
    return 0;
}
student::student()
{
    mark1 = 0;
    mark2 = 0;
}
student::student(int m1, int m2)
{
    mark1 = m1;
    mark2 = m2;
}
student::~student()
{
    cout << "" << endl;
}
void student::operator=(student s2)
{
    mark1 = s2.mark1;
    mark2 = s2.mark2;
}
void student::display()
{
    cout << "Marks 1: " << mark1 << endl;
    cout << "Marks 2: " << mark2 << endl;
}