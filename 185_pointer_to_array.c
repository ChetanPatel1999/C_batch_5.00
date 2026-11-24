#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0];
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = &arr[0]; // 400
    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    int sum = 0;
    ptr = &arr[0]; // 400
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum  of all element = %d", sum);
}