//
#include <stdio.h>
void main()
{
    int i, n, res = 0;
    printf("enter a num : ");
    scanf("%d", &n);         // 
    for (i = 1; i <= n; i++) //5
    {
        if (n % i == 0)
        {
            res = res + 1; //1 
        }
        if (res > 2)
        {
            break;
        }
    }

    if (res == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}