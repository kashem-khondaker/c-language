#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size()<<endl;

    for (int i = 0; i < s.size(); i++)// this is for itaratory by index value
    {
        cout<<s[i];
    }
    cout<<endl<<endl;



    // iteratory for pointer 
    string:: iterator it;// declear iteratory 

    for (string::iterator it = s.begin(); it < s.end(); it++)// main manual proses 
    {
        cout<<*it;
    }
    cout<<endl;

    for (it =s.begin(); it < s.end(); it++) // manual proses
    {
        cout<<*it;
    }
    cout<<endl;

    for (auto it = s.begin(); it < s.end(); it++)// using auto for detected automatically
    {
        cout<<*it;
    }
    cout<<endl;

    

    return 0;
}