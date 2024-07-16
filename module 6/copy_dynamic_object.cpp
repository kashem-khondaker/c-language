#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int math_marks;

    // Constructor to initialize student details
    student(string name, int roll, int math_marks)
    {
        this->name = name;
        this->roll = roll;
        this->math_marks = math_marks;
    }
};

int main()
{
    // Create two student objects dynamically
    student *rakib = new student("rakib", 2, 38);
    student *sakib = new student("sakib", 3, 48);

    // Copy sakib's details into rakib
    *rakib = *sakib;

    // Print rakib's details
    cout << "Student Details:" << endl<< "Name: " << rakib->name << endl<< "Roll: " << rakib->roll << endl<< "Math Marks: " << rakib->math_marks << endl;

    // Clean up memory (since we used dynamic allocation)
    delete rakib;
    delete sakib;

    return 0;
}
