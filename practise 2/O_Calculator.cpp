#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a ;
    char s;
    int b;
    cin>>a>>s>>b;
    long long int result = 0 ;
    
    if (s=='+')
    {
        result = a+b;
    }
    if (s=='-')
    {
        result = a-b;
    }
    if (s=='*')
    {
        result = a*b;
    }
    if (s=='/')
    {
        result = a/b;
    }
    


    cout<<result<<endl;
    return 0;
}