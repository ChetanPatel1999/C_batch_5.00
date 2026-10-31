#include <stdio.h>
void main()
{
    int i, j;
    // for (i = 1; i <= 4; i++) // 3
    // {
    //     for (j = 1; j <= (9 - i * 2); j++) //3
    //     {
    //         printf("%d ", j); // 1 2
    //     }
    //     printf("\n");
    // }

    for (i = 1; i <= 4; i++) // 2
    {
        for (j = 1; j <= (i * 2 - 1); j++) // 3
        {
            printf("%d ", j); // 1 2
        }
        printf("\n");
    }
}