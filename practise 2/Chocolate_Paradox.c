#include <stdio.h>

int main() 
{
    int x, y, t;
    scanf("%d %d %d", &x, &y, &t);

    int result1 = t % x;
    int result2 = t % y;
    
    if (result1==0 || result2==0 || (x+y)==t || (x+y)<=t) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
