#include<bits/stdc++.h>
using namespace std;

int main() 
{
    char str[100001];
    
    while (cin.getline(str, 100001)) 
    {
        
        sort(str, str + strlen(str)); 

       
        for (int i = 0;  str[i] != '\0'; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
        }

        cout << endl;
    }
    
    return 0;
}










// ============================================================
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    int   ar[100001];
    while (cin.getline(str,100001))
    {
        for (int i = 0; i < strlen(str); i++)
        {
            
        }
        
        cout<<str<<endl;
    }
    
    return 0;
}