#include<stdio.h>
int main()
{
int num,r,sum,temp,range1,range2;
printf("Input  a number range 1 ");
scanf("%d",&range1);
printf("Input  a number range 2 ");
scanf("%d",&range2);

printf("Armstrong number is : ");
for (int num = range1; num <=range2; num++)
{
    temp=num;
    sum=0;
    while (temp!=0)
    {
        r=temp%10;
        temp=temp/10;
        sum=sum+(r*r*r);
    }
    if (sum==num)
    {
        printf("%d\n",num);
    }
    // printf("\n");
}
return 0;
}