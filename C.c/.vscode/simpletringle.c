#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enetr range");
    scanf("%d",&n);
    for (int i = 1; i <n; i++)
    {
        for (int j = 1; j <n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <i; k++)
        {
            printf("%d",k);
        }
        for (int l = i; l >=1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
        
    }
    
    

return 0;
}