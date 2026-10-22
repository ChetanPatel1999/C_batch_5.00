// Write a program that takes a number as input and counts how many digits
//  it contains.
#include <stdio.h>
void main()
{
    int num, res = 0;
    printf("enter  a num : ");
    scanf("%d", &num); // 67
    while (num > 0)
    {
        res = res + 1; // 3
        num = num / 10;
    }
    printf("total digit count = %d", res);
}