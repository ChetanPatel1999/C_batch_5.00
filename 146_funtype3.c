#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int res;
    res = add(12, 6); // calling way 1
    printf("sum = %d\n", res);

    printf("sum = %d", add(34, 5)); // calling way 2
}