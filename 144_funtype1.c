// no return type no parameter
#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("sum = %d\n", c);
}
void square()
{
    int n, s;
    printf("enter a num = ");
    scanf("%d", &n);
    s = n * n;
    printf("square = %d\n", s);
}
void areaOfCircle()
{
    float radius, area;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f\n", area);
}
void greatestNum()
{
    int a, b;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greatest num = %d\n", a);
    }
    else
    {
        printf("greatest num = %d\n", b);
    }
}
void table()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 9
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}
void main()
{
    table();
}