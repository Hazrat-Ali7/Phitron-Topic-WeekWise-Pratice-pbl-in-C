#include<stdio.h>

int sort_by_accending(int A[],int size);
int kth_largest(int k,int A[],int size);
int kth_smallest(int k,int A[]);
void swap(int *a,int *b);

int main(void)
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    sort_by_accending(A,n);

    int k;
    scanf("%d",&k);

    int kth_large=kth_largest(k,A,n);
    int kth_small=kth_smallest(k,A);

    printf("%dth largest element = %d\n",k,kth_large);
    printf("%dth smallest element = %d\n",k,kth_small);
    return 0;
}

int sort_by_accending(int A[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(A[j]>A[j+1])
                swap(&A[j],&A[j+1]);
        }
    }
}
int kth_largest(int k,int A[],int size)
{
    return A[size-k];
}
int kth_smallest(int k,int A[])
{
    return A[k-1];
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

