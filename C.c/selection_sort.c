#include<stdio.h>
void PrintArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
    printf("\n");
}
void Selection_Sort(int *A, int n)
{
    int indexofmin, temp;
    printf("Running Selection sorte.............\n ");
    for (int i = 0; i < n-1; i++)
    {
    printf("Working on passes\n");
        indexofmin = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
            temp = A[i];
            A[i] = A[indexofmin];
            A[indexofmin] = temp;
        }
        
    }
    
}

int main()
{
    int A[] = {3,5,2,13,12}, n=5;
    // printf("Enter your Array  \n");
    // scanf("%d",&A);
    // printf("Enter your Array Length \n");
    // scanf("%d",&n);
    PrintArray(A, n);
    Selection_Sort(A, n);
    PrintArray(A, n);

    return 0;
}