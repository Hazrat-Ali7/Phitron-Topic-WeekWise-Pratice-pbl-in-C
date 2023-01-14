#include<stdio.h>

void sort_by_accending(int A[],int size);
void swap(int *a,int *b);

int main(void)
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
        scanf("%d",A+i);

    sort_by_accending(A,n);

    for(int i=0; i<n; i++)
        printf("%d ",*(A+i));
    return 0;
}
void sort_by_accending(int A[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
            if(A[j]>A[j+1])
                swap(&A[j],&A[j+1]);
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
