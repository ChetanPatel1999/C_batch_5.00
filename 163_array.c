//  Write a program to print squares of all numbers present in a given array.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("enter array elements :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", arr[i]);
    }

    // 4 3 6 7 8
    printf("\narray element squares are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", arr[i] * arr[i]);
    }
}