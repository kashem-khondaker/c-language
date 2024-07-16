#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n=6;
        char ar[n];
        cin>>ar;
        int sum1=0,sum2=0;


        for (int i = 0; i < n/2; i++)
        {
            sum1+=ar[i];
        }
        for (int i = n/2; i < n; i++)
        {
            sum2+=ar[i];
        }



        if (sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}