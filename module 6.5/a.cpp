#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=0;t<test;t++)
    {
        string s,x;
        cin >>s >> x;
    
        int size=x.size();
        while(s.find(x) !=-1)
        {
            s.replace(s.find(x),size,"#");
        }

        cout  <<s << endl;
    }

    return 0;
}
