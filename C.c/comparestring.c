#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    int flag;
    char s1[30];
    char s2[30];
    printf("Enter a  character");
    gets(s1);
    
    printf("Enter a  character");
    gets(s2);

    value = strcmp(s1, s2);
    if (value == 0)
    {
        printf("same");

    }
    else
        printf("not same");
    for (int i = 0; s1[i]!='\0' || s2[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nnot Ssame");
    }
    else
        printf("\nSame");
    
    

    return 0;
}