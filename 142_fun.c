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
void main()
{
    square();
    int i;
    for (i = 1; i <= 5; i++) // 3
    {
        add();
    }
}
