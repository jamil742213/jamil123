#include<stdio.h>
int main()
{
int number,a;
    printf("Enter a number : ");
    scanf("%d",&number);
    for (int i = 1; i <=10; i++)
    {
        a=number*i;
        printf("\nThe multiple number \n");
        printf("\n%d x %d = %d ",i,number,a);
    }
    
return 0;
}