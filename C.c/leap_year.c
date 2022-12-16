// Write a program a year leap year or not

#include<stdio.h>
// #include<conio.h>

int main()
{
    int a;
    printf("Enter A year  to cheak leap year");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("This year is leap yaer");
    }
    else
    printf("This year is not leap  year");
    
    return 0;

}