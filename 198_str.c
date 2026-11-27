// strlen() :- its return string length
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("enter string = ");
    gets(name); // ram
    printf("name = %s\n", name);
    int l = strlen(name);
    printf("length = %d", l);
}