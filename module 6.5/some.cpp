#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, x;
        cin>>s>>x;
        int cnt = 0;
        while (s.find(x) != -1)
        {
            int n = x.size();
            s.replace(s.find(x), n, "#");
            cnt++;
        }
        cout << s << endl;
    }

    return 0;
}