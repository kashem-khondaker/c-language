#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks;
    int eng_marks;
    person(string name,int age,int marks,int eng_marks)
    {
        this->name=name;
        this->age=age;
        this->marks=marks;
        this->eng_marks=eng_marks;
    }
    int fun()
    {
        int total_marks=marks+eng_marks;
        // cout<<name<<" "<<age<<" "<<endl;
        return total_marks;
    }
};
int main()
{
    person kabila("'kabila' is my name",18,20,10);
    int totall=kabila.fun();  
    cout<<totall<<endl;  
    return 0;
}