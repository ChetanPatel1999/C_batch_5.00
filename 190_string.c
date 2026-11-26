// iterate each charcter of string
#include <stdio.h>
void main()
{
    char name[7] = "chetan";
    int i;
    for (i = 0; i < 6; i++) // 1
    {
        printf("%c\n", name[i]);
    }
}