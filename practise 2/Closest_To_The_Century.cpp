#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        int max_number = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            if (ar[i]>max_number)
            {
                max_number = ar[i];
            }
            
        }
        printf("%d",max_number);
        printf("\n");
        
    }
    
    return 0;
}