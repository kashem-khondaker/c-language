#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    

    int floor_value = floor(a/b);
    int cill_value = ceil(a/b);
    int round_value = round(a/b);

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor_value<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<cill_value<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round_value<<endl;

    // cout<<ceil(a/b)<<endl;


    return 0;
}