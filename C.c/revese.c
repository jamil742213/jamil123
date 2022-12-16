#include<stdio.h>
#include<string.h>
int main()
{

    int l;
    char s1[30],ch;
    printf("Enter a  character");
    gets(s1);
    l=strlen(s1);

    for (int i = 0; i<l/2; i++)
    {
        /* code */
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("%s",s1);
    return 0;  
}