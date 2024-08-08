#include <iostream>
using namespace std;

// Base class Student
class Student
{
protected:
    int rollno;
    string name;

public:
    void getStudent()
    {
        cout << "Enter rollno and name of student:\n";
        cin >> rollno;
        cin.ignore();
        getline(cin, name);
    }

    void displayStudent()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student
{
protected:
    int subject1, subject2, subject3;

public:
    void getMarks()
    {
        cout << "Enter marks of three subjects:\n";
        cin >> subject1 >> subject2 >> subject3;
    }

    void displayMarks()
    {
        cout << "Subject1: " << subject1 << endl;
        cout << "Subject2: " << subject2 << endl;
        cout << "Subject3: " << subject3 << endl;
    }

    int totalMarks()
    {
        return subject1 + subject2 + subject3;
    }
};

class Result : public Marks
{
public:
    void displayResult()
    {
        displayStudent();
        displayMarks();
        int total = totalMarks();
        float percentage = calculatePercentage(total);
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    float calculatePercentage(int totalMarks)
    {
        return static_cast<float>(totalMarks) / 3.0;
    }
};

int main()
{
    Result student;
    student.getStudent();
    student.getMarks();
    cout << "---Result details---" << endl;
    student.displayResult();

    return 0;
}
