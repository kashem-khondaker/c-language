#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char sections;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};
bool compare(student & a, student &b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.id<b.id;
        
    }
    else
    {
        return a.total_marks>b.total_marks;
    }
    
}
int main()
{
    int n;
    cin>>n;
    student students[n];
    for (int i = 0; i < n; i++)
    {
        cin>>students[i].name
            >>students[i].cls
            >>students[i].sections
            >>students[i].id
            >>students[i].math_marks
            >>students[i].eng_marks;
        
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout<<students[i].name<<" "
            <<students[i].cls<<" "
            <<students[i].sections<<" "
            <<students[i].id<<" "
            <<students[i].math_marks<< " "
            <<students[i].eng_marks
            <<endl;
        
        
    }
    
    return 0;
}