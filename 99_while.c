// Write a program that takes a number as input and counts how many even
//  digits it contains.
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
            res = res + 1;
        }
        num = num / 10;
    }
    printf("only even digit count = %d", res);
}