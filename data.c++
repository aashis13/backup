#include <iostream>
using namespace std;
class student
{
private:
    int Rollno;
    char Name[20];
    static int count_student;

public:
    student() {}; // construstor
    void getdata()
    {
        cout << "Enter Rollno: " << endl;
        cin >> Rollno;
        cout << "Enter Name: " << endl;
        cin >> Name;
        count_student++;
    }
    static void displaycount()
    {
        cout << "count" << count_student << endl;
    }
};
int student::count_student = 0; 
int main()
{
    student s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();
    return 0;
}