// Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 70
    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}