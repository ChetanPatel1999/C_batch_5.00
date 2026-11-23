// when we increase a pointer by one so its increase by 4 if pointer data type is int.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("&a = %d\n", &a);   // 1234
    printf("ptr = %d\n", ptr); // 1234
    ptr++;
    printf("&a = %d\n", &a);   // 1234
    printf("ptr = %d\n", ptr); // 1238
}