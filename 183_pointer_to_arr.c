#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr;
    ptr = &arr[0];
    printf("%d\n", *ptr); // 12
    ptr++;                // 404
    printf("%d\n", *ptr); // 34
    ptr++;                // 408
    printf("%d\n", *ptr); // 56
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
}