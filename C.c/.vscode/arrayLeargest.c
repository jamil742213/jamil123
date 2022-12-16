#include<stdio.h>
int main()
{
    int A[50],i,n,learge,small;
    printf("Enter number of array :");
    scanf("%d",&n);
    printf("Input the array element :");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
        learge=small=A[0];
        for ( i = 1; i < n; i++)
        {
            if(A[i]>learge)
            learge=A[i];
        }
    }
        printf("The smallest number is  %d \n",small);
        printf("The largest number is %d \n",learge);
return 0;
}