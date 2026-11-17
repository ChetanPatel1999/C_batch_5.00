
// wap to take array element from user and display them.
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
}