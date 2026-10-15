//  Write a program to display factorial of given number.
#include <stdio.h>
void main()
{
    int i, n, fact = 1;
    printf("enter a num: ");
    scanf("%d", &n); // 6
    for (i = 1; i <= n; i++)//6
    {
        fact = fact * i;//720
    }
    printf("factorial = %d", fact);
}