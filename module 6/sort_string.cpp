#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    sort(s.begin(),s.end());

    cout<<s<<endl;
    return 0;
}

/*sort function 2 ta parameter rechive kore ..
 array ta oita index hisebe rechive kore kinto string akta dynamic object tai aiata parameter 
 hiabe aita akta pointer rechive kore.. aikane s.begin() function ta string ar 0 index ka point kore ar
 s.end() function ta akta null ka point kore .. 

 sort function last index er ag porjonto korte pare .. ai kane last index ta null tai string ta valo kore sort korte parbe ..
 
*/ 