// with return type but no parameter
#include <stdio.h>
int add()
{
    int a, b, c;
    printf("enter  a = ");
    scanf("%d", &a);
    printf("enter  b = ");
    scanf("%d", &b);
    c = a + b;
    return c;
}

float areaOfCircle()
{
    float radius, area;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    return area;
}

void main()
{

    printf("area of circle = %.2f", areaOfCircle());

    // int res;
    // res = add(); // calling way 1
    // printf("sum = %d\n", res);

    // printf("sum = %d", add()); // calling way 2
}