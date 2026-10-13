//. Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int n, i, res = 0;
    printf("enter ending range : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) // 6
    {
        res = res + i; // res = 15
    }
    printf("sum of 1 to %d = %d", n, res);
}