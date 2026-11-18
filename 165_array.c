// . Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr[5];
    int myarray[5];
    int i;
    printf("enter array elements :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // copy array code example
    for (i = 0; i < 5; i++) // 1
    {
        myarray[i] = arr[i];
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", arr[i]);
    }

    printf("\nmy-array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", myarray[i]);
    }
}