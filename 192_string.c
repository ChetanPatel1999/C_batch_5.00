// how take string from user
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter your name : ");
    scanf("%s", name); // shyam
    int i;
    for (i = 0; name[i] != '\0'; i++) // 7
    {
        printf("%c\n", name[i]); // c h e t a n
    }
}