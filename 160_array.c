// Write a program to find the sum of all elements in an array.
#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("enter array elements : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nsum of all array element : %d\n", sum);
    printf("average of all array element : %.2f\n", sum / 5.0);

    if (sum % 2 == 0)
    {
        printf("sum is even");
    }
    else
    {
        printf("sum is odd");
    }
}