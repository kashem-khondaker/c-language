#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    long long int c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    long long int result = 0;//update result
    if (s=='+')
    {
        result=a+b;
    }
    else if (s=='-')
    {
        result=a-b;
    }
    else if (s=='*')
    {
        result=a*b;
    }


    if (result==c)// compare result to c
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }

    // cout<<a<<" "<<s<<" "<<b<<" "<<q<<" "<<c<<endl;
    // cout<<result<<endl;

    return 0;
}