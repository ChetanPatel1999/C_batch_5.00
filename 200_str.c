// strupr() :- its convert string in upercase string
// strlwr() :- its convert string in lowercase string
#include <stdio.h>
#include <string.h>
void upper(char name[]) // abc
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
}
void main()
{
    char name[50];
    printf("enter string = ");
    gets(name); // ram
    printf("name = %s\n", name);
    // strupr(name);
    // upper(name);
    strlwr(name);
    printf("name = %s\n", name);
}