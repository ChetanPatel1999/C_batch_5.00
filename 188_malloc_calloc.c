#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1 = malloc(20);
    int *ptr2 = calloc(5, 4);
    int i;
    *ptr1 = 56;
    printf("malloc values : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr1);
        ptr1++;
    }

    printf("\ncalloc values : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}