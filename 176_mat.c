// Write a program to count total even and odd elements in a matrix.
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

    int ec = 0, oc = 0;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            if (mat[i][j] % 2 == 0)
            {
                ec++;
            }
            else
            {
                oc++;
            }
        }
    }
    printf("even count = %d\n",ec);
    printf("odd count = %d\n",oc);
   
}