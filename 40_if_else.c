// 10. Write a program to check given char is vowel or consonant.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet = ");
    scanf("%c", &ch); // E
    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("alphabet is vovel");
    }
    else
    {
        printf("alphabet is consonent");
    }
}