//  Write a  program to check whether a character is uppercase alphabet or lowercase
// alphabet or not alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a  character : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("char is lowercase  alphabet");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("char is uppercase alphabet");
    }
    else{
        printf("char is not a alphabet");
    }

}