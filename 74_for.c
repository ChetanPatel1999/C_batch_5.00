// . Write a program to display multiple of   7  between given range.
#include <stdio.h>
void main()
{
    int e, i;
    printf("enter ending range : ");
    scanf("%d", &e); // 20
    for (i = 1; i <= e; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
    }
}