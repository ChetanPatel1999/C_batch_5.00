// wap to print a 1 to 10 number using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("%d\n", i);
    i++; // 3
    if (i <= 10)
    {
        fun();
    }
}
void main()
{
    fun();
}