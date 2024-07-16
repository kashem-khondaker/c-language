#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    char s[n+1];
    cin >> s;
    int a[26]={0};
    for(int i=0; i<strlen(s); i++){
        int val = s[i]-'a';
        a[val]++;
    }
 
    for(int i=0; i<26; i++){
          while (a[i] > 0) {
            cout << char(i + 'a');
            a[i]--;
        }
    }
    return 0;
}