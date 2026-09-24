#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 5 == 5 && 400 > 89;
    // res = 12 > 77 || 56 == 5 || 4 > 89;
    // res = 1 && 1;
    // res = 1 && 0;
    // res = !(12 > 8);
    // res = !(12 > 88);
    res = !(4 > 7 && 6 == 9);
    printf("res = %d", res);
}