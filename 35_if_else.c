// wap to take two integer value from user and cheke both number are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter first num = ");
    scanf("%d", &a); // 9
    printf("enter second num = ");
    scanf("%d", &b); // 9
    if (a == b)
    {
        printf("both number are same");
    }
    else
    {
        printf("both numbers are different");
    }
}