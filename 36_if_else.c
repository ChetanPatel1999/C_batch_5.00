// Write a program to accept a number and check it is less then 500 or greater then
// 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter num = ");
    scanf("%d", &num); //500
    if (num > 500)
    {
        printf("num is greater 500");
    }
    else
    {
        printf("num is less than 500");
    }
}