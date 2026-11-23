// we can change variable value by pointer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("a = %d\n", a);
    *ptr = 70;
    printf("a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
}