//  Write a program to count how many even numbers are present in an array.
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

    int c = 0;
    // 3 5 6 7 8
    for (i = 0; i < 5; i++) // 1
    {
        if (arr[i] % 2 == 0)
        {
            c++; // 2
        }
    }

    printf("\ntotal even count = %d", c);
}