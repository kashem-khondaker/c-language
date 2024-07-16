#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min({a,b,c});//minimum number 
    int mx=max({a,b,c});//maximum number

    cout<<mn<<" "<<mx<<endl;
    return 0;
}
