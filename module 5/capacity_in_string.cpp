#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sample;
    getline(cin,sample);

    cout<<"STRING -"<<sample<<endl;
    cout<<"string size -"<<sample.size()<<endl;//return size of the string
    cout<<"max size -"<<sample.max_size()<<endl;// return the max size of the string
    cout<<"capacity -"<<sample.capacity()<<endl;// return capacity of the string
    
    cout<<endl<<endl;

    sample.resize(10);// for resizing the string 
    cout<<"resize -"<<sample<<endl;

    sample.resize(19,'a');// jodi size basi hoi tahole baki jaigai 'a' dara porno kore dibe
    cout<<"again resize -"<<sample<<endl<<endl;
    
    sample.clear();// for use clear the function .
    cout<<"after using clear function -"<<sample<<endl<<endl;
    
    if (sample.empty()==true)//for chake the function is empty or not .
    {
        cout<<"this function is empty"<<endl;
    }
    else
    {
        cout<<"this function is not empty"<<endl;
    }


    return 0;
}