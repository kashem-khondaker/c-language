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
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }// statice array;

    //dynamic array create;
    int *array_dynamic= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array_dynamic[i];
    }


    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array_dynamic[i]<<" ";// print dynamic array;
    }
    
    delete[] array_dynamic;// delete dynamic array ;
    
    return 0;
}