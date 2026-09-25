//write a program to take two number and check number is same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);
    a == b ? printf("number are same") : printf("number are different");
}