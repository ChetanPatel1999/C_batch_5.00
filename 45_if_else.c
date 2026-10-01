// Write a program to check whether a character is an digit or not.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character = ");
    scanf("%c", &ch);
    // if (ch >= 48 && ch <= 57)
    if (ch >= '0' && ch <= '9')
    {
        printf("char is digit");
    }
    else
    {
        printf("char is not digit");
    }
}