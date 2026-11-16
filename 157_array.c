// wap to print only even elements from array.
#include <stdio.h>
void main()
{
    int arr[5] = {2, 7, 6, 8, 13};
    int i;
    printf("array element are :\n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr[i]);
    }

    printf("\narray even element are :\n");
    for (i = 0; i < 5; i++) // 4
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}