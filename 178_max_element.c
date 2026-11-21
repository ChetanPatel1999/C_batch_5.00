//  Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {45, 677, 89, 22, 344};
    int max = arr[0]; // 45
    int i;
    for (i = 1; i < 5; i++)//5
    {
        if (max < arr[i])
        {
            max = arr[i]; // 89
        }
    }
    printf("max element = %d", max);
}