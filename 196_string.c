// fgets() :- its used to take string from user
// fputs() :- its used to display string in output
#include <stdio.h>
void main()
{
    char name[10];
    printf("enter name : ");
    fgets(name, 10, stdin);
    printf("name = ");
    fputs(name, stdout);
}