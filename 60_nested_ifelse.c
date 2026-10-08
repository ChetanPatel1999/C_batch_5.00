// Check whether a character is a vowel, consonant, or not an alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("char is vovel");
        }
        else
        {
            printf("char is consonent");
        }
    }
    else
    {
        printf("character is not alphabet");
    }
}