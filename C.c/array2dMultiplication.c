#include<stdio.h>
#define n 3
int main()
{
    int arr[n][n], arr1[n][n],c[n][n];
    int sum = 0;
    printf("Enter you 3x3 matrix first :");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Enter your second  3x3 matrix :");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("The multiply  matrix is :");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum = sum +arr[i][j] * arr1[i][j];
            }
            c[i][j] = sum;
        }
        
    }
    printf("Multiplication pof two matrice : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        
    }
    
    
return 0;
}