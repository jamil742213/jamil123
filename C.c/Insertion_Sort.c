#include<stdio.h>
#include<string.h>

void PrintArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
void Insertion_Sort(int *A, int n)
{
    int key,j;
    //Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        printf("Working for Each passes: %d\n",i);
        //Loop for each passes
        while (j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        

    }
    
}
int main()
{
    int A[] = {12, 54, 65, 4, 7, 23, 9};
    int n = sizeof(A)/sizeof(A[0]);

    PrintArray(A, n);
    Insertion_Sort(A, n);
    PrintArray(A, n);

    return 0;
}