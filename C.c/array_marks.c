#include<stdio.h>

void main()
{
    float marks[5],sum=0,avg;
    printf("Enter your subjects marks ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&marks[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        /* code */
        printf("%f",marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum=sum+marks[i];
    }
    avg = sum/5;
    printf("\nThe sum of the total subjects %f",sum);
    
    printf("\nThe Average of the trotal subjects %f",avg);

    
    
}