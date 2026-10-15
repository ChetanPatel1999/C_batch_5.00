// Write a program to display factors count of given number.
#include <stdio.h>
void main()
{
    int i, n, res = 0;
    printf("enter a num : ");
    scanf("%d", &n);         // 12
    for (i = 1; i <= n; i++) //
    {
        if (n % i == 0) // 15
        {
            res = res + 1; // 4
        }
    }
    printf("factors count = %d", res);
}