#include<stdio.h>

int main()
{
    int ar1[3],ar2[3], sum_array[3];

    printf("Enter the array elements : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&ar1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&ar2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        sum_array[i]=ar1[i]+ar2[i];
        printf("The array element index at %d is %d \n",i,sum_array[i]);
    }
    return 0;
}