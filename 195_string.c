// gets() :- its used to take string from user
// puts() :- its used to display string in output
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter name : ");
    gets(name); // its use to take sentance from user
    // printf("name = %s", name);
    printf("name = ");
    puts(name);
}