// strrev() :- its convert string in reverse
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("enter string = ");
    gets(name); //ram
    printf("name = %s\n", name);
    strrev(name);
    printf("name = %s\n", name);
 
}