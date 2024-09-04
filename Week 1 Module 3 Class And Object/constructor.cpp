#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    //constructor function
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main ()
{
    //calling constructor
    Student rahim(29,9,5.02);
    //calling constructor
    Student karim(45,15,4.83);
    //Printing roll,cls,gpa
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}