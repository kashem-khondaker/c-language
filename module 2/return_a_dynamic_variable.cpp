#include <bits/stdc++.h>
using namespace std;
int* fun(int* a) 
{
    *a=200;
    cout<<a<<endl;
    return a; // Return the same pointer
}

int main() 
{
    int* a = new int;
    cin >> *a;
    cout << *a<<endl;
    int* return_from_function = fun(a); // Assign the returned pointer

    // Access the value pointed to by return_from_function
    cout << "Value returned from function: " << *return_from_function << endl;

    delete a; // Delete memory

    return 0;
}
