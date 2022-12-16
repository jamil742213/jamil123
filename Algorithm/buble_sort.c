#include<stdio.h>
int main()
{
int n[10],i,j,temp;
printf("Enter 10 integer values: ");
for ( i = 0; i < 10; i++)
{
    scanf("%d",&n[i]);
}

for ( i = 0; i < 10; i++)
{
    printf("Working on pass %d \n",i+1);
    for ( j = i+1; j < 10; j++)
    {
        if (n[i]>n[j])
        {
            temp=n[i];
            n[i]=n[j];
            n[j]=temp;
        }
        
    }
    
}
for (i = 0; i < 10; i++)
{
    printf("%d ",n[i]);
}



return 0;
}