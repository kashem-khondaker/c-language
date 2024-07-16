#include <iostream>
using namespace std;

// Custom implementation of bubble sort
void bubbleSort(string &s) 
{
    int n = s.length();
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i+1; j < n ; j++) 
        {
            if (s[i] > s[j ]) 
            {
                swap(s[i], s[j]);// Swap adjacent characters
            }
        }
    }
}

int main() 
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    // Sort thethe string using bubble sort
    bubbleSort(S);

    // Print the sorted string
    cout << S << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ar[n];
    cin>>ar;
    sort(ar,ar+n);
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i];
    }
    
    return 0;
}
//-------------------------------------------------------------------------
//=========================================================================
//-------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int arr[26] = {0};
//     int n; 
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         char c;
//         cin>>c;
//         arr[(int)c - 'a']++;
//     }
//     for(int i= 0;i<=25;i++)
//     {
//         while(arr[i] != 0)
//         {
//             cout<<(char)(i+'a');
//             arr[i]--;
//         }
//     }
//     return 0;
// }