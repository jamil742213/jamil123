#include<stdio.h>
int main()
{
int a, b, gcd;
printf("Enter a num");
scanf("%d %d ",&a,&b);
if (a==0)
{
    printf("GCD = %d ",b);
}
for (int i = 0; i <=a && i<=b; i++)
{
    if (a>b)
    {
        a=a-b;
    }
    else{
        b=b-a;
    }
}
gcd=a;
printf("gcd= %d ",gcd);
return 0;
}