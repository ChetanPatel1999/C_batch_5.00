// wap to print table of given number using goto stmnt.
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num for table : ");
    scanf("%d", &n);
lab:
    printf("%d\n", n * i);
    i++;
    if (i <= 10)
    {
        goto lab;
    }
}