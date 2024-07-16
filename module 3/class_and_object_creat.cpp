#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    student a;
    a.roll=15;
    a.cgpa=3.04;
    char tmp[100]="kashem khondaker";
    strcpy(a.name,tmp);

    cout<<a.name<<" roll :"<<a.roll<<" cgpa :"<<a.cgpa;
    // student a,b;
    // cin>>a.name>>a.roll>>a.cgpa;
    // cin>>b.name>>b.roll>>b.cgpa;
    // cout<<a.name<<"; roll :"<<a.roll<<"; cgpa :"<<a.cgpa<<endl;
    // cout<<b.name<<"; roll :"<<b.roll<<"; cgpa :"<<b.cgpa<<endl;


    // student a,b,c;
    // cin.getline(a.name,100);
    // cin>>a.roll>>a.cgpa;

    // getchar();// remove inter
    // cin.getline(b.name,100);
    // cin>>b.roll>>b.cgpa;

    // getchar();// remove inter
    // cin.getline(c.name,100);
    // cin>>c.roll>>c.cgpa;



    // cout <<a.name<<"; roll :"<<a.roll<<"; cgpa :"<<a.cgpa<< endl;// kashem
    // cout <<b.name<<"; roll :"<<b.roll<<"; cgpa :"<<b.cgpa<< endl;// rakib
    // cout <<c.name<<"; roll :"<<c.roll<<"; cgpa :"<<c.cgpa<< endl;// maria
    return 0;
}