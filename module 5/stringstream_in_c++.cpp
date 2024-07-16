#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string s;
    getline(cin, s);
    cout << "STRING : " << s << endl;

    
    stringstream mim;
    mim << s;// Initialize a stringstream 'mim' with the content of 's'  Manually 

   
    string word;
    int count = 0;
    while (mim >> word)  // Tokenize the words in 's' and count them
    {
        cout << word << endl;
        count++;
    }
    cout << "Total words: " << count << endl;
    cout << "=======================" << endl << endl;

   
    string k;
    getline(cin, k);
    cout << "STRING : " << k << endl;

    
    stringstream kashem(k); // Initialize a stringstream 'kashem' with the content of 'k' by function 

    string sk;
    int cnt = 0;
    while (kashem >> sk)  // Tokenize the words in 'k' and count them
    {
        cout << sk << endl;
        cnt++;
    }
    cout << "Total words: " << cnt << endl;

    return 0;
}
