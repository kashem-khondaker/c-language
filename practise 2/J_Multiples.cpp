#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;

    long long int a_mal=a%b;
    long long int b_mal=b%a;

    if ( a_mal==0   ||  b_mal==0 )
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples" <<endl; 
    }

    return 0;
}