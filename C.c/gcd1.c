#include<stdio.h>
int main()
{
int a, b,gcd;
printf("Enter a number");
scanf("%d %d ",&a,&b);
if (a==0)
{
    printf("Gcd = %d ",b);
}
while (b!=0)
{
    if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
}
gcd=a;
printf("gcd = %d ",gcd);

return 0;
}