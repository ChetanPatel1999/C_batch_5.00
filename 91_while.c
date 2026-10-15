// Write a program to display even number  1 to n (given number).
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i); // 3  6
        }
        i++;
    }
}