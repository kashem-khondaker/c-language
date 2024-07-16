#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    int id;
    char name[100];
    char section;
    int mark;
};

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {

        Student std1, std2, std3;


        cin >> std1.id >> std1.name >> std1.section >> std1.mark;
        cin >> std2.id >> std2.name >> std2.section >> std2.mark;
        cin >> std3.id >> std3.name >> std3.section >> std3.mark;



        // Find highest marks of this student 
        Student mx = std1;
        if (std2.mark > mx.mark || (std2.mark == mx.mark && std2.id < mx.id))
        {
            mx = std2;
        }
            
        if (std3.mark > mx.mark || (std3.mark == mx.mark && std3.id < mx.id))
        {
            mx = std3;
        }


        // Output student with highest marks
        cout << mx.id << " " << mx.name << " " << mx.section << " " << mx.mark << endl;
    }

    return 0;
}
