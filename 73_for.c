// Write a program to display number between given range.
#include <stdio.h>
void main()
{
    int s, e, i;
    printf("enter starting range : ");
    scanf("%d", &s);//10
    printf("enter ending range : ");
    scanf("%d", &e);//20
    for (i = s; i <= e; i++)
    {
        printf("%d ", i);
    }
}