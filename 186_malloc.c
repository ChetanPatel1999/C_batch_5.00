#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = malloc(20); // 400
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp; // 400
    printf("array element are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    int sum = 0;
    ptr = temp; // 400
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum  of all element = %d", sum);

    free(temp); // deallocate dynamic allocate memory
}