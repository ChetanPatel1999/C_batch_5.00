// 11. Write a program to find and display only main diagonal element of a matrix.
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

    if (r == c)
    {
        // printf("matrix digonal elements are : \n");
        // for (i = 0; i < r; i++) //2
        //     printf("%d ", mat[i][i]);
        // }

        // printf("matrix digonal elements are : \n");
        // for (i = 0; i < r; i++) // 1
        // {
        //     for (j = 0; j < c; j++) // 1
        //     {
        //         if (i == j)
        //         {
        //             printf("%d ", mat[i][j]);
        //         }
        //         else
        //         {
        //             printf("0 ");
        //         }
        //     }
        //     printf("\n");
        // }

        printf("matrix oposite digonal elements are : \n");
        for (i = 0; i < r; i++) // 2   //02 11 20
        {
            printf("%d ", mat[i][(r - 1) - i]);
        }

        // printf("matrix oposite digonal elements are : \n");
        // for (i = 0; i < r; i++) // 1
        // {
        //     for (j = 0; j < c; j++) // 1
        //     {
        //         if (i + j == (r - 1))
        //         {
        //             printf("%d ", mat[i][j]);
        //         }
        //         else
        //         {
        //             printf("0 ");
        //         }
        //     }
        //     printf("\n");
        // }
    }
    else
    {
        printf("your matrix is not square matrix");
    }
}