#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, s;
        cin >> n >> s;
        int ar[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> ar[i];
        }

        int result = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) 
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (ar[i] + ar[j] + ar[k] == s) 
                    {
                        result = 1;
                        break; 
                    }

                }

            }

        }



        if (result == 1) 
        {
            cout << "YES" << endl;
        } else 
        {
            cout << "NO" << endl;
        }


    }

    return 0;
}
