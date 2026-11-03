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
void multiply()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a * b;
    printf("multiplay = %d\n", c);
}
void main()
{
    printf("this is main function\n");
    add();
    add();
    multiply();
    printf("aftre main function is end");
}