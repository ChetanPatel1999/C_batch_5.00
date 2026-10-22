//   Write a program to that takes a number as input and calculates the sum of
// only its even digits.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter  a num : ");
    scanf("%d", &num); // 2341
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            res = res + rem; // 6
        }
        num = num / 10;
    }
    printf("sum of even individual digit = %d", res);
}