#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;

    long long int sum=a+b;
    long long int mnt=a*b;
    long long int mns=a-b;

    cout<< a << " + "<< b << " = "<< sum <<endl;
    cout<< a << " * "<< b << " = "<< mnt <<endl;
    cout<< a << " - "<< b << " = "<< mns <<endl;

    return 0;
}