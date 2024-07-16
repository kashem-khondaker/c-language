#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int reg;
    float gpa;
    student(int roll,int reg,float gpa)
    {
        this->roll=roll;
        this->reg=reg;
        this->gpa=gpa;
    }
};
student *fun()
{
    student *rahim= new student(1,1201452,5.00);// dynamic object 
    return rahim;// return pointer
}
int main()
{
    student *rahim= fun();// rechive pointer 

    cout<<rahim->roll<<" "<<rahim->reg<<" "<<rahim->gpa<<endl;// dereference and print the result.
    delete rahim;// delete dynamic boject;
    return 0;
}