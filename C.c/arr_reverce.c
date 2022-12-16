#include<stdio.h>
void main(){
    int a[5],i;
    printf("Enter the array element : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array element is :--: ");
    for ( i = 4; i >= 0; i--)
    {
        printf("%d  ",a[i]);
    }
    


}