// wap to print table of given number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num :");
    scanf("%d", &n); // 20
lab:
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++; // 4
    if (i <= n)
    {
        goto lab;
    }
}