#include<bits/stdc++.h>
using namespace std;
int main()
{
    string mim;
    getline(cin,mim);
    cout<<"STRING-"<<mim<<endl<<endl;

    cout<<"access the value in this formate s[i]-- "<<mim[0]<<endl;// access the value
    cout<<"access the value in this formate mim.at(i)-- "<<mim.at(2)<<endl;// access the value
    cout<<"access the last index value in this formate mim.back() - "<<mim.back()<<endl;// access the last index value.
    cout<<"access the first value by using functino in that formate mim.front()"<<mim.front()<<endl;// access the first index value by using function .
    
    return 0;
}