#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 3
    {
        for (j = i; j <= 5; j++) //3
        {
            printf("%d ", j); //1 2 3 4 5
        }                     //2 3 4 5
        printf("\n");         //3 4 5
    }
}