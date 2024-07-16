#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int palindrom=1;
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if (ar[i]!=ar[j])
        {
            palindrom=0;
        }
        
        i++;
        j--;
    }
    
    (palindrom==1)? cout<<"YES"<<endl : cout<<"NO"<<endl; 
    return 0;
}