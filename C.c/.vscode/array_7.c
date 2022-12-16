#include <stdio.h>
#define N 3
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d ", &b[i][j]);
        }
    }
    printf("The first matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The second  matrix is \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if (n != p)
    {
        printf("Can not multiply:");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }

        printf("Multiplication is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d    ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;



}