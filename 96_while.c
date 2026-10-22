//  Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter  a num : ");
    scanf("%d", &num); // 325
    while (num > 0)
    {
        rem = num % 10;
        res = res + rem; // 15
        num = num / 10;
    }
    printf("sum of individual digit = %d", res);
}