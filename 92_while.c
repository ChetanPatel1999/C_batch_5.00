// Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int n, i, res = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 10
    i = 1;
    while (i <= n)
    {
        res = res + i; // 28
        i++;
    }
    printf("sum of 1 to %d = %d", n, res);
}