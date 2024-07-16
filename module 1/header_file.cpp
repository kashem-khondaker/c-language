#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    int a;
    cin>>a;

    getchar();
    cin.getline(s,n);
    cout<<a<<"\n"<<s<<endl;

    cout<<strlen(s)<<"-this is string length.";
    return 0;
}