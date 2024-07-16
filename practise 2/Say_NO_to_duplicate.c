#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &ar[i]);
        }

        
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (ar[i] > ar[j]) 
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }

        
        int new[n];
        int newSize = 0;
        for (int i = 0; i < n; i++) 
        {
            if ( ar[i] != ar[i + 1]) 
            {
                new[newSize++] = ar[i];
            }
        }

        for (int i = 0; i < newSize; i++) 
        {
            printf("%d ", new[i]);
        }
        printf("\n");
    }

    return 0;
}
