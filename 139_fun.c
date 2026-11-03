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
void main()
{
    printf("this is main function\n");
    add();
    add();
    printf("aftre main function is end");
}