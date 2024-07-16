#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read a line of text into a character array
    char s[100];
    cin.getline(s, 100);
    cout << "my char string: " << s << endl<<endl;



    // Read an integer
    int n;
    cin >> n;
    cout<<"inger input :"<< n << endl<<endl;



    // Read a dynamic string (ignoring any remaining newline characters)
    string ss;
    cin.ignore(); // Ignore any newline left in the input buffer
    getline(cin, ss);
    cout << "my dynamic string: " << ss << endl<<endl;

    return 0;
}
