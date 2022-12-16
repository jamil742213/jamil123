#include<stdio.h>
int main()
{
    char op;
int a, b,sum,sub,multi;
float div;
printf("Eneter a operator ");
scanf("%c",&op);
printf("Eneter first number ");
scanf("%d",&a);
printf("Eneter second number ");
scanf("%d",&b);
switch (op)
{
case '+': sum=a+b;
    printf("The sum is :%d",sum);
    break;
case '-':
    sub=a-b;
    printf("The sum is :%d",sub);
    break;
case '*':
    multi=a*b;
    printf("The sum is :%d",multi);
    break;
case '/':
    div=(float)a/b;
    printf("The sum is :%d",div);
    break;

default:
    printf("YOU HAVE ENTERED INVALID INPUT ");
    break;
}
return 0;
}