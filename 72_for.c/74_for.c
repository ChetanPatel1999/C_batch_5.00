//Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 40; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}