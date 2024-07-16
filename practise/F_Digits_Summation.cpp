#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;

    int ans_1= a%10 ;
    int ans_2= b%10 ;
    
    int result = ans_1 + ans_2 ;
    cout<<result<<endl;
    return 0;
}