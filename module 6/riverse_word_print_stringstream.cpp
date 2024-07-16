#include<bits/stdc++.h>
using namespace std;
void riverse( stringstream & ss)
{
    string word;
    if (ss>>word)
    {
        riverse(ss);
        cout<<word<<endl;
    }
    
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // string word;
    // while (ss>>word)
    // {
    //     cout<<word<<endl;      // normal stringstream .
    // }
    
    riverse(ss);

    return 0;
}