#include<stdio.h>
#include<string.h>
int main()
{
    char a1[20],a2[20];
    printf("Enter your string :");
    gets(a2);
    strcpy(a1, a2);
    printf("The first string is :\n");
    puts(a1);
    printf("The second string is :\n");
    puts(a2);
    
    
return 0;
}