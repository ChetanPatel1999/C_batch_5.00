// wap to calculate string length and display.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string = ");
    gets(name); // ram
    printf("name = %s\n", name);
    int i, l = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    printf("length = %d",l);
}