#include <stdio.h>
#include <string.h>
#define N 5
int j;
int i;
int main()
{
    int a[N];
    printf("Enetr the number of array :");

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    printf("Position of the array is :");
    scanf("%d", &j);
    
    printf("The array is :--:");
    for (int i = 0; i < N; i++)
    {
        printf("%d  ", a[i]);
    }
    if (j >= N)
    {
        printf("Invalid Input");
    }
    else
        printf("Array [%d]= %d",j, a[j]);
    return 0;
}
