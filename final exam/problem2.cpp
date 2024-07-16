#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // Read the entire line
    stringstream ss(s);
    string word;

    string compare ="Jessica";
    int cnt=0;
    while (ss>>word)
    {
        if (word==compare)
        {
            cnt++;
        }
        
    }
    if (cnt==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    return 0;
}
