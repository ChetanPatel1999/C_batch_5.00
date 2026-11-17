// wap to display sum of all array element.
#include <stdio.h>
void main()
{
    int arr[5] = {3, 56, 7, 44, 9};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    // sum of all array element
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + arr[i]; // 119
    }
    printf("\nall array element sum = %d", sum);

    // sum of even array element
    //3, 56, 7, 44, 9
    sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i]; // 100
        }
    }

    printf("\nall even array element sum = %d", sum);

    
}