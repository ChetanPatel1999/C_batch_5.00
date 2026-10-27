// wap to print odd number using continue.
#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            i++;
            continue;
        }
        printf("%d\n", i); // 1 2 3 4 6 7 ......
        i++;               // 7
    }
}