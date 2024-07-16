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
        // roll=r;
        // reg=re;
        // gpa=g;

        // (*this).roll=roll;
        // (*this).reg=reg;
        // (*this).gpa=gpa;

        this->roll=roll;
        this->reg=reg;
        this->gpa=gpa;
    }
};
int main()
{
    student kalid(1,100234,5.00);
    student asis(1,100234,5.00);

    
    cout<<"khalid : "<<kalid.roll<<"; "<<kalid.reg<<"; "<<kalid.gpa<<endl;    
    cout<<"asis   : "<<asis.roll<<"; "<<asis.reg<<"; "<<asis.gpa<<endl;    
    return 0;
}