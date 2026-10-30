#include <stdio.h>
void main()
{
    int i = 1; 
start:
    printf("hello students\n");
    i++;
    if (i <= 5)
    {
        goto start;
    }

}