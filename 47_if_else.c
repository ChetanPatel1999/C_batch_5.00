// Write a program to check whether a character is an uppercase  so convert in lower
// case or lowercase so convert in uppercase char .
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet = ");
    scanf("%c", &ch); // c (99)
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;                 //
        printf("uper-case = %c", ch); // C
    }
    else
    {
        ch = ch + 32;
        printf("lower-case = %c", ch);
    }
}