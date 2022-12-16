#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int vowels=0,consonant = 0;
    printf("Enter your sentence for cheak vowel and consonant : ");
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
            if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                vowels = vowels++;

            }
            else
            {
                consonant++;
            }
                printf("%d The vowel is : %c\n",vowels,a);
                printf("%d The consonant is : %c\n",vowels,a);
    }
     

return 0;
}