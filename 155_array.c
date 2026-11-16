#include <stdio.h>
void main()
{
    int arr[10] = {12, 34, 56, 78, 90, 33, 55, 66, 77, 88};
    int i;
    printf("array element are :\n");
    for (i = 0; i < 10; i++) // 5
    {
        printf("%d ", arr[i]);
    }

    arr[4] = 700;
    arr[2] = 50;

    printf("\narray element are :\n");
    for (i = 0; i < 10; i++) // 5
    {
        printf("%d ", arr[i]);
    }
}