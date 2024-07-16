#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> ar[i];
    }

    int mx = INT_MIN; // Initialize mx to the smallest possible value

    for (int i = 0; i < n; i++) 
    {
        mx = max(mx, ar[i]); // Update mx if necessary
    }

    cout << mx << endl; // Print the maximum number

    return 0;
}
