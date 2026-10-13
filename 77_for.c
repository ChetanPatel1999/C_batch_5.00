//. Write a program to display sum 1 to n  ( given number) only even numbers 
// sum. 
#include <stdio.h>
void main()
{
    int n, i, res = 0;
    printf("enter ending range : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) // 10
    {
        if (i % 2 == 0)
        {
            res = res + i; // res = 30
        }
    }
    printf("sum of 1 to %d only even number  = %d ", n, res);
}