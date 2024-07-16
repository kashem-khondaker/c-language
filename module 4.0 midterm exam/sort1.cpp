#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    //input array
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    

    sort(ar,ar+n);// sort accending order .

    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }

    cout<<endl;// sort decending order .
    sort(ar,ar+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    
    return 0;
}