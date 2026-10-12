// 4 x 1 = 4
// 4 x 2 = 8
// 4 x 3 = 12
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n);          // 9
    for (i = 1; i <= 10; i++) // 3
    {
        printf("%d  X  %d =  %d\n", n, i, n * i); //
    }
}
