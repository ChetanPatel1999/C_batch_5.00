// strcat() :-its combine two string
#include <string.h>
#include <stdio.h>
void main()
{
    char name1[50] = "ram", name2[50] = "patel";
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);
    strcat(name1, name2);
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);
}