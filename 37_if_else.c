// Write a program to check given number is even or odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter num = ");
    scanf("%d", &num); // 31
    if (num % 2 == 0)
    {
        printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
}