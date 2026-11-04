// no return type but with parameter
#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum = %d\n", c);
}
void square(int n)
{
    int s;
    s = n * n;
    printf("square = %d\n", s);
}
void areaOfCircle(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f\n", area);
}

void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("greatest num = %d\n", a);
    }
    else
    {
        printf("greatest num = %d\n", b);
    }
}

void table(int n)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}

void main()
{

    table(12);
    
    // greatestNum(34, 80);
    // areaOfCircle(5.6);
    // square(7);
    // square(4);
    // square(3);
    // add(34, 10);
    // add(10, 40);
    // add(4,8);
}