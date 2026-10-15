// Write a program to display number square 1 to n (given number).
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 5
    i = 1;
    while (i <= n)
    {
        printf("square of %d = %d \n", i, i * i);
        i++;
    }
}