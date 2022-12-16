// Write a program to find  the sum of two number

#include<stdio.h>

int main(){

    int a,b=0;
    printf("Enter A first number ");
    scanf("%d",&a);
    b=b+a%10;
    a=a/10;
    b=b+a;
    printf("Sum  of the two number is:%d",b);
    return 0;
}
