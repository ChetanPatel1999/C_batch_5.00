// Write a program to find the average of all elements in a matrix. 
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter matrix row : ");
    scanf("%d", &r);
    printf("enter matrix column : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;

    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix elements are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (i = 0; i < r; i++) // 1
    {
        for (j = 0; j < c; j++) // 1
        {
            sum = sum + mat[i][j]; // 21
        }
    }

    printf("matrix elements sum is = %d", sum); // 29
    printf("\nmatrix elements average is = %.2f", sum / (float)(r * c));
}