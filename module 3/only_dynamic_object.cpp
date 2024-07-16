#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int reg;
    float gpa;
    student(int roll,int reg, float gpa)
    {
        this->roll=roll;
        this->reg=reg;
        this->gpa=gpa;
    }
};
int main()
{
    student *kashem= new student(10,10231,5.00);
    
    cout<<kashem->roll<<" "<< kashem->reg<<" "<<kashem->gpa<<endl;
    delete kashem;
    return 0;
}