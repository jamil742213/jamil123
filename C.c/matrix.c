#include<stdio.h>
#define N 3
#define M 3
int main()
{
    int m[N][M];
    printf("Enter the matrix num: ");
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        scanf("%d",&m[i][j]);
    }
    
}
for (int i = 0; i < N; i++)
{
    printf("\n");
    for (int j = 0; j < M; j++)
    {
        printf("%d  ",m[i][j]);
    }
    
}
printf("\n\n\n\n\n\n");
printf("*********************************************\n");
return 0;
}