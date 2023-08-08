#include <stdio.h>

int main()
{   int i,j,k,l;
    int a, b, c, d;
    int m[10][10], n[10][10], sum[10][10] ,sub[10][10], product[10][10];

    printf("\n\n\t\tOPERATIONS OF TWO DIFFERENT MATRICES\n");
    printf("\nEnter number of rows and columns of the first matrix:\n");
    scanf("%d%d", &a, &b);

    // Input for the first matrix
    for (i = 0; i < a; i++)
    {
        printf("Enter elements of row %d for the first matrix:\n", i + 1);
        for (j = 0; j < b; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nEnter number of rows and columns of the second matrix:\n");
    scanf("%d%d", &c, &d);

    // Input for the second matrix
    for (k = 0; k < c; k++)
    {
        printf("Enter elements of row %d for the second matrix:\n", k + 1);
        for (l = 0; l < d; l++)
        {
            scanf("%d", &n[k][l]);
        }
    }

    printf("\nFirst Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }

    if (a == c && b == d)
    {
        printf("\nSum of the matrices:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                sum[i][j] = m[i][j] + n[i][j];
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSorry, the order of both matrices is not the same.\n");
    }


    if (a == c && b == d)
    {
        printf("\nSubtraction of the matrices:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                sub[i][j] = m[i][j] - n[i][j];
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nSorry, the order of both matrices is not the same.\n");
    }


    if (b != c)
    {
        printf("\n\nMatrix multiplication is not possible. As columns in the first matrix is not equal to rows in the second matrix.\n\n");
        return 1;
    }


     // Matrix multiplication
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                product[i][j] += m[i][k] * n[k][j];
            }
        }
    }

    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}