#include<stdio.h>
int main()
{
    float i,j,k,r;
    float y=100;
    printf("Enter your price :");
    scanf("%f",&i);
    printf("Enter your rate per percentage :");
    scanf("%f",&j);
    k=i*j/y;
    printf("The per is %f \n",k);
    r=i-k;
    printf("The rate percentage after that : %f\n",r);

    return 0;
}