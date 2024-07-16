#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //dynamic variable create 
    int *a = new int;
    *a=20;

    cout<<a<<endl;// this is dynamic memory address ;
    cout<<*a<<endl;// this is dynamic variable ;

    delete a;// delete dynamic memory or heap memory; 

    
    /*dynamic memory allwoys return a address of dynamic memory location 
    . thats why we need to save dynamic memory location as a pointer . 
    if we want access dynamic memory first we have dereference this pointer then we can access .

    */ 
    return 0;
}