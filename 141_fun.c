#include <stdio.h>
void add(); // function  declaration
void main()
{
    add(); //function calling
}
void add() // function defination
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("sum = %d\n", c);
}