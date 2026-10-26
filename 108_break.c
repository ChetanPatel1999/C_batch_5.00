#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 4
    {
        if (i % 4 == 0)
        {
            break;
        }
        printf("%d\n", i); // 1 2 3 
    }
    printf("after loop");
}