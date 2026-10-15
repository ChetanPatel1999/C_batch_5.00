// Write a program to print table of given number.
// 4 X 1= 4
// 4 X 2= 8
// 4 X 3= 12
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n); // 7
    i = 1;
    while (i <= 10)
    {
        // printf("%d \n", n * i);
        printf("%d X %d = %d \n", n, i, n * i);
        i++;
    }
}