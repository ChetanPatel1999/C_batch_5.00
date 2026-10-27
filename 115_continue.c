// wap to print odd number using continue.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++) // 11
    {
        if (i >= 7 && i <= 12)
        {
            continue;
        }
        else if (i == 10)
        {
            break;
        }
        printf("%d ", i);
    }
}