// wap to print a msg 5 times using recursion.
#include <stdio.h>

void fun()
{
    static int i = 1; // its execute only once time in program
    printf("hello world institue\n");//3
    i++; // 13
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}