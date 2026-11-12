// with return with parameter
#include <stdio.h>
// int square(int n)
// {
//     int s;
//     s = n * n;
//     return s;
// }

int square(int n)
{
    return n * n;
}

float areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    return area;
}

int greatestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int reverseNumber(int num) // 567
{
    int rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem; // 76
        num = num / 10;
    }
    return rev;
}

void main()
{

    printf("reverse number = %d", reverseNumber(456));
    // int res = greatestNum(344, 78);
    // printf("greatest num = %d", res);

    // printf("area of circle = %.2f", areaOfCircle(4.5));
    // printf("square = %d\n", square(8));
    // int ans = square(5);
    // printf("square = %d\n", ans);
}