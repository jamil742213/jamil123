#include<stdio.h>
int main()
{
    int i;
    int a[5],b[5],sum[5];
    for ( i = 0; i < 5; i++)
    {
        scanf("%d ",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        scanf("%d ",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
       printf("The matrix is =%d  %d \n",a[i],b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        sum[i]=a[i]+b[i];
        printf("The array is %d is = %d \n",i,sum[i]);
    }
    

return 0;
}