// transpose matrix 
#include<stdio.h>
int main()
{
    int a[2][3],i,j;
    printf("Enter array");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d ",&a[i][j]);
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
        
    }

    printf("\n");
    printf("\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <2; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

return 0;
}

