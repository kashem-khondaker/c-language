#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch (a%2)//if(a%2==
    {
    case 0://==0)
        cout<<"Even\n";//kaj ki seita .
        break;
    
    default ://else 
        cout<<"odd\n";// kaj ki seita ..
        break;
    }
    return 0;
}