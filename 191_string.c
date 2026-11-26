// iterate/visit each character of string using null character
#include <stdio.h>
void main()
{
    char name[20] = "chetan patel";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 7
    {
        printf("%c\n", name[i]);// c h e t a n
    }
}