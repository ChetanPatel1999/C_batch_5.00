#include <stdio.h>
void main()
{
    int i = 5;
    printf("%d\n", i);
    i++; // 6
    if (i <= 10)
    {
        goto lab;
    }
    printf("this is stmnt 1\n");
    printf("this is stmnt 2\n");
    goto lab;
    printf("this is stmnt 3\n");
lab:
    printf("after lab");
}