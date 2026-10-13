#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 5
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}