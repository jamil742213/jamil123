#include <stdio.h>
#define N 10
int main()
{
    int a[N], even, odd;
    printf("Enter  number  in integer ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
            odd = odd + 1;
    }
    printf("The even number is : %d ", even);
    printf("The odd number is :  %d ", odd);

    return 0;
}