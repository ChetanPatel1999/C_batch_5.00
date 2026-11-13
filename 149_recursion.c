// its run infinite times
#include <stdio.h>
void fun()
{
    printf("hello world institue\n");
    fun(); // recursive calling
}
void main()
{
    fun();
}