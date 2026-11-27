// strcpy() :-its copy one variable value in another variable
#include <string.h>
#include <stdio.h>
void main()
{
    // char name1[50] = "ram", name2[50];
    // printf("name1 = %s\n", name1);
    // printf("name2 = %s\n", name2);
    // strcpy(name2, name1);
    // printf("name1 = %s\n", name1);
    // printf("name2 = %s\n", name2);

    char name[20];
    strcpy(name, "ram");
    printf("name = %s", name);
}