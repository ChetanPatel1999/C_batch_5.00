// strcmp():- its compare two string string are same so return 0 otherwise return 1
#include <string.h>
#include <stdio.h>
void main()
{
    char name1[50] = "ram", name2[50] = "rama";
    printf("name1 = %s\n", name1);
    printf("name2 = %s\n", name2);
    if (strcmp(name1, name2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}