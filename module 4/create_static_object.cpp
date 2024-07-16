#include <iostream>
#include <string>
using namespace std;

class Student 
{
public:
    string name;
    int roll;
    int section;
    float math_marks;
    int cls;

    // Constructor
    // Student(string name, int roll, int section, float math_marks, int cls) {
    //     this->name = name;
    //     this->roll = roll;
    //     this->section = section;
    //     this->math_marks = math_marks;
    //     this->cls = cls;
    // }
};

int main() 
{
    // Create three static objects
    Student kalid("Khalid", 1, 1, 75.5, 10);
    Student asis("Asis", 2, 2, 85.0, 11);
    Student kashem("Kashem", 3, 3, 90.0, 12);

    // Compare math_marks to find the student with the highest marks
    Student highest_marks_student = kalid; // Assume kalid has the highest marks initially

    if (asis.math_marks > highest_marks_student.math_marks)
    {
        highest_marks_student = asis;
    }
    if (kashem.math_marks > highest_marks_student.math_marks)
    {
        highest_marks_student = kashem;
    }


    // Print the name of the student with the highest marks
    cout << "Student with the highest math marks: " << highest_marks_student.name << endl;

    return 0;
}













//=====================================================================================
// #include <bits/stdc++.h>
// using namespace std;
// class student 
// {
//     public:
//     string name;
//     int id;
//     int age;
//     float cgpa;
//     int credits;
//     student(string name, int id, int age, float cgpa, int credits) 
//     {
//         this->name = name;
//         this->id = id;
//         this->age = age;
//         this->cgpa = cgpa;
//         this->credits = credits;
//     }
// };
// int main() 
// {
//     student s("Asif Zaman", 123, 20, 3.75, 15);
//     cout << "Name: " << s.name << endl;
//     cout << "ID: " << s.id << endl;
//     cout << "Age: " << s.age << endl;
//     cout << "CGPA: " << s.cgpa << endl;
//     cout << "Credits: " << s.credits << endl;
//     return 0;
// }