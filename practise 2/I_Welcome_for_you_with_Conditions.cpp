#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y, t;
    cin >> x >> y >> t;
    
    int possible = 0;
   
        for(int i=0; i*x <= t; i++)
        { if((t - i *x) %y == 0){
            possible = 1;
            break;
        }
         }


    if (possible)
     {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    
    return 0;
}