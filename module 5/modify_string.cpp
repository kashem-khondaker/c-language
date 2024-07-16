#include<bits/stdc++.h>
using namespace std;

int main() {
    string m;
    getline(cin, m);
    cout << m << endl;

    string s;
    getline(cin, s);
    cout << s << endl << endl;

    // m += s; // Uncomment this line to use the += operator
    // cout << m << endl;

    s.append(m); // Append 'm' to 's' (similar to += operator)
    cout << s << endl;

    // s.erase(5, 6); // Uncomment this line to use the erase function
    // cout << s << endl;

    s.replace(5, 6, "mim"); // Replace a portion of 's' with "mim"
    cout << s << endl;

    s.push_back('o'); // Add the character 'o' to the end of 's'
    cout << s << endl;




    s.pop_back(); // Remove the last character from 's'
    cout << s << endl;
    s.pop_back(); // Remove the last character from 's'
    cout << s << endl;
    s.pop_back(); // Remove the last character from 's'
    cout << s << endl;
    s.pop_back(); // Remove the last character from 's'
    s.pop_back(); // Remove the last character from 's'
    s.pop_back(); // Remove the last character from 's'
    s.pop_back(); // Remove the last character from 's'
    cout << s << endl;
    // cout<<s.size()<<endl;





    s.insert(s.size(), "i am from raikaly"); // Insert text before the last character
    cout << s << endl;

    return 0;
}
