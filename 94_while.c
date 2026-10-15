// 5. Calculate power of a number without using pow().
#include <stdio.h>
void main()
{
    int n, p, res = 1;
    printf("enter num : ");
    scanf("%d", &n); // 5
    printf("enter power : ");
    scanf("%d", &p); // 4
    int i = 1;
    while (i <= p)
    {
        res = res * n; // 625
        i++;
    }
    printf("power result = %d", res);
}