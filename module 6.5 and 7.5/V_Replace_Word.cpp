#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=s.find("EGYPT");
    while (i != -1)
    {
        s.replace(i,5," ");
    }
    cout<<s<<endl;
    
    return 0;
}