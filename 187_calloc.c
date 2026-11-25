#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    int n;
    printf("enter array size : ");
    scanf("%d", &n); //6                    // 5
    ptr = (int *)calloc(n, sizeof(int)); // 400   sizeof(int)=> 4
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = temp; // 400
    printf("array element are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    int sum = 0;
    ptr = temp; // 400
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum  of all element = %d", sum);

    free(temp); // deallocate dynamic allocate memory
}