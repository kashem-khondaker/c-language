#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        int i = 0;
        int j = word.size() - 1; 
        while (i < j) 
        {
            swap(word[i], word[j]);
            i++;
            j--;
        }
        cout << word <<" ";
    }

    return 0;
}
