#include <iostream>
#include <string>
using namespace std;

class Teacher
{
protected:
    int teacherId;
    string subject;

public:
    void getTeacher()
    {
        cout << "Enter teacher id and subject:\n ";
        cin >> teacherId >> subject;
    }

    void displayTeacher()
    {
        cout << "Teacher Id: " << teacherId << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Staff
{
protected:
    int staffId;
    string level;

public:
    void getStaff()
    {
        cout << "Enter staff id and level:\n";
        cin >> staffId >> level;
    }

    void displayStaff()
    {
        cout << "Staff Id: " << staffId << endl;
        cout << "Level: " << level << endl;
    }
};

class Coordinator : public Teacher, public Staff
{
private:
    string program;

public:
    void getdata()
    {
        getTeacher();
        getStaff();
        cout << "Enter Program:\n";
        cin >> program;
    }

    void displaydata()
    {
        cout << "----Coordinator details----" << endl;
        displayTeacher();
        displayStaff();
        cout << "Program: " << program << endl;
    }
};

int main()
{
    Coordinator coordinator;
    coordinator.getdata();
    coordinator.displaydata();

    return 0;
}
