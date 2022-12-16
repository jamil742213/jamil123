#include<stdio.h>
#define n 2
int main()

{
    int a[n];
    printf("enter the array element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>n)
        {
            /* code */
            printf("The gretest number  %d is %d \n",i,a[i]);
        }
        else
            printf("The smallest number %d is %d \n",i,a[i]);
    }
    
    
}