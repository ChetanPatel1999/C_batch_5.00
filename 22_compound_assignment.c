// example of compound assignment
#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("----------\n");
    // a += b;
    // b += b;
    // a += 20;
    // a -= b;
    // a *= b;
    // b *= b;
    // b *= a;
    // b /= a;
    a %= b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}