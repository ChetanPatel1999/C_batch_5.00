#include <stdio.h>
void main()
{
    int mat[2][2] = {{44, 55}, {76, 89}};
    printf("matrix elements are : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 3
    {
        for (j = 0; j < 2; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}