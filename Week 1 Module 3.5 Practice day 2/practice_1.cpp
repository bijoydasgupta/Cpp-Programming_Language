#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    char name[101];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char n[], int r, char sec, int math, int c) {
        strcpy(name, n);
        roll = r;
        section = sec;
        math_marks = math;
        cls = c;
    }
};

int main() {
    char name1[101], name2[101], name3[101];
    int roll1, roll2, roll3, math1, math2, math3, cls1, cls2, cls3;
    char section1, section2, section3;

    cout << "Enter details for student 1:\n";
    cin >> name1 >> roll1 >> section1 >> math1 >> cls1;
    cout << "Enter details for student 2:\n";
    cin >> name2 >> roll2 >> section2 >> math2 >> cls2;
    cout << "Enter details for student 3:\n";
    cin >> name3 >> roll3 >> section3 >> math3 >> cls3;

    Student s1(name1, roll1, section1, math1, cls1);
    Student s2(name2, roll2, section2, math2, cls2);
    Student s3(name3, roll3, section3, math3, cls3);

    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks) {
        cout << "Highest math marks: " << s1.math_marks << ", Student Name: " << s1.name << endl;
    } 
    else if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks) {
        cout << "Highest math marks: " << s2.math_marks << ", Student Name: " << s2.name << endl;
    } 
    else if (s3.math_marks > s1.math_marks && s3.math_marks > s2.math_marks) {
        cout << "Highest math marks: " << s3.math_marks << ", Student Name: " << s3.name << endl;
    } 
    else {
        cout << "Two or more students have the highest math marks.\n";
    }
    return 0;
}