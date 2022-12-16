#include <stdio.h>
int main()
{
    int a[3][3], i, j, row, columns;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        row = columns = 0;
        for (j = 0; j < 3; j++)
        {
            row = row + a[i][j];
            columns = columns + a[j][i];
        }
        printf("row = %d \nColumns = %d \n", row, columns);
    }

    return 0;
}