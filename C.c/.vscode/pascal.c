#include<stdio.h>
int main()
{
int row,c=1, k;
printf("Number of rows");
scanf("%d",&row);
for (int i = 0; i < row; i++)
{
    for (int k = 1; k <=row-i; k++)
    
        printf(" ");
    for (int j = 0; j <=i; j++){
    {
        if (j==0 || i==0)
            c=1;
        else
            c=c*(i-j+1)/j;
            printf("%d",c);
        
    }
    printf("\n");
    }

    
}

    

return 0;
}