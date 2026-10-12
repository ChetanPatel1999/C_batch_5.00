//
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a ending number : ");
    scanf("%d", &n);         // 5
    for (i = 1; i <= n; i++) // 3
    {
        printf("square of %d = %d\n", i, i * i); //
    }
}