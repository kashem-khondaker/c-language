#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    (a%2==0)?cout<<"Even\n":cout<<"Odd\n";
    //ternary operator for use if else condition chortcut
    if (a%2==0)
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }
    // if else condition in c++ ;
    return 0;
}