#include<stdio.h>
// int A[1,2,3,4,5,6,7,84,343,3,2,3,4,5,5,5,6,7433,9,0]

void print_array(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bublesort(int *A, int n)
{
    int temp;
    int isSSorted=0;
    for (int i = 0; i < n-1; i++)
    {
            printf("Working on pass %d\n",i+1);
            for (int j = 0; j < n-1-i; j++)
            {
                if (A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;

                }
                
            }
            
    }
    
}
void buble_sort(int *A, int n)
{
    int temp;
    int isSSorted=0;
    for (int i = 0; i < n-1; i++)
    {
            printf("Working on pass %d\n",i+1);
            for (int j = 0; j < n-1-i; j++)
            {
                if (A[j]>A[j+1])
                {
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                    isSSorted = 0;
                }
                
            }
            if (isSSorted)
            {
                return ;
            }
            
    }
    
}
int main()
{
    // int A[]={1,7,9,87,45,87655,53,1,3,5};
    int A[]={19,89,5,76,864,97,9,56,24,1};
    int n =11;
    print_array(A,n);
    bublesort(A,n);
    print_array(A,n);
return 0;
}