#include <stdio.h>
void fun2(); // function declaration
void fun1()
{
    printf("hello i am fun1\n");
    fun2();
}
void fun2()
{
    printf("hello i am fun2\n");
}
void fun3()
{
    fun1();
    printf("hello i am fun3\n");
}
void main()
{
    printf("main fun is start\n");
    fun3();
    printf("main fun is end\n");
}