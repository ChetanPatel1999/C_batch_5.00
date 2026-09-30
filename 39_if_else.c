// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter first num = ");
    scanf("%d", &a); // 568
    printf("enter second num = ");
    scanf("%d", &b); // 789

    if (a > b)
    {
        printf("greatest num = %d\n", a);
    }
    else
    {
        printf("greatest num = %d\n", b);
    }
}