#include <stdio.h>
#include <string.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + i;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;

        }
    } while (i < j);

    //Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void Quick_Sort(int A[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        PrintArray(A, 9);
        Quick_Sort(A, low, partitionIndex - 1);
        Quick_Sort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int A[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 9;
    n=7;

    PrintArray(A, n);
    Quick_Sort(A, 0, n - 1);
    PrintArray(A, n);
    return 0;
}