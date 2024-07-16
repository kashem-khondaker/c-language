#include<bits/stdc++.h>
using namespace std;
int *fun(int *arr,int a )//this is a function 
{
    for (int i = 0; i < a; i++)
    {
        arr[i]=11;
    }
    
    return arr;
}

int main()
{
    int a;
    cin>>a;
    int *arr= new int[a];// dynamic array create 
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }


    int *return_value=fun(arr,a);//dynamic array and int a pass to the function
    // delete[] arr;// delete dynamic array .


    for (int i = 0; i < a; i++)
    {
        cout<<return_value[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}