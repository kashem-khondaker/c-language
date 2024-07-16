#include <iostream>
#include <algorithm> // Include the algorithm library for min()

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int minimum = min({a, b, c, d});
    int maximum = max({a,b,c,d});

    cout << "Minimum value: " << minimum << endl;
    cout << "maximum value: " << maximum << endl;

    return 0;
}
