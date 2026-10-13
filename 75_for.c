//  Write a program to display even number series.
#include <stdio.h>
void main()
{
    int e, i;
    printf("enter ending range : ");
    scanf("%d", &e); // 20
    printf("even number series :- ");
    for (i = 1; i <= e; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}