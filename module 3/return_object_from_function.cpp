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
student fun()
{
    student kalid(1,100234,5.00);
    return kalid;
}
int main()
{
    student kashem(1,124,4.32);// class- student 
    student somona(100,1024,1.32);// class- student 
    student khalid= fun();// return from function 


    cout<<"kashem : "<<kashem.roll<<"; "<<kashem.reg<<"; "<<kashem.gpa<<endl;    
    cout<<"somona : "<<somona.roll<<"; "<<somona.reg<<"; "<<somona.gpa<<endl;    
    cout<<"khalid : "<<khalid.roll<<"; "<<khalid.reg<<"; "<<khalid.gpa<<endl;    
    return 0;
}