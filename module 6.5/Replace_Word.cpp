#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        while (a.find(b)!=-1)
        {
            int n =b.size();
            if (a.find(b))
            {
                a.replace(a.find(b),n,"#");
            }
        }
        
        cout<<a<<endl;

    }
    
    return 0;
}